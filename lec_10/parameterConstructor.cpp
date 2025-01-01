#include <iostream>
#include <vector>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string teaName; // name of tea
        int servings; // number of servings
        vector<string> ingredients; //list of ingredients for a tea

        //bulding a parameter constructor. usually a contructor colled when a object is called
        Chai(string name = "Unknown Tea"  , int serve = 5,vector<string>ingr = {"Water","Tea Leaves","Honey"}){
            teaName = name;
            servings = serve;
            ingredients = ingr ;
            cout << "Param Constructor is Called !\n";
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
    Chai defaultChai("Lemon Tea",10,{"Water","Lemon","Honey","Tea Leaves","Tea Bags"});
    defaultChai.displayChaiDetails();

    return 0;
}