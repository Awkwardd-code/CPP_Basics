#include <iostream>
using namespace std ;

int main (){
    int teaBags;

    cout << "Enter the numbers of tea bags : \n";
    cin >> teaBags;

    if(teaBags < 10){
        teaBags +=5;
    }

    cout << "The Conditional Outputs is : " << teaBags << endl ;
}