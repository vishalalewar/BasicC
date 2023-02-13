/*remove duplicate from arrry*/
#include <stdio.h>

int main() {
    int arr[]={1,5,3,8,6,6,3,6,5};
    int i,j,k,l;
    int n =sizeof(arr)/sizeof(int);
    printf("Siza of Arr=%d,int=%ld,n=%d",sizeof(arr),sizeof(int),n);
   for(i=0;i<=n-1;i++)
   {
      // printf("array before\n");
       for(j=i+1;j<=n-1;j++)
       if(arr[i]==arr[j])
       {
       for(k=j;k<=n-1;k++)
       {
           arr[k]=arr[k+1];
       }
       n--;
       j--;
       }
   }
   printf("\narry\n");
   for(i=0;i<=n-1;i++)
   {
       printf("%d",arr[i]);
   }
   printf("\nn=%d,i=%d,j=%d,k=%d",n,i,j,k);
   
}