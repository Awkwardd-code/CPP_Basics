#include <iostream>
#include <vector>
#include <string>

using namespace std;

// base class

class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea Constructor Called " << teaName << endl;
    }
    virtual void brew() const
    {
        cout << "Brewing " << teaName << " With genric method " << endl;
    }
    virtual void serve() const
    {
        cout << "Serving " << servings << " cups of tea With genric method " << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green Tea Constructor is called" << endl;
    }
    void brew() const override
    {
        cout << "Brewing " << teaName << " by sleeping tea leaves ";
    }
    ~GreenTea(){
        cout << "Green Tea constructor called"<< endl;
    }
    

};
class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "Masala Tea Constructor is called" << endl;
    }
    void brew() const override final
    {
        cout << "Brewing " << teaName << " by with spices and milk ";
    }
    ~MasalaTea(){
        cout << "Masala Tea constructor called"<< endl;
    }
    

};

// class SpicyMasalaTea : public MasalaTea
// {
// public:
//     // SpicyMasalaTea(int serve) : MasalaTea("Spicy Masala Tea", serve)
//     // {
//     //     cout << "Masala Tea Constructor is called" << endl;
//     // }
//     void brew() const override final
//     {
//         cout << "Brewing " << teaName << " by with spices and milk ";
//     }
//     ~SpicyMasalaTea(){
//         cout << "Masala Tea constructor called"<< endl;
//     }
    

// };

int main()
{
    Tea* tea1 =  new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();
    tea2->brew();
    tea2->serve();


    delete tea1;
    delete tea2;
    return 0;
}