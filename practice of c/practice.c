# include<stdio.h>
int main()
{

/* q from https://www.programiz.com/c-programming/examples */

// printf("hello,would!");


// int a;
// printf("eneter the value");
// scanf("%d",&a);
// printf("print the integer%d\n",a);


// int a,b;
// a=b=10;
// printf("a + b = %d",a+b);


// float a,b,multiply;
// printf("enter the value ");
// scanf("%f %f",&a , &b);
// multiply=a*b;
// printf("the value of a * b = %f\n",multiply);


// char c;
// printf("enter the character");
// scanf("%c",&c);
// printf("ascII is %c=%d",c,c);


// int x,y,rem,que;
// printf("enter the value ");
// scanf("%d %d",&x,&y);
// rem=x%y;
// que=x/y;
// printf("remiend is : %d\n",rem);
// printf("quotint is : %d\n",que);


// int inttype;
// float floattype;
// char chartype;
// double doubletype;
// printf("size of integer %zu bytes\n ",sizeof(inttype));
// printf("size of float %zu bytes\n  ",sizeof(floattype));
// printf("size of char %zu bytes\n  ",sizeof(chartype));
// printf("size of double %zu bytes\n ",sizeof(doubletype)); */

// C Program to Demonstrate the Working of Keyword long
/*
int a;
long b;
long long c;
double d;
long double e;
printf("size of integer %zu bytes\n ",sizeof(a));
printf("size of long %zu bytes\n  ",sizeof(b));
printf("size of long long %zu bytes\n  ",sizeof(c));
printf("size of double %zu bytes\n ",sizeof(d));
printf("size of long double %zu bytes\n ",sizeof(e)); */

// C Program to Swap Two Numbers
/*
double first,second,temp;
printf("enter the value of first");
scanf("%lf ",&first);
printf("enter the value of second");
scanf("%lf ",&second);
temp=first;
first=second;
second=temp;
printf("swep value is ,first= %.2lf\n",first);
printf("swep value is ,second=%.2lf\n",second);   */

// number is odd or even
/*
int a,b;
printf("enter the a ");
scanf("%d",&a);
printf("enter the b ");
scanf("%d",&b);

printf("even if 1 is come and odd if 0 is out a = %d\n",a%2==0);
printf("even if 1 is come and odd if 0 is out b = %d\n",b%2==0);  */


// Q if vowel or constant
/*
char x;
int uc,lc;
printf("enter the character");
scanf("%c",&x);

uc=(x =='a'|| x=='e' || x=='i'|| x =='o'|| x=='u');
lc=(x =='A'|| x=='E' || x=='I'|| x =='O'|| x=='U');
if (uc||lc)
{
  printf("%c \nis vowel",x);
}
else
{
    printf("%c\n character is constant",x);
}  */

/*
double x,y,z;
printf("enter the number\n");
scanf("%lf %lf %lf ",&x,&y,&z);

if (x>=y && x>=z)
{
    printf("the number x is big : \n%lf",x);s
}
if (y>=z && y>=x)
{
    printf("the number y is big :\n%lf ",y);
}
if (z>=y && z>=x)
{
    printf("the number z is big :%lf ",z);
} */

// Given data is leap year or not its find 
/*

int year;

printf("enter the year");
scanf(" %d ",&year);

if (year % 400 == 0)
{
    printf(" %d \n is leap year ", year);
  
}
else if (year % 100 == 0)
{
   printf(" %d \n  is leap year",year);
}

else if (year % 4 == 0)
{
   printf(" %d \n  is leap year  ",year);
}
else
{
    printf(" %d \n is non leap year ",year);
}  
   */
// double number;

// printf("enter your number ");
// scanf("%lf",&number);

// printf("hello My Name Is Vikram Kumar ");

// double number_1 ,number_2;
// float additation;

// printf("enter the value ");
// scanf("%lf  ",&number_1 , &number_2);

// additation=number_1+number_2;

// printf("add the Given Value By user %lf \n",additation);
// // printf("")


int num;
float num1;
float add;

printf("enter your value ");
scanf(" %d ",&num);



scanf(" %f ",&num1);

add = num + num1;

printf("total =  %.1f",add);



return 0;
}