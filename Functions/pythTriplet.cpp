#include<iostream>
using namespace std;

bool check(int x,int y,int z){
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x){
        b=max(y,z);
        c=min(y,z);
    }
    else if(a==y){
        b=min(x,z);
        c=max(x,z);
    }
    else{
        b=min(x,y);
        c=max(x,y);
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorean Triplet"<<endl;
    }
    else{
        cout<<"Not A pythagorean Triplet"<<endl;
    }
}