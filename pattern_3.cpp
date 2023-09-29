#include<iostream>
using namespace std;
/*int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        
        }
        cout<<endl;
        
    }
    return 0;
}*/
// for while loop
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}