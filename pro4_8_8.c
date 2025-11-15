#include<stdio.h>
#define x 3.785//1加仑为3.785升,定义常量x
int main(void)
{
    float mile,fuel;
    const float y=1.609;//一英里为1.609公里，定义只读变量y
    printf("Please input your journey in miles.\n");
    scanf("%f",&mile);
    printf("Please input your fuel comsumption in gallons.\n");
    scanf("%f",&fuel);
    printf("%.1fmiles per gallon\n",mile/fuel);//英里/加仑
    printf("%.1flitre per 100kilometers\n",100*fuel*x/mile/y);//升/百公里

    return 0;
}