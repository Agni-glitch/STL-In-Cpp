//map-> uses hash tables
#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &map1){
   // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    cout<<map1.size()<<endl;
    for(auto &pr:map1)
    {
        // cout << it->first << " " << (*it).second << endl;
        cout << pr.first << " " << pr.second << endl; //O(log(n))
    }
// 3 acd
// 3
// 4 afg
// 6 agni
// 5 cdc
}
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";//O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "agni";
    m.insert({4, "afg"});
    auto it = m.find(3);//O(1)
    if (it == m.end())
    {
        cout<<"No value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
        m.erase(it);//log(1)
    }
    m.erase(1);
    print(m);
    m.clear();
}
// incase of multimaps one index can have multiple values