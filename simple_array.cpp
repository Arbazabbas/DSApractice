#include<iostream>
using namespace std;
int main(){
   int arr[10];
   fill_n(arr,10,6);
  for(int i=1 ; i<=10; i++){
    cout<<arr[i]<<endl;
  }
    return 0;
}