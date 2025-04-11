#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vec={5,0,1,2,4,3};
    sort(vec.begin(),vec.end()); //by default assecending
    for(int ele:vec){
        cout<<ele<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end(),greater<int>()); //usng comparator
    for(int ele:vec){
        cout<<ele<<" ";
    }
    cout<<endl; 
}