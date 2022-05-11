#include <stdio.h>

int swap(int * a, int * b){
    int temp;
    temp = *a;
    *a= *b;
   * b = temp;
    printf("Swapped values are %d %d ",*a,*b);
}

int main(){
    int a,b;
    printf("Enter two values : ");
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    printf("\nOriginal values are : %d %d",a,b);
}