#include<stdio.h>
struct {
  int num1,num2;
}a[2];

void main()
{
  //int start,last;
  //start = &a[1].num1;
  //last = &a[0].num1;
  //printf("\nSize of Structure : %d Bytes\n",start-last);
   printf("Size of structure: %d Bytes\n",(unsigned int)&a[1]-(unsigned int)&a[0]);
   return 0;


}
