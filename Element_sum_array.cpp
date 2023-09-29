#include<iostream>
using namespace std;
int sumArray(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
int size;
cout<<"Enter the size of array: "<<endl;
cin>>size;
int arr[size];
for(int i=0; i<size; i++){
    cin>>arr[i];
   
}
for(int i=0; i<size; i++){
cout<<arr[i]<<" ";
}
 
cout<<"The sum of array is :"<<sumArray(arr,size)<<endl;
return 0;

}