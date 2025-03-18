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
    int l_pro=1;
    vector<int> result(n);
    for(int i=0;i<n;i++){
        result[i]=l_pro;
        l_pro=l_pro*num[i];
    }
    int r_pro=1;
    for(int i=n-1;i>=0;i--){
        result[i]=result[i]*r_pro;
        r_pro=r_pro*num[i];
    }
    for(int ele:result){
        cout<<ele<<" ";
    }
     
}