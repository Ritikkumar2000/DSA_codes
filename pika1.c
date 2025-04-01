#include<stdio.h>
#include<stdlib.h>
int main(){
    // int *p[4];
    int size;
    int *p=(int*)malloc(4*sizeof(int)); 

    for(int i=0;i<4;i++){
        // p[i]=(int*)malloc(4*sizeof(int)); 

        
        printf("enter the value ");
        // scanf("%d",p[i]);
        scanf("%d",p+i);
    }
    for(int i=0;i<4;i++){
        printf("value in arr are %d \n",p[i]);
    
    }
    

}