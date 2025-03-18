// Sample Input
// 5
// -4 -1 0 3 10
// Sample Output
// 0 1 9 16 100

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
        if(abs(num[i])<abs(num[j])){
            num[j]=num[j]*num[j];
            j--;
        }
        if(abs(num[i])>abs(num[j])){
            swap(num[i],num[j]);
            num[j]=num[j]*num[j];
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}
