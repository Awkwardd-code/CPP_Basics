#include <iostream>
#include <string>
using namespace std ;

int main (){
    int cups;
    double pricePerCups = 2.5,totalPrice,discount;

    cout << "Enter the number of cups you ordered :  \n";
    cin >> cups;
    totalPrice = cups * pricePerCups ;

    if(cups > 20){
        discount = 0.20;
    }else if(cups >= 10 && cups <=20){
        discount = 0.10;
    }else{
        discount = 0 ;
    }

    totalPrice += ( totalPrice * discount);

    cout << "Total Price after discount is  : " << totalPrice << endl ;
    return 0 ;
}