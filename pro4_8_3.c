#include<stdio.h>
int main(void)//浮点数输出格式
{
    float i;
    printf("please input a float number\n");
    scanf("%f",&i);
    printf("a.The input is %.1f or %.1e.\n",i,i);
    printf("b.The input is %.3f or %.3E.\n",i,i);

    return 0;
}