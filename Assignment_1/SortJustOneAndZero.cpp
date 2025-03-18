// ip 1 0 0 1 1 0 1
//  op 0 0 0 1 1 1 1
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
    int i=0,j=n-1;
    while(i<j){
        if(num[i]==1 and num[j]==0){
            swap(num[i],num[j]);
            i++;
            j--;
        }
        if(num[i]==0){
            i++;
        }
        if(num[j]==1){
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}