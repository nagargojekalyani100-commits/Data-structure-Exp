#include<stdio.h>
int main(){
    int a[10],n,ptr,temp,k,i;
    printf("enter number of element: ");
    scanf("%d",&n); 

    printf("enter an element: ");
    for(k=0; k<n; k++){
        scanf("%d",&a[k]);
    }

    for( k=1; k<n; k++){
        temp=a[k];
        ptr=k-1;
        while(ptr>=0 && temp<a[ptr]){
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
          
        }
        a[ptr+1]=temp;
     
       printf("\npass: %d",k);
        for( i=0; i<n; i++){
        printf(" %d ",a[i]);
        }
    }
       printf("\nsorted array: ");
        for( k=0; k<n; k++){
        printf("%d ",a[k]);
        }
    return 0;
}