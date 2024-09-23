#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,6,7};
    vector<int> ::iterator it;
    // cout<<(*(it+1))<<endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    // in case of vectors iterators are in continuous nature
    cout<<endl;
    vector<pair<int,int>> v_p={{1,6},{4,9},{7,5}};
    vector<pair<int,int>> :: iterator it1;
    for (it1 = v_p.begin(); it1 != v_p.end(); it1++)
    {
        cout<<it1->first<<" "<<(*it1).second<<endl;
    }
}