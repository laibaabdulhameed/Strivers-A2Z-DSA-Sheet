#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,20,30};
    l.push_back(40);
    l.push_front(5);
    // l.pop_back();
    l.pop_front();
    for( auto it= l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }

  
}