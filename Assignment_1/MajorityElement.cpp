// Sample Input
// 3
// 1 1 2
// Sample Output
// 1
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
    int count=1,temp=num[0];
    for(int i=1;i<n;i++){
        if(temp==num[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            count=1;
            temp=num[i];
        }
    }
    cout<<temp<<endl;
}