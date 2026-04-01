#include<stdio.h>
int main(){
    int element;
    int a[]={10,20,6,78,2,90};
    scanf("%d",&element);
    int n=sizeof(a)/sizeof(a[0]);

    for (int i=0;i<n;i++)
    {
        if(a[i]==element){
            printf("Element Found %d\n",a[i]);

            return 0;
        }
       
    }
     printf("Element not found");
        return 0;
    
}