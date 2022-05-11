#include <stdio.h>
#include <string.h>


int main(){

    char a[20];
    printf("Enter the string  to be checked :");
    scanf("%s",a);


    int i=0,j= strlen(a)-1;

    while(i<j){
        if(a[i]== a[j]){
            i++;
            j--;

        }
        else{
            break;
        }
    }
    if(i>= strlen(a)/2){
        printf("Pallindrome");

    }
    else{
        printf("Not a pallindrome ");
    }


}