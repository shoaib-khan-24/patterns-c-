#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter height of pyramid: ";
    cin>>n;
    for(int i=0; i<n; i++){
        //for spaces
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        //for stars
        for(int j=0; j<(2*i+1); j++){
            if(j==0 || j==2*i || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}