#include <stdio.h>


int main(){
    double a, b ,c , *ptr;
    double car;
    ptr=&a;
    a=5;
    printf("%d ",ptr);
    /*printf("%d ",&a);
    printf("%d ",&ptr);
    printf("%d ",*ptr);
    a=10;
    printf("%d ",*ptr);
    *ptr=8;
    printf("%d ",a);
    printf("%d ",a);*/
    
    printf("%d ",*(ptr+1));
    
    printf("%d",sizeof(car));
}