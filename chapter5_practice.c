#include<stdio.h>
int main(void)//生成100以内的所有质数
{
    int i=1;
    int j=2;
    
    while(++i<100)
    {
        while(j<i)
        {
        if(i%j!=0)
        j++;
        else
        break;
        }
        if (j==i)
        printf("%d ",i);
        j=2;
    }

    return 0;
}