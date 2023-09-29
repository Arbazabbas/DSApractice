#include<iostream>
#include<vector>
using namespace std;
 void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 void ReverseArray(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
 }

int main(){
int n;
int arr[n];
cout<<"Enter the size of Array:"<<endl;
cin>>n;
cout<<"Enter the elements of Array:"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
ReverseArray(arr,n);
printArray(arr,n);
return 0;
}