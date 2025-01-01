#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    Chai(/* args */)
    {
        teaName = "Unknown Tea";
        servings = 5;
        ingredients = {"Water", "Tea Leaves", "Honey"};
    };
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    };

    // getter
    string getTeaName()
    {
        return teaName;
    }
    int getServings()
    {
        return servings;
    }
    vector<string> getIngredients()
    {
        return ingredients;
    }
    // setter
    void setTeaName(string name)
    {
        teaName = name;
    }
    void setServings(int serve)
    {
        servings = serve;
    }
    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
    }

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
    Chai chai;
    chai.setTeaName("Lemon Tea");
    chai.displayChaiDetails();
    return 0;
}