#include<iostream>
#include<vector>
using namespace std;
int ways(int n,int m,vector<int>& r){
    if(n==0){
        for(int ele:r){
            cout<<ele<<" ";
        }
        cout<<endl;
        return 1;
    }
    if(n<0)return 0;
    int ans=0;
    for(int k=1;k<=m;k++){
        r.push_back(k);
        ans+=ways(n-k,m,r);
        r.pop_back();
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> r;
    cout<<ways(n,m,r);
}