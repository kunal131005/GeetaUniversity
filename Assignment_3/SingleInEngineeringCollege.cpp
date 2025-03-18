#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool CutTrees(vector<int>& tree, long long height, long long x) {
    long long total = 0;
    for (int h : tree) {
        if (h > height) {
            total += (h - height);
        }
    }
    return total >= x;
}
int height(vector<int>& tree,long long x){

    long long result_h=0;
    long long max_h= *max_element(tree.begin(),tree.end());
    long long low_h=0;
    while(low_h<=max_h){
        int mid_h=(max_h-low_h)/2+low_h;      
        if(CutTrees(tree,mid_h,x)){
            result_h=mid_h;
            low_h=mid_h+1;
        } 
        else{
            max_h=mid_h-1;
        }
    }
    return result_h;
}
int main(){
    int n;
    cin>>n;
    vector<int> tree(n);
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    long long x;
    cin>>x;
    
    cout<<height(tree,x);
}