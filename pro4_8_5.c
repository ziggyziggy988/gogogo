#include<stdio.h>
int main(void)//已知下载速度和文件大小，计算下载时间
{
    printf("please input your download speed in Mb/s.\n");
    float speed;
    scanf("%f",&speed);
    printf("please input the size of your file in MB.\n");
    float size;
    scanf("%f",&size);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds\n",
        speed,size,size/speed*8);

    return 0;
}