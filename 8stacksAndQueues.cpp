#include <bits/stdc++.h>
using namespace std;
int main(){
    // LIFO
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(8);
    s.push(9);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    // FIFO
    queue<string> q;
    q.push("csc");
    q.push("rtio");
    q.push("erefw");
    q.push("chn");
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}