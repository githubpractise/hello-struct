#include <stdio.h>

struct person {
  int age, salary;
  char name[12];
  char address[6][20];

      };

typedef struct person EMPLOYEE;

main() {
EMPLOYEE a;
EMPLOYEE *x,*y;

x=&a;
y=x+1;
printf ("sizeof stru %d\n", (int)((int)y-(int)x));
printf ("sizeof %ld\n", sizeof(a));
} 
