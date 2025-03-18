#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num={3,2,1};
    do{
        for(int i=0;i<num.size();i++){
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(num.begin(),num.end()));

}