#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int k=1;
    //upper part
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(i==0 || j==i){
                cout<<k;
            }
            else{
                cout<<k<<"*";
            }
            k++;
        }
        cout<<endl;
    }
    //lower part
    int l=(2*n)-1;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n-i; j++){
            if(j==n-i-1 || i==n-1){
                cout<<l;
            }
            else{
                cout<<l<<"*";
            }
            l++;
        }
        l=l/2-1;
        cout<<endl;
    }
    return 0;
}