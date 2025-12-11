#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    //vector declaration
    vector<int> v;
    
    //inserting elements in vector
    v.push_back(10);
    v.emplace_back(20); //in this case push_back and emplace_back works same
    //v={10,20}
    
    vector<pair<int,int>> vec;
    vec.push_back({10,20}); //here in push_back we have to use {} to tell it that its a pair
    vec.emplace_back(30,40); //emplace_back automatically treats it as a pair
    //vec = {{10,20},{30,40}}
    cout<<vec[0].first<<" "<<vec[0].second<<" "<<vec[1].first<<" "<<vec[1].second<<'\n'; //10 20 30 40
    
    //other declarations
    vector<int> v1(5,100); //v1={100,100,100,100,100}
    vector<int> v2(5); //v2={0,0,0,0,0} 0 or garbage value depending on the compiler
    
    vector<int> v3(5,20); // v3 ={20,20,20,20,20}
    vector<int> v4(v3); //v4={20,20,20,20,20} it will copy v3 data in v4
    
    //accessing elements in a vector
    cout<<v[0]<<" "<<v.at(1)<<'\n'; //10 20 v[i]==v.at(i)
    
    //using iterators
    vector<int> sample = {5,10,15,20,25};
    
}

int main()
{
    explainVector();
    return 0;
}
