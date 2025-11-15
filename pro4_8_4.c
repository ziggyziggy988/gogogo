#include<stdio.h>
int main(void)//输出名字+身高
{
    float height;
    char name[20];
    printf("please input your height in centimeter.\n");
    scanf("%f",&height);
    printf("please input your name.\n");
    scanf("%s",name);
    printf("%s,you are %.3fmeter tall.\n",name,height/100);

    return 0;
}