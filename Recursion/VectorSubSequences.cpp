#include<iostream>
#include<vector>
using namespace std;
void subsequences(vector<int>& num,vector<int>& r,int n,int i){
    if(i==n){
        for(int ele:r){
            cout<<ele<<" ";
        }
        cout<<endl;
        return ;
    }

    subsequences(num,r,n,i+1);
    r.push_back(num[i]);
    subsequences(num,r,n,i+1);
    r.pop_back();
}
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<int> r={};
    subsequences(num,r,n,0);
}