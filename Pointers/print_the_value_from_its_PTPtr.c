#include <stdio.h>
int main(){
    int n =7 ;
    int *ptr = &n;
    int **ptptr = &ptr;
    printf("%d\n", **ptptr);
    return 0;
}