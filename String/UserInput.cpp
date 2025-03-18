#include<iostream>
#include<cstring>
using namespace std;
void readLine(char b[],char delimiter){
    int i=0;
    char ch=cin.get();
    while(ch!=delimiter){
        b[i++]=ch;
        ch=cin.get();
    }
    b[i]='\0';
}
int main(){
    char a[100];
    // readLine(a,'\n');
    cin.getline(a,100);
    
    cout<<a<<endl;
}