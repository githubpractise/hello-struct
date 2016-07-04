#include<stdio.h>
struct data
{

};
int main()
{
struct data *samp1;
printf("hello\n");
printf("%d\n",(char *)(samp1+1)-(char *)samp1);
return 0;
}
