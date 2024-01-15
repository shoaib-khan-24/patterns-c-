#include<iostream>
using namespace std;
int main(){
    int n;
    int p=1;
    cout<<"enter the height of triangle: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
    }
    return 0;
}