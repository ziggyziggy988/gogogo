#include<stdio.h>
int main(void)//练习创建数组并用输入语句赋值字符串,以及简单输出练习
{
    char fn[20];
    char ln[20];
    printf("please input your last name.\n");
    scanf("%s",ln);
    printf("please input your first name.\n");
    scanf("%s",fn);
    printf("%s",fn);
    printf(" %s",ln);



    return 0;
}