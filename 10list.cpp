#include <bits/stdc++.h>
using namespace std;
void display(list<int> &list1){
    list<int>::iterator it; //=list1.begin();
    // for (int i = 0; i < list1.size(); i++)
    // {
    //     std::cout<<*it<<" ";
    //     it++;
    // }
    for (it = list1.begin(); it != list1.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    cout<<endl;
}
int main() {
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);//5 7 1 1 9 12
    list1.pop_back();//5 7 1 1 9
    list1.pop_front();//7 1 1 9
    list1.push_front(8);//8 7 1 1 9
    list1.remove(1);//8 7 9 12
    list1.sort();//7 8 9 12
    display(list1);
    list<int> list2(3);
    auto it=list2.begin();
    *it=23;
    it++;
    *it=76;
    it++;
    *it=62;
    display(list2);//23 76 62
    list2.sort();//23 62 76
    list1.merge(list2);//7 8 9 23 62 76 //list2 becomes null
    display(list1);
    list1.push_front(7);//7 7 8 9 23 62 76
    list1.unique();//7 8 9 23 62 76
    list1.reverse();//76 62 23 9 8 7
    display(list1);
    list1.swap(list2);//list1 becomes null
    display(list2);
    return 0;
}