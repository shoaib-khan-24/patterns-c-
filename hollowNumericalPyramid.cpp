#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int start = 1;
        //spaces
        for(int j=0; j<n-1-i; j++){
            cout<<" ";
        }
        //numbers
        for(int j=0; j<i+1; j++){
            if(i==0 || i==n-1){
                cout<<start<<" ";
                start++;
            }
            else{
                if(j==0){
                    cout<<j+1<<" ";
                }
                else if(j==i){
                    cout<<i+1<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}