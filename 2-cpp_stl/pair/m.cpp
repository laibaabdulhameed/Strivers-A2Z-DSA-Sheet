// pair used to store two different data types.
// Can be accesses with first and second

#include <bits/stdc++.h>
using namespace std;
pair<string, pair<int, int>> getInfo(){
    return { "ahmed", {23,56}};
}
int main(){
    pair<int, string> box1={20, "raj"};
    pair<int, int> box2={20, 30};
    cout<<box1.first<<"\n"<<box1.second<<endl;
    box2.first = box2.first+box2.second;
    cout<<box2.first<<endl;
    pair<string, pair<int, int>> result = getInfo();
    cout<<result.first<<"\n";
    cout<<result.second.first<<"\n";
    cout<<result.second.second<<"\n";
}