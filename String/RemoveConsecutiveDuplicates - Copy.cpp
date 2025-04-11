#include<iostream>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;
void RemoveDuplicates(char ch[]){
    int len=strlen(ch);
    int i=0,j=1;
    while(j<len){
        if(ch[i]!=ch[j]){
            i++;
            ch[i]=ch[j];
        }
        j++;
    }
    ch[i+1]='\0';

}
int main(){
    char a[1000];
    cin.getline(a,1000);
    cout<<a<<endl;
    RemoveDuplicates(a);
    cout<<a<<endl;
}