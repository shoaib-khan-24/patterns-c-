#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int j;
        //spaces
        for( j=0; j<n-1-i; j++){
            cout<<"  ";
        }
        //left numbers
        for( j=0; j<i+1; j++){
            cout<<i+j+1<<" ";
        }
        //right numbers
        int start = 2*i;
        for(j=0; j<i; j++){
            
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }
    return 0;
}