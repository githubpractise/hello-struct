#include<stdio.h>
struct point {
    long x, y;
};
 
int main()
{
    struct point pt = {0}, *ppt = &pt;
    unsigned char *p1 = NULL, *p2 = NULL;
    size_t size = 0;
 
    p1 = (unsigned char*)(ppt);
    p2 = (unsigned char*)(++ppt);
    size = p2 - p1; // size is now 8 bytes (2 longs)
    // same as sizeof(struct point) or sizeof(pt)
    printf("%d\n",size);
    return 0;
}
