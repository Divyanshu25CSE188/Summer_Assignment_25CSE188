//Q2	Write a program to Print multiplication table of a given number.	TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    int n,t,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {t=n*i;
    printf("%d x%d =%d\n",n,i,t);}

    return 0;
}