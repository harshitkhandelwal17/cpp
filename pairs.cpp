#include<bits/stdc++.h>
using namespace std;

//pairs
void explainPair(){
    pair<int,int> p = {1,3}; //pair is a part of utility library
    //pair is used to store couple of integers
    cout<<p.first<<" "<<p.second; //1 3 
    pair<int,pair<int,int>> p2 = {1,{3,4}};
    cout<<'\n'<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<'\n'<<arr[1].second; //4
}

int main(){
    explainPair();
    return 0;
}
