#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee Vibhu = {100, 34.23, "Harry"};

    printf("Code is: %d \n", Vibhu.code);
    printf("Salary is: %f \n", Vibhu.salary);
    printf("Name is: %s \n", Vibhu.name);
 

    return 0;
}