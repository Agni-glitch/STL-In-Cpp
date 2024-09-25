// Hash Tables implementation
#include <bits/stdc++.h>
using namespace std;
// void print(unordered_set<string> &m) {
//     for (auto it = m.begin(); it != m.end(); it++) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }
void print(unordered_set<string> &m){
    for (const string &value: m) {
        std::cout << value << " ";
    }
    cout << endl;
}
int main(){
    unordered_set<string> s;
    s.insert("abc");//O(1)
    s.insert("zab");
    s.insert("bcd");
    s.insert("abc");//takes unique only
    print(s);
    auto it = s.find("bcd"); // O(1)
    if (it != s.end()) {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Not found" << endl;
    }
    s.erase(it);
    // s.erase("bcd");
    print(s);
}