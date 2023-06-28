#include <stdio.h>
int main (){
    int arr1[3][3] ;
    int arr2 [3][3] ;
    int arr3 [3][3];
    int i , j,k;

    // taking the input of array 

    printf("enter the Element of first Array 3 x 3\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j  = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        
    }

     // taking the input of 2nd array 

     printf("enter the Element of 2nd Array 3 x 3\n");
     for ( i = 0; i < 3; i++)
     {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
        
     }

     // for multiply 
     for ( i = 0; i < 3; i++)
     {
       for ( j = 0; j < 3; j++)
       {
        arr3[i][j] = 0;
        for ( k = 0; k < 3; k++)
        {
            arr3[i][j]+= arr1[i][j] * arr2[k][j];
        }
        
       }
       
     }

     // print the matrix 

     printf("multiply of two Matrix \n");
     for (  i = 0; i < 3; i++)
     {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
        
     }
     
     
     

    

    return 0 ;
}                                    