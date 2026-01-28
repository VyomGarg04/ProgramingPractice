#include<stdio.h>

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        printf("Enter the %d element of array",i+1);
        scanf("%d",&a[i]);
    }

    int unique;
    for(int i=0;i<10;i++){
        unique=1;
        for(int j=0;j<10;j++){
            if(i!=j && a[i]==a[j]){
                unique=0;
                break;
            }
        }
        if(unique == 1)
            printf("%d ",a[i]);
    }

}