#include <iostream>
#include <vector>
using namespace std;

class Chai{
    public:
        //data members (attributes)
        string teaName; // name of tea
        int servings; // number of servings
        vector<string> ingredients; //list of ingredients for a tea


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
    Chai chaiOne ;
    chaiOne.teaName = "Lemon Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water","Lemon","Suger","Tea"};
    chaiOne.displayChaiDetails();

    Chai chaiTwo ;
    chaiTwo.teaName = "Masala Tea",
    chaiTwo.servings = 5;
    chaiTwo.ingredients= {"Water","Ginger","Tea Masala","Honney","Tea"};
    chaiTwo.displayChaiDetails();

    return 0 ;
}