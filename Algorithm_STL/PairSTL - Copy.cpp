#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // pair<int,int> p;
    // p.first = 10;
    // p.second = 101;
    // p=make_pair(10,101);
    // pair<string,int> p;
    // p=make_pair("Kunal",19);
    pair<string,pair<float,int> > p;
    p.first="Kunal";
    p.second.first=20.03;
    p.second.second=19;
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}