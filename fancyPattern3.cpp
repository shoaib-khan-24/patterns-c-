#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    // upper part
    for(int i=0; i<n; i++){
        cout<<"* ";
        for(int j=0; j<i; j++){
            cout<<j+1<<" ";
        }
        for(int j=i; j>1; j--){
            cout<<j-1<<" ";
        }
        if(i!=0){
            cout<<"*";
        }
        
        cout<<endl;
    }
    //lower part
    for(int i=0; i<n-1; i++){
        cout<<"* ";
        for(int j=0; j<n-2-i; j++){
            cout<<j+1<<" ";
        }
        for(int j=n-1-2-i; j>0; j--){
            cout<<j<<" ";
        }
        if(i!=n-2){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}