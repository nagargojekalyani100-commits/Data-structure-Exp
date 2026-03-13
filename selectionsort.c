#include<stdio.h>
#include<conio.h>
int main(){
    int arr[10]={77,33,44,11,88,22,66,55};
    int n=10,i,j,position,swap;
    for(i=0;i< n*(n-1);i++){
      position=i;
      for(j=i+1;j<n;j++){
        if (arr[position]>arr[j]){
            position=j;
        }
        if(position != i){
            swap = arr[i];
            arr[i]=arr[position];
            arr[position]=swap;
        }
      }
}
for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}