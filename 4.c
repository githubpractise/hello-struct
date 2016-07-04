#include <stdio.h>

struct  ABC{
    int a;
    char c;
};
int main(){
struct ABC*temp;
printf("%d\n",(char*)(temp+1)-(char*)temp);
return 0;
}

