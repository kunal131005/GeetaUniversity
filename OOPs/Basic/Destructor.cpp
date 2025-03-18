#include <iostream>
#include <string>
using namespace std;
// Access Specifiers - public(access for outside the class) ,private(for inside the class only)
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
        name=new string(*(x.name));
    }
    void print()
    {
        cout << "Name : " << *name << endl;
        cout << "Model No. : " << model << endl;
        cout << "Price : " << price << endl;
    }

    // Destructor 

    // when there is no dynamically memory allocation
    // ~Car(){
    //     cout<<"Inside Destructor of "<<name<<endl;
    // }

    // But in our current code here we have used dynamically memory allocation for name
    ~Car(){
        cout<<"Destroying car "<<*name<<endl;
        if(name!=NULL){
            delete  name;
        }
    }
};
int main()
{
    // Static Car Allocation
    Car a(100,11,"DGD");
    cout<<"Car a"<<endl;
    a.print();
    Car b(a);
    cout<<"Car b"<<endl;
    b.price=300;
    *b.name="BMW";
    b.print();

    // Dynamically Created Car
    Car *c=new Car(198,123,"KNK");
    cout<<"Car c"<<endl;
    c->print();
    
    // delete keyword to delete those objects who is dynamicaly allocated
    delete c;

    return 0;
}