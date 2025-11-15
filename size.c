#include<stdio.h>
int main(void)//计算各数值类型所占字节数
{
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type float has a size of %zd bytes.\n",sizeof(float));
    printf("Type long has a size of %zd bytes.\n",sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
    printf("Type char has a size of %zd bytes.\n",sizeof(char));
    printf("Type double has a size of %zd bytes.\n",sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",sizeof(long double));

    return 0;
}