#include <stdio.h>
#include "cola.h"
#include <windows.h>
struct Ventanilla{
    int id;
    char *estado;
};
int main(){
    queue_t *cola;
    char *texto;
    cola=createQueue();
    enqueue("Juan",cola);
    system("cls");
    printQueue(cola);
    Sleep(5000);
    enqueue("Jesus",cola);
    system("cls");
    printQueue(cola);
    Sleep(5000);
    
    enqueue("Ricardo",cola);
    system("cls");
    printQueue(cola);
    Sleep(5000);


    return 0;
}