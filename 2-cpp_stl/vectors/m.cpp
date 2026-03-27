// Problem:Student Scores
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> scores = {72, 85, 63, 90, 78};
    scores.push_back(95);
    scores.pop_back();
    sort(scores.begin(), scores.end());
    sort(scores.rbegin(), scores.rend());
    cout<<scores.size();
    for(int x : scores){
        cout<<x<<"\n";
    }
    cout<<*min_element(scores.begin(), scores.end())<<"\n";
    cout<<*max_element(scores.begin(), scores.end())<<"\n";
    cout<<scores[scores.size()-1]<<"\n";
}