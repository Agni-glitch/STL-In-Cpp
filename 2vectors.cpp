#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){ //reference
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; //O(1)
    }
    cout<<endl;
}
int main() {
    vector<int> v(5,3);//default value 0,now default is 3
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x); //O(1)
    // }
    v.push_back(4);
    printVec(v);//3 3 3 3 3 5
    v.pop_back();//3 3 3 3 3  //O(1)
    v.pop_back();
    // vector<int> v2=v; //O(n) (1)
    vector<int> &v2=v;  //(2)
    v2.push_back(5);
    printVec(v2);
    printVec(v);
    return 0;
}
// (1)
// 3 3 3 3 3 4 
// 3 3 3 3 5
// 3 3 3 3
// (2)
// 3 3 3 3 3 4 
// 3 3 3 3 5
// 3 3 3 3 5