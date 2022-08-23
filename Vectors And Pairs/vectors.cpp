#include <iostream>
#include<vector>
using namespace std;

int main(){
//To iterate vectors
    vector<int> v;

    v.push_back(5);
    v.push_back(44);
    v.push_back(37);

    for(int i=0; i<v.size();i++){

        cout<<v[i]<<endl;

    }

    vector <int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;

    }

    for(auto element:v){
        cout<<element<<endl;
    }
    v.pop_back();
    

}