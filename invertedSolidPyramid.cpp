#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of pyramid: ";
    cin>>n;
    for(int i=0; i<n; i++){
        //for spaces
        for(int j=0; j<i; j++)
            cout<<" ";

        //for stars
        for(int j=0; j<n-i; j++){
                cout<<"* ";   
        }
            

        cout<<endl;
    }
    return 0;
}