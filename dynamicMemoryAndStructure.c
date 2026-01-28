#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    int rollno;
    int class;
};
int main()
{
    struct Student *s;
    s = (struct Student *)calloc(5, sizeof(struct Student));

    for(int i=0;i<5;i++){
        printf("Enter the name of student %d : ",i+1);
        scanf("%s",s[i].name);

        printf("Enter the rollno of student %d :",i+1);
        scanf("%d",&s[i].rollno);

        printf("Enter the class of student %d :",i+1);
        scanf("%d",&s[i].class);

    }
    int n;
    printf("Enter the rollno of the student");
    scanf("%d",&n);

    for(int i=0;i<5;i++){
        if(s[i].rollno == n){
            printf("Roll no. = %d\n",s[i].rollno);
            printf("Name of Student = %s\n",s[i].name);
            printf("Class = %d\n",s[i].class);
        }
    }
}
