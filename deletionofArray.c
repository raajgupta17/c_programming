// deletion of individual index provided

#include<stdio.h>
int main(){
    int a[10],n;
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);

    int index=2;
    for(int i=index;i<n-1;i++)
    a[i]=a[i+1];

    for(int i=0;i<n-1;i++)
    printf("Array with index %d having value %d\n",i,a[i]);

    return 0;
}

// deletion of last index
#include<stdio.h>
int main(){
    int a[10],n;
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);


    for(int i=0;i<n-1;i++)
    printf("Array with index %d having value %d\n",i,a[i]);

    return 0;
}

// deletion of first index

#include<stdio.h>
int main(){
    int a[10],n;
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);

    
    for(int i=0;i<n-1;i++)
    a[i]=a[i+1];

    for(int i=0;i<n-1;i++)
    printf("Array with index %d having value %d\n",i,a[i]);

    return 0;
}