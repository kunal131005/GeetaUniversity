// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 1 3 6 10
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
    vector<int> result;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];
        result.push_back(sum);
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}