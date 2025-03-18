// change element with index
// 0 2 4 1 3
// 0 3 1 4 2
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<int> result(n);
    for(int i=0;i<n;i++){
        result[num[i]]=i;
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}