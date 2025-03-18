#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isSorted(vector<int>& temp,int n){
    // base case
    if(n==0 || n==1){
        return true;
    }
    // recursive function
    if(temp[n-2]>temp[n-1]){
        return false;
    }
    return isSorted(temp,n-1);
}
int main(){
    vector<int> num={1,4,6,8,9,10};
    int n=num.size();
    bool ans=isSorted(num,n);
    if(ans==true){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
}