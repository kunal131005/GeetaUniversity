#include<iostream>
using namespace std;
int count(int n,int ld){
    // base case
    if(n==0)return 0;  //agar string ki length 0 hai to usme consecutive 1 honge hi nhi
    if(n==1){  //agar string ki length 1 hai to check karna hoga ki usse pahle 0 hua to 10 and 01 ho sakti hai then 1 hua to kewal ek string banegi
        if(ld==0)return 2;
        else return 1;
    }
    // recursive case
    if(ld==0){  //last digit agar 0 hai to usse pahle 1 bhi ho sakta hai or 0 bhi
        return count(n-1,1)+count(n-1,0);
    }
    else{  //last digit agar 1 hai to usse pahle kewal 0 ho sakta hai 1 nhi
        return count(n-1,0);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<count(n,0);
}