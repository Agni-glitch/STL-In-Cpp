#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,6,7};
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    for(int &value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p={{1,6},{4,9},{7,5}};
    // for (pair<int,int> &value: v_p)
    for (auto &value: v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    // auto a=1;
    // cout<<a<<endl;
}