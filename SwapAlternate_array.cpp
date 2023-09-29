#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SwapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
          //  swap(arr[i],arr[i+1]);
          int temp = arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
        
        }
    }
}
int main(){
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the array elements"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
  
}

cout<<"after alternative swapping :"<<endl;
SwapAlternate(arr,n);
printArray(arr,n);
return 0;
}