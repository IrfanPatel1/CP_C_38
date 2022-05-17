#include <stdio.h>

int main()
{
    int i,j;
    int num1[3][4], num2[3][4];
    
    printf("enter the elements of 3X4 array num1\n");
    for(i=0; i<3; i++)
    for(j=0; j<4; j++)
    scanf("%d",&num1[i][j]);
    
    printf("enter the elements of 3X4 array num2\n");
    for(i=0; i<3; i++)
    for(j=0; j<4; j++)
    scanf("%d",&num2[i][j]);
    
    printf("The 3x4 array num1 is\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        printf("%3d",num1[i][j]);
        printf("\n");
    }
     printf("The 3x4 array num2 is\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4 ;j++)
        printf("%3d",num2[i][j]);
        printf("\n");
    }
    printf("the sum of num1 and num2 is \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4;j++)
        printf("%3d", (num1[i][j] + num2[i][j]));
        printf("\n");
    }
    return 0;
}
