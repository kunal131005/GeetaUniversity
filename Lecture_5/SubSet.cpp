#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>& num,int i,int n,vector<int>& store){
    // base case
    if(i==n){
        for(int ele:store){
            cout<<ele<<" ";
        }
        cout<<endl;
        return ;
    }
    
    // recursive case
    store.push_back(num[i]);
    subset(num,i+1,n,store);  //adding the subset in store
    store.pop_back();  //when the function call it self remove the last addedd elemet so that we can get the other subset
    subset(num,i+1,n,store);  // not adding the subset in store
}
int main(){
    vector<int> num={1,2,3};
    int n=num.size();
    vector<int> result;
    subset(num,0,n,result);
}