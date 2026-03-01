
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int sum=0;
    
    sum=sum+n%10;//last digit of n ko seperate karta ha and sum = 0 ka sath add karta ha
    n=n/10;//last digit ko exclude karta ha
    
    sum=sum+n%10;
    n=n/10;
    
    sum=sum+n%10;
    n=n/10;
    
    sum=sum+n%10;
    n=n/10;
    
    sum=sum+n%10;
    n=n/10;
    
    printf("%d",sum);
    
    return 0;
}