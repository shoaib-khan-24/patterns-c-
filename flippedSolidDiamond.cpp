#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of pyramid: ";
    cin>>n;
    int r = n/2;
    //upper part
    for(int i=0; i<r; i++){
        //half pyramid with stars
        for(int j=0; j<r-i; j++){
            cout<<"* ";
        }
        //full pyramid with spaces
        for(int j=0; j<(2*i)+1; j++){
            cout<<"  ";
        }
        //half pyramid with stars
        for(int j=0; j<r-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower part of diamond
    for(int i=0; i<r; i++){
        //half pyramid with stars
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        //inverted full pyramid with spaces
        for(int j=0; j<(2*r)-(2*i)-1; j++){
            cout<<"  ";
        }
        //half pyramid with stars
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}