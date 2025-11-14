#include<stdio.h>
int main(void)
{
    float toobig=3.4E38*100.0f;
    printf("%e\n",toobig);//float上溢
    float toosmall=0.1234E-100/100000000;
    printf("%e\n",toosmall);//float下溢

    return 0;
}