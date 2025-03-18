#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for n sizeof array the number of pair is n(n-1)/2
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            cout<<num[i]<<" "<<num[j]<<",";
        }
        cout<<endl;
    }
}