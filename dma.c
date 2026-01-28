#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *p;
    printf("Enter 10 numbers");
    p=(int*)calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
        scanf("%d",&p[i]);
    }
    printf("\nInputed Array");
    for(int i=0;i<10;i++){
        printf("%d ",p[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<9-i;j++){
            if(p[j]>p[j+1]){
            int temp = p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
        }
    }
    printf("\nArray after sorting\n");
    for(int i=0;i<10;i++){
        printf("%d ",p[i]);
    }
    free(p);
}