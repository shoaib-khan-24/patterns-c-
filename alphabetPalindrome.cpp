#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int j;
        //forward loop
        for(j=0; j<i+1; j++){
            char ans = j+1 +64;
            cout<<ans;
        }
        //reverse loop
        for(int k=j-1; k>0; k--){
            char ans = k + 64;
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}