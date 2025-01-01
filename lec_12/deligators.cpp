#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
    //main constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;

        cout << "Main Constructor Called !!" << endl;
    };
    //deligator constructor
    Chai(string name):Chai(name,5,{"Water", "Tea Leaves", "Honey"}){};

    void displayChaiDetails()
    {
        cout << "Tea Name : " << teaName << endl;
        cout << "Servings : " << servings << endl;
        cout << "Ingredients : ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }

        cout << endl;
    }
};

int main()
{
    Chai chai("Quick Chai");

    chai.displayChaiDetails();
    return 0;
}