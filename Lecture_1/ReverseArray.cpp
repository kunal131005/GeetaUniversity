#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    // for(int i=0;i<vec.size()/2;i++){
    //     int temp=vec[i];
    //     vec[i]=vec[vec.size()-1-i];
    //     vec[vec.size()-1-i]=temp;
    // }

    // Using Two Pointer
    int l=0,r=n-1;
    while(l<r){
        swap(vec[l],vec[r]);
        l++;
        r--;
    }
    for(int ele:vec){
        cout<<ele<<" ";
    }
}