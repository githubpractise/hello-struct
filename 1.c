#include<stdio.h>

struct student{
    int roll;
    char name[100];
    float marks;
};

int main(){
//hello
 // struct student *ptr=0;
    struct student *ptr=(struct student *)malloc(sizeof(struct student));

    printf("Size of the structure student:  %d\n",(char *)(ptr+1)-(char *)ptr);

  return 0;
}
