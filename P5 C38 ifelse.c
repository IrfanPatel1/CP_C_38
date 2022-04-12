CODE:


#include <stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter value of a and b \n");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("Sum of a and b is %d\n",sum);
  if(sum>20)
  {
     printf("Sum is greater than 20\n");
  }
  else if(sum>10)
  {
  printf("Sum is greater than 10 and less than 20\n");
  }
      else
  {
  printf("Sum is less than 10 /n"); 
  }
  return 0;
}

OUTPUT:
Enter value of a and b 
10 20
Sum of a and b is 30
Sum is greater than 20
