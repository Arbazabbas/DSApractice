#include<iostream>
using namespace std;
void PrintArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int UniqueElement(int arr[],int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    return ans;
  //  PrintArr(arr,n);
}
int main(){
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array:"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
UniqueElement(arr,n);
PrintArr(arr,n);
return 0;
}
