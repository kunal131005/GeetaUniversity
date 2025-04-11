#include <iostream>
#include <string>
using namespace std;
// Access Specifiers - public(access for outside the class) ,private(for inside the class only)
class Car
{
private:
    float price;

public:
    int model_no;
    string name;

    // constructor- same name as class name
    Car()
    {
        cout << "Inside Car constructor." << endl;
    }

    // how can we use this as a parameterised constructor which have parameters like in this we have p,m,n
    Car(float p, int m, string n)
    {
        price = p;
        model_no = m;
        name = n;
    }

    // copy constructor
    Car(Car &x){
        cout<<"Copy Constructor Car"<<endl;
        price=x.price;
        model_no=x.model_no;
        name=x.name;
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Model No. : " << model_no << endl;
        cout << "Price : " << price << endl;
    }
};
int main()
{
    Car k(1000,1231,"KK");
    cout<<"Actual Car"<<endl;
    k.print();
    Car p(k);  //here we have created a copy of other constructor
    p.print();
    // another way to call copy constructor
    Car f=k;
    cout<<"Car k is copied to Car f"<<endl;
    f.print();
}