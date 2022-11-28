#include <stdio.h>

int sum(int a,int b){
  return b+a;
}
int sub(int a,int b){
  return a-b;
}

int main() 
{
  int first,second;
  printf("Enter first number\n");
  scanf("%d",&first);
  printf("Enter second number\n");
  scanf("%d",&second);
  
  printf("Sum of above two numbers=%d \n",sum(first,second));
  printf("Sub of above two numbers=%d \n",sub(first,second));

  
    
  return 0;
}