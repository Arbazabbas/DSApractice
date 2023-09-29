#include<iostream>
using namespace std;
int MinElement(int arr[], int n){
    int min= INT_MAX; 
    for(int i=0; i<=n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    return min;                                                     
}
int MaxElement(int arr[],int n){
    int max= INT16_MIN;
   for(int i=0; i<n; i++){
       if(arr[i]>max){
        max=arr[i];
       }
   }
    return max;
}
int main(){
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int arr[size];
          cout<<"Enter the element of array:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int Result=MaxElement(arr,size);
    cout<<"The minimum value of array is :"<<MinElement(arr,size)<<endl;
    cout<<"The maximum value of array is :"<<Result<<endl;
    return 0;
}