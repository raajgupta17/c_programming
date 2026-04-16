#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[100];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int * ptr = arr;
    for(int i=0;i<n;i++){
        if(i>0)printf(" ");
        printf("%d",*ptr);
        ptr++;
    }
    return 0;
}