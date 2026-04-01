#include<stdio.h>
int main(){
    int element;
    int a[]={10,20,60,78,80,90};
    scanf("%d",&element);
 
    int n=sizeof(a)/sizeof(a[0]);
    int low=0,high= n-1,mid;
    
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==element)
        {
            printf("Element found %d\n",a[mid]);
            return 0;
        }else if(element<a[mid]){
            high=mid-1;
        }

        else{
            low=mid+1;
        }
        

    }
    printf("Element not found");
    return 0;
    
}