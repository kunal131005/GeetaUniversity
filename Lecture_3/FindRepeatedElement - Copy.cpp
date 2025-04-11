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
    
    // vector<int> freq(n+1,0);
    // for(int i=1;i<=n;i++){
    //     freq[num[i-1]]++;
    // }
    // for(int i=0;i<=n;i++){
    //     cout<<i<<" "<<freq[i]<<endl;
    // }
    // vector<int> result;
    // for(int i=0;i<=n;i++){
    //     if(freq[i]==2){
    //         result.push_back(i);
    //     }
    // }
    // for(int ele:result){
    //     cout<<ele<<" ";
    // }


    // sort(num.begin(),num.end());
    // int temp=num[0];
    // for(int i=1;i<n;i++){
    //     if(temp==num[i]){
    //         cout<<temp<<endl;
    //     }
    //     else{
    //         temp=num[i];
    //     }
    // }
}