#include<stdio.h>

int main()
{
    int num,a[1000],n,i;

    printf("Enter a decimal number: ");
    scanf("%d",&num);

    printf("The equivalent of decimal %d to binary is: ",num);

    for(n=0;num>0;n++)
    {
        a[n]=num%2;
        num=num/2;
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

    return 0;
}


