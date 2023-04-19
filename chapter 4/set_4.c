# include<stdio.h>
int main()
{
int table;
printf("enter the value of n is ");
scanf("%d",&table);
while (table*2)
{

    printf("table is %d",table);
  table++;
  if (table<20)
  {
 break;
  }
  
}

return 0;
}