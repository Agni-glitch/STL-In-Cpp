#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<int,string> p;
    // p=make_pair(2,"abc");
    p={2,"abc"};
    pair<int,string> p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;//2 abc
    cout<<p.first<<endl;//2
    cout<<p1.first<<" "<<p1.second<<endl;//3 abc
    // use
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_arr[3];
    p_arr[0]={1,2};
    p_arr[1]={2,3};
    p_arr[2]={3,4};
    swap(p_arr[0],p_arr[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_arr[i].first<<" "<<p_arr[2].second<<endl;
    // }
    cin>>p_arr[1].first>>p_arr[1].second;
    for (int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[2].second<<endl;
    }
    return 0;
}