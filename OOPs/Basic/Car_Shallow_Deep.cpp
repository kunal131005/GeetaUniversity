#include <iostream>
using namespace std;
class Car
{
public:
    int price;
    int model;
    string *name;

    Car(){
        name=NULL;
    }
    Car(int p,int m,string n){
        price=p;
        model=m;
        // deep copy
        name=new string(n); //allocating memory for copy constructor name
    }
    // copy constructor
    Car (Car &x){
        price = x.price;
        model=x.model;
        name=x.name;
    }
    void print(){
        cout<<"Name- "<<*name<<endl<<"Model- "<<model<<endl<<"Price- "<<price<<endl;
    }
};
int main()
{
    Car a(100,11,"DGD");
    cout<<"Car a"<<endl;
    a.print();
    Car b(a);
    cout<<"Car b"<<endl;
    b.price=300;
    *b.name="BMW";
    b.print();
}