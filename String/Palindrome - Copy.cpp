#include<iostream>
#include<cstring>
using namespace std;
bool CheckPalindrome(char ch[]){
    int l=0,r=strlen(ch)-1;
    int flage=0;
    while(l<r){
        if(ch[l]!=ch[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    char a[100];
    cin.getline(a,100);
    bool result = CheckPalindrome(a);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}