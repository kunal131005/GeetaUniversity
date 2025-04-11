#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num={1,3,5};
    int n=num.size();
    int count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=num[k];
    //         }
    //         if(sum%2!=0){
    //             count++;
    //         }
    //     }
    // }
    
    cout<<count%1000000007<<endl;
}
