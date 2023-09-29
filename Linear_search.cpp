#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int size,int key){
    for(int i=0; i<size; i++){
    if(arr[i]==key){
        cout<<"The index value of key element is "<<i<<endl;
        return 1;
    }
}
return 0;
}

int main(){
int n;
int key;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the element of array: "<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"Enter the key which you want to find in array:"<<endl;
cin>>key;
bool found=LinearSearch(arr,n,key);
if(found){
    cout<<"Element found"<<endl;
}
else{
    cout<<"Element not present in array"<<endl;
}
return 0;
}