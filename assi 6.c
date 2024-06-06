#include <stdio.h>
#include<math.h>
double median(int arr[], int n);
int main() {
   int i, j, n, arr[100],temp = 0;
   printf("How many inclue number in array :");
   scanf("%d", &n);
   for(i=0; i<n; i++){
       scanf("%d" , &arr[i]);
   }
   printf("%.1lf\n",median(arr, n) );

   getch();
}
double median(int arr[], int n)
{
    int i, j,temp=0;
    for(i=0; i<n; i++)
   {
       for(j=i+1; j<n; j++){
           if(arr[i] > arr[j]){
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
   if(n % 2 == 0){

       double value = (arr[(n/2) -1]  + arr[(n/2 +1) -1]) / 2.0 ;
       return value;
   }
   else
   {
        return  arr[((n+1) /2)-1];
   }
}
