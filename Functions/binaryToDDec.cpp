#include<bits/stdc++.h>
using namespace std;

int binaryTodecimal(int n){
    int ans=0;
    int x=0;
    while(n>0){
        ans+=n%10*pow(2,x);
        n/=10;
        x++;
    }
    return ans;
}
int octalTodecimal(int n){
    int ans=0;
    int x=0;
    while(n>0){
        ans+=n%8*pow(8,x);
        n/=8;
        x++;
    }
    return ans;
}

int hexadecimalTodecimal(int n){
    int ans=0;
    int x=0;
    while(n>0){
        ans+=n%16*pow(16,x);
        n/=16;
        x++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryTodecimal(n);
    cout<<octalTodecimal(n);
}