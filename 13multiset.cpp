// Hash Tables implementation
#include <bits/stdc++.h>
using namespace std;
// void print(unordered_set<string> &m) {
//     for (auto it = m.begin(); it != m.end(); it++) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }
void print(multiset<string> &m){
    for (const string &value: m) {
        std::cout << value << " ";
    }
    cout << endl;
}
int main(){
    multiset<string> s;
    s.insert("abc");//O(log(n))
    s.insert("zab");
    s.insert("bcd");
    s.insert("abc");
    print(s);
    auto it = s.find("abc"); // O(log(n)) //returns the first one
    if (it != s.end()) {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Not found" << endl;
    }
    s.erase(it); //deletes one
    s.erase("bcd"); //deletes all
    print(s);
    s.clear();
}