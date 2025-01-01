#include <iostream>
#include <vector>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string* teaName; // name of tea
        int servings; // number of servings
        vector<string> ingredients; //list of ingredients for a tea

        //bulding a default constructor. usually a contructor colled when a object is called
        Chai(string name = "Unknown Tea"  , int serve = 5,vector<string>ingr = {"Water","Tea Leaves","Honey"}){
            teaName = new string (name);
            servings = serve;
            ingredients = ingr ;
            cout << "Param Constructor is Called !\n";
        }
        //copy constuctor
        Chai(const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
            cout << "Copy Constructor is Called !\n"; 
        }
        // destructor 
        ~Chai(){
            delete teaName;
            cout << "Destructor Called !!" << endl;
        }
        //member function
        void displayChaiDetails(){
            cout <<"Tea Name : " << *teaName << endl;
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
    // defaultChai.displayChaiDetails();

    // copy cons
    Chai copyChai = defaultChai;
    // copyChai.displayChaiDetails();

    *defaultChai.teaName = "Modified Lemon Tea";


    cout << "Lemon Tea ============================" << endl;
    defaultChai.displayChaiDetails();
    cout << "Copied Tea ===========================" << endl;
    copyChai.displayChaiDetails();
    return 0;
}