#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num1={1,2,3};
    vector<int> num2={2,5,6};
    int n1=num1.size();
    int n2=num2.size();
    int i=0,j=0,k=0;
    vector<int> temp(n1+n2);
    while(i<n1 and j<n2){
        if(num1[i]<=num2[j]){
            temp[k++]=num1[i++];
        }
        else{
            temp[k++]=num2[j++];
        }
    }
    while(i<n1){
        temp[k++]=num1[i++];
    }
    while(j<n2){
        temp[k++]=num2[j++];
    }
    for(int ele:temp){
        cout<<ele<<" ";
    }
}
