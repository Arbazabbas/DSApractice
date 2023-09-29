#include<iostream>
using namespace std;
void Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    for(start; start<end; start++){
    //while(start<=end){
        swap(arr[start],arr[end]);
       // start++;
        end--;
    
    }
}
void printArray(int arr[],int size){
for(int i=0; i<size; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array: "<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
Reverse(arr,n);
cout<<"After reverse array: "<<endl;
printArray(arr,n);
return 0;
}