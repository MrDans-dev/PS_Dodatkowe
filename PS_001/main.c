/*
    156038 - DK
    Napisz funkcjÍ, ktÛrej parametrami sπ trzy dodatnie liczby ca≥kowite n, m i k. Funkcja ma zwrÛciÊ
    2 jeúli m jest podzielne jednoczeúnie przez n i k,
    1 jeúli jest podzielne tylko przez jednπ z liczb n lub k oraz zwraca
    0 w przeciwnym wypadku. StwÛrz przypadek testowy dla funkcji.
*/

#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n,unsigned int m,unsigned int k)
{
    if(n%m==0 && n%k==0) return 2;
    if(n%m==0 || n%k==0) return 1;
    return 0;
}

int foo_ws(int *n , int *m , int *k)
{
    if(*n%*m==0 && *n%*k==0) return 2;
    if(*n%*m==0 || *n%*k==0) return 1;
    return 0;
}

int main()
{
    printf("n = %d m = %d k = %d -- %d\n",12,6,2,foo(12,6,2));
    printf("n = %d m = %d k = %d -- %d\n",6,3,4,foo(6,3,4));
    printf("n = %d m = %d k = %d -- %d\n",3,4,5,foo(3,4,5));
    //----------------WSKAèNIKI-----------------------------
    printf("Przyk≥ad na wskaünikach\n");
    int a=12,b=6,c=2;
    printf("n = %d m = %d k = %d -- %d\n",a,b,c,foo_ws(&a,&b,&c));
    return 0;
}
