#include <stdio.h>
#include <string.h>

int main(){

    struct Student
    {
       char name[20];
       int roll_no;
       int marks;
       char Class[20];
    };

    struct Student std[50];

    printf("Enter Records of students : \n");

    for(int i=0;i<5;i++){
        scanf("%s %d %d %s ", std[i].name,&std[i].roll_no, &std[i].marks, std[i].Class);
    }

    printf("\n Printing Records :\n");

    for(int i=0;i<5;i++){
        printf("%s  %d  %d  %s \n", std[i].name,std[i].roll_no, std[i].marks, std[i].Class);
    }

    
    
    
    
}