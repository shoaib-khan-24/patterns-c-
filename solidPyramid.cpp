#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of pyramid: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n*2-1); j++){
            if(j<n-i-1){
                cout<<"  ";
            }
            else if(j>n-1+i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}