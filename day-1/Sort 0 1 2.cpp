#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zeros = 0;
   int ones = 0;
   int twos = 0;

   for(int i = 0 ; i<n ; i++){
      if(arr[i]==0) zeros++;
      if(arr[i]==1) ones++;
      if(arr[i]==2) twos++;
   }
   int i = 0;
while(zeros--){
   arr[i] = 0;
   i++;
}
while(ones--){
   arr[i] = 1;
   i++;
}
while(twos--){
   arr[i] = 2;
   i++;
}
}