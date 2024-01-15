#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of wing: ";
    cin>>n;
    //upper part
    for(int i=0; i<n; i++){
        //left wing
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        //spaces
        for(int j=0; j<2*(n-i-1); j++){
            cout<<"  ";
        }
        //right wing
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //lower part
    for(int i=0; i<n; i++){
        //left wing
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        //spaces
        for(int j=0; j<2*i; j++){
            cout<<"  ";
        }
        //right wing
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}