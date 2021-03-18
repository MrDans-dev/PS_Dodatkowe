/*
    156038 - DK
    Napisz funkcj�, kt�rej parametrami s� trzy dodatnie liczby ca�kowite n, m i k.

    Funkcja ma zwr�ci� sum� liczb wi�kszych ni� n,
    mniejszych lub r�wnych m
    niepodzielnych przez k.

    Stw�rz dwa przypadki testowe dla funkcji.
*/


#include <stdio.h>
#include <stdlib.h>

int foo(int n , int m, int k)
{
    int suma=0;
    for(int i=n;i<=m;i++)
        if(i%k!=0) suma+=i;
    return suma;
}

int main()
{
    printf("n = %d m = %d k = %d = %d\n",6,12,2,foo(6,12,2));
    printf("n = %d m = %d k = %d = %d\n",2,13,5,foo(2,13,5));
    printf("n = %d m = %d k = %d = %d\n\n",5,10,5,foo(5,10,5));
    return 0;
}
