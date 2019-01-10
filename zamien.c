#include <stdio.h>
void zamien(int* x, int* y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
//int *cos, x=666, *cos2;
//
//cos = &x;
//cos2= cos;
//
//printf("\n liczba z wyznacznika pierwszego : %d", *cos);
//    printf("\n liczba z wyznacznika drugiego : %d", *cos2);
//printf("\n");


int a = 6, b =7;

printf("a= %d, b= %d\n", a,b);
        zamien(&a,&b);
    printf("a= %d, b= %d\n", a,b); 

    return 0;
}