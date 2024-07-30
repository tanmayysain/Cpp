#include<iostream>
using namespace std;
 
 void printarray(int arr[], int n){
     for (int i=0; i<n; i++){
         cout<< arr[i] << " ";
     }
     cout<< endl;

 }

 void sortone (int arr[], int n){
     int left = 0, right = n-1;

     int step = 0;

     while( left < right ){
         cout<< "Step" << step++ <<endl;
         printarray(arr,n);
         cout<< endl;

         while (arr[left] == 0)
         {
             left++;
         }
         while (arr[right == 1]){
             right-- ;
         }
         if (arr[left]==1 && arr[right]==0){
         swap ( arr[left], arr[right]);
         left ++;
         right --; 
         }

     }
     cout<< "Returning the sorted array"<<endl;
     printarray(arr,8);

 }

int main(){

int arr[8]= {1,1,0,0,0,0,1,0};

sortone(arr,8);
cout<< "Printing after function call "<< endl;
printarray(arr,8);

return 0;
}
