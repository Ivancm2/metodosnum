#include <stdio.h>

int main(){
    int a=5;
    int* p,* p1;
    p=&a;
    p1=p;
    printf("%d ",&a);
    printf("%d %d", p1, *p1);
    return 0;
}