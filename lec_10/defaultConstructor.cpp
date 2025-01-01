#include <iostream>
#include <vector>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string teaName; // name of tea
        int servings; // number of servings
        vector<string> ingredients; //list of ingredients for a tea

        //bulding a default constructor. usually a contructor colled when a object is called
        Chai(){
            teaName = "Unknown Tea";
            servings = 5;
            ingredients = {"Water","Tea Leaves","Honey"};
            cout << "Constructor is Called !\n";
        }
        //member function
        void displayChaiDetails(){
            cout <<"Tea Name : " << teaName << endl;
            cout <<"Servings : " << servings << endl;
            cout <<"Ingredients : ";
            for(string ingredient : ingredients){
                cout<< ingredient << " ";

            }

            cout << endl;

        }
};

int main(){
    Chai defaultChai;
    defaultChai.displayChaiDetails();

    return 0;
}