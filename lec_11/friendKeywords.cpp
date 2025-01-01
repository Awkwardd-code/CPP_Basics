#include <iostream>
#include <vector>
#include <string>

using namespace std;


class  Chai
{
private:
    string teaName;
    int serving;
public:
    Chai(string name,int serve):teaName(name),serving(serve){};
    friend bool compareServing(const Chai &chai1 , const Chai &chai2);
    void display() const{
        cout << "Tea Name : " << teaName << endl;
    }
};
bool compareServing(const Chai &chai1 , const Chai &chai2){
    return chai1.serving > chai2.serving;
}

int main(){
    Chai masalaChai("Masala Chai",7);
    Chai gingerChai("Ginger Chai",9);

    masalaChai.display();
    gingerChai.display();

    if(compareServing(masalaChai,gingerChai)){
        cout << "Masala Chai has MORE Servings" << endl;
    }else{
        cout << "Masala Chai has LESS Servings" << endl;
    }
    return 0;
}