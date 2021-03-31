#include <stdio.h>

int main(){
    /*Te voy dar un rango de numeros, min y max, luego te voy a dar un numero num
    Quiero que me des como resultado todos los numeros entre min y max (sin contar a min y max)
    que sean divisibles entre num
    */
   int min, max, num;
   printf("Dame tu min, max y num");
   scanf("%d %d %d", &min, &max, &num);

   for (int i=min;i<max;i++){
       if (i%num==0){
           printf("El numero %d es divisible entre %d\n",i,num);
       }
   }
    return 0;
}