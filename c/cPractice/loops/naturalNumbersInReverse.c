#include <stdio.h>
int main()
{
    int n;
    printf("Enter value for n\t");
    scanf("%d",&n);
    for (int i=n;i>0;i=i-1){
        printf("%d\n",i);
    }
    return 0;
}