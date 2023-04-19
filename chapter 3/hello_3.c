# include<stdio.h>
int main()
{

// if your age is greater than 18 or equal 18 you can drive or not
// int age ;
// printf("enter your age \n");
// scanf("%d",&age);

// if (age>=18)
// {
//     printf("%d: you can drive",age);
// }
// else
// {
//     printf("%d :you cannot drive",age);
// }

// int age ;
// printf("enter your age \n");
// scanf("%d",&age);

// if (age<80 && age>17)
// {
//     printf("you can drive\n");
// }
// else
// {
//     printf("you cannot drive\n");
// }

// int num;
// printf("enter your number\n");
// scanf("%d",&num);

// if(num==1)
// {
//     printf("the number is 1\n");
// }
// else if (num==2)
// {
//      printf("the number is 2\n");
// }
// else if (num==3)
// {
//      printf("the number is 3\n");
// }

// else
// {
//     printf("the number is not 1,2,3,");
// }

int rating;
printf("enter your rating 1-5");
scanf("%d",&rating);

switch (rating)
{
case 1 :
 printf("rating is 1");
    break;
    case 2 :
 printf("rating is 2");
    break;
    case 3 :
 printf("rating is 3");
    break;
    case 4 :
 printf("rating is 4");
    break;
    case 51:
 printf("rating is 5");
    break;

default:
printf("invalid rating !");
    break;
    
}
return 0;
}