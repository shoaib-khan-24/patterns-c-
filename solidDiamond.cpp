#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of diamond: ";
    cin>>n;
    int u=(n/2)+1;
    int l=(n/2);
    //upper part of diamond
    for(int i=0; i<u; i++){
        //for spaces
        for(int j=0; j<u-i-1; j++){
            cout<<" ";
        }
        //for stars
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //lower part of diamond
    for(int i=0; i<l; i++){
        //for spaces
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        //for stars
        for(int j=0; j<l-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}