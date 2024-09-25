#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>> m;
    // set<pair<int,int>> st; //incase of set
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string fn,ln;
        int cnt;
        cin>>fn>>ln>>cnt;
        for (int j = 0; j < cnt; j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr:m){
        auto full_name=pr.first;
        auto list1=pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list1.size()<<endl;
        for (auto &ele:list1)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}