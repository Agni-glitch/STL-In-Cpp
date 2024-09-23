#include <bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> &v){
    cout<<"size:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<","<<v[i].second<<" ";
    }
    cout<<endl;
}
void printVec2(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    // vector<pair<int,int>> v;//={{2,3},{4,5},{6,7}};
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     // v.push_back({x,y});
    //     v.push_back(make_pair(x,y));
    // }
    // printVec(v);
    int N;
    cin>>N;
    vector<int> v1[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v1[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
        {
            printVec2(v1[i]);
        }   
    return 0;
}