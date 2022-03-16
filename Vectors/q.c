
#include <stdio.h>

int main() {
    int a[5],b[5],c[5],i,j;
    for(i =0;i<5;i++){
        printf("Enter the value ");
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    for(j =0;j<5;j++){
        printf("Enter the value ");
        scanf("%d",&b[j]);
    }
    printf("\n");
    for(i=0,j=4;i<5 && j >=0;i++,j--){
        c[i]= a[i] + b[j];
        printf("%d,",c[i]);
    }
    
    
    
    return 0;
}