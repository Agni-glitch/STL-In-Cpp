//map-> read black tree data sructure
#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &map1){
   // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    cout<<map1.size()<<endl;
    for(auto &pr:map1)
    {
        // cout << it->first << " " << (*it).second << endl;
        cout << pr.first << " " << pr.second << endl; //O(log(n))
    }
    // 3 acd
    // 2
    // 4 afg
    // 5 agni
}
int main()
{
    map<int, string> m;
    map<string,string> m1;
    m1["abcd"]="abcd"; //O(s.size*log n)
    m[1] = "abc";//O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "agni";
    m.insert({4, "afg"});
    auto it = m.find(3); //O(log(n))
    if (it == m.end())
    {
        cout<<"No value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
        m.erase(it);//can not be the last iterator
    }
    m.erase(1);//O(log(n))
    print(m);
    m.clear();
}