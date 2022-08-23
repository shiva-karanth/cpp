#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cin>>n;

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}