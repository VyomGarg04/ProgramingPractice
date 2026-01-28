#include <stdio.h>

struct student{
    int rn;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};
int main(){
    struct student st[3];
    int i,search_rn,found;
    for(i=0;i<3;i++){
        printf("Enter the roll no. of candidate %d = ",i);
        scanf("%d",&st[i].rn);
        printf("Enter the name = ");
        scanf("%s",&st[i].name);
        printf("Enter the department ");
        scanf("%s",&st[i].department);
        printf("Enter the course ");
        scanf("%s",&st[i].course);
        printf("Enter the year of joining ");
        scanf("%d",&st[i].year_of_joining);
    }

    printf("\nEnter the roll no to search: ");
    scanf("%d",&search_rn);
    
    for(i=0;i<3;i++){
        if(st[i].rn == search_rn){
            found = 1;
            printf("\n--- Student Details ---\n");
            printf("Roll No: %d\n", st[i].rn);
            printf("Name: %s\n", st[i].name);
            printf("Department: %s\n", st[i].department);
            printf("Course: %s\n", st[i].course);
            printf("Year of Joining: %d\n", st[i].year_of_joining);
            break;
        }
    }

    if(!found) {
        printf("No student found with this roll number.\n");
    }
}