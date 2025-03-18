#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int i=0,j=1;
    int sum=0;
    sort(num.begin(),num.end());
    // while(i<n and j<n){
    //     sum+=min(num[i],num[j]);
    //     i=i+2;
    //     j=j+2;
    // }
    for(int i=0;i<n;i+=2){
        sum+=num[i];
    }
    cout<<sum<<endl;
}