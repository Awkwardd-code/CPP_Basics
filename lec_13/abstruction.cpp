#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() ; //pure virtual function
     virtual void brew() ; //pure virtual function
      virtual void serve() ; //pure virtual function
    

    void makeTea(){
        prepareIngredients();
        brew();
        serve();

    }
};

//drived class
class GreanTea : public Tea
{
public:
    void prepareIngredients() override{
        cout << "Green Leaves and Water is ready !!" << endl ;
    }
    void brew() override{
        cout << "Greem Tea Brew" << endl ;
    }
    void serve() override{
        cout << "Greem Tea Serve" << endl ;
    }

};

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override{
        cout << "Green Leaves and Water is ready !!" << endl ;
    }
    void brew() override{
        cout << "Masala Tea Brew" << endl ;
    }
    void serve() override{
        cout << "Masala Tea Serve" << endl ;
    }

};





int main(){

    GreanTea greenTea ;
    MasalaTea masalaTea;


    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}