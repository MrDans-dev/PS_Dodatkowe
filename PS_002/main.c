/*
    156038 - DK
    Napisz funkcjê, której parametrami s¹ trzy dodatnie liczby ca³kowite n, m i k.

    Funkcja ma zwróciæ sumê liczb wiêkszych ni¿ n,
    mniejszych lub równych m
    niepodzielnych przez k.

    Stwórz dwa przypadki testowe dla funkcji.
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
