#include<stdio.h>
#include<stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

typedef struct Persona{
    int edad;
    char *sexo;
    int id;
}Persona;
typedef struct Node{
	struct Node *next;
	struct Node *previous;
	char *data;
}node_t;

typedef struct Queue{
	node_t *top;
	node_t *bottom;
	int size;
}queue_t;

node_t *createNode(char*);
char* removeNode(node_t*);

queue_t *createQueue();
int removeQueue(queue_t *);

char *peek(queue_t *);
int isEmpty(queue_t *);

/* Si manejaramos una Queue estática...
int isFull(queue_t *);
*/

int enqueue(char *, queue_t *);
char *dequeue(queue_t *);

int printQueue(queue_t *);
int printNode(node_t *);

int getQueueSize(queue_t *);

node_t *createNode(char *data){
	node_t *node = (node_t *)calloc(1, sizeof(node_t));
	node->data = data;

	return node;
}

char* removeNode(node_t *node){
   char* data = NULL;
   if (node) {
      if (node->previous)
         node->previous->next = node->next;
      if (node->next)
         node->next->previous = node->previous;
      data = node->data;
      free(node);
   }
   return data;
}

queue_t *createQueue(){
	queue_t *queue = (queue_t *)calloc(1, sizeof(queue_t));

	return queue;
}

int removeQueue(queue_t *queue){
   if (queue) {
      node_t *ptr = queue->top;
      node_t *aux;

      while(ptr != NULL){
         aux = ptr;
         ptr = ptr->next;
         free(removeNode(aux));
      }
      free(queue);
   }
   return (queue == NULL);
}

char *peek(queue_t *queue){
   if (queue && queue->top != NULL){
      return queue->top->data;
   }
   return NULL;
}

int isEmpty(queue_t *queue){
	return (queue->top == NULL);
}

int enqueue(char *data, queue_t *queue){
	if(queue != NULL){
		node_t * nuevo = createNode(data);

		if(queue->bottom == NULL){
			queue->bottom = nuevo;
			queue->top = nuevo;
			//queue->top->previous = queue->bottom;
			//No need to set previous for bottom since calloc makes it null.

		}else{
			queue->bottom->next = nuevo;
			nuevo->previous = queue->bottom;
			nuevo->next = NULL;
			queue->bottom = nuevo;
		}

		queue->size++;
		return EXIT_SUCCESS;
	}
	return EXIT_FAILURE;
}

char *dequeue(queue_t *queue){
	if(queue != NULL && queue->top != NULL){
		char *data;
		node_t *aux = queue->top;
		queue->top = aux->next;
		queue->top->previous = NULL;
		data = removeNode(aux);

		queue->size--;
		return data;
	}
	return NULL;
}

int printQueue(queue_t *queue){
	node_t *ptr = queue->top;
	int i, size = getQueueSize(queue);
	for(i = 0; i<size; i++){
	 	printf("[%i]Address: %p, Data: %s, Next: %p, Previous: %p\n", i, ptr, ptr->data, ptr->next, ptr->previous);
	 	ptr = ptr->next;
	}

	printf("\n");

	return EXIT_SUCCESS;
}

int printNode(node_t *ptr){
	char *i = "printNode function";
	#ifdef __unix__
 		printf(GRN"[%s]Address: %p, Data: %s, Next: %p, Previous: %p\n"RESET, i, ptr, ptr->data, ptr->next, ptr->previous);
	#elif __WIN32
 		printf("[%s]Address: %p, Data: %s, Next: %p, Previous: %p\n", i, ptr, ptr->data, ptr->next, ptr->previous);
	#endif

 	printf("\n");

 	return EXIT_SUCCESS;
}

int getQueueSize(queue_t *queue){
	return queue->size;
}