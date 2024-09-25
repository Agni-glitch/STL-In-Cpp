// red black trees
#include <bits/stdc++.h>
using namespace std;
// void print(set<string> &m) {
//     for (auto it = m.begin(); it != m.end(); it++) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }
void print(set<string> &m){
    for (const string &value: m) {
        std::cout << value << " ";
    }
    cout << endl;
}
int main(){
    set<string> s;
    s.insert("abc");//log n
    s.insert("zab");
    s.insert("bcd");
    s.insert("abc");//takes unique only
    print(s);
    auto it = s.find("bcd"); // O(log n)
    if (it != s.end()) {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Not found" << endl;
    }
    s.erase(it);
    // s.erase("bcd");
    print(s);
}