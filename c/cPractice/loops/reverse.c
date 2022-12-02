#include<stdio.h>
int main(){
    int a;
    printf("Enter how many number you wanna reverse.\n");
    scanf("%d",&a);
    for (int i=a;i>0;i=i-1){
        printf("%d \n",i);
    }
    return 0;
}