#include<stdio.h>
#include<string.h>
int main(void)//字符串输出格式
{
    char name[40];
    printf("please input your name\n");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    int length=strlen(name);
    printf("\"%*s\"\n",-length-3,name);

    return 0;
}