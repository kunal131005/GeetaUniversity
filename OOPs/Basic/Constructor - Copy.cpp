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
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Model No. : " << model_no << endl;
        cout << "Price : " << price << endl;
    }
};
int main()
{
    Car c, d, e; // make a call to the constructor function prsent inside a class
    // the constructor will call itself for three times as there are three objects
    

    Car k(1000,1231,"KK");
    c.model_no = 123;
    c.name = "BMW";
    c.print();
    k.print();
}