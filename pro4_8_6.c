#include<stdio.h>
#include<string.h>
int main(void)
{
    char fn[20];
    char ln[20];
    printf("please input your last name.\n");
    scanf("%s",ln);
    printf("please input your first name.\n");
    scanf("%s",fn);
    printf("%s %s\n",fn,ln);
    int lfn=strlen(fn);
    int lln=strlen(ln);
    printf("%*d %*d\n",lfn,lfn,lln,lln);
    printf("%s %s\n",fn,ln);
    printf("%*d %*d",-lfn,lfn,-lln,lln);

    return 0;
}