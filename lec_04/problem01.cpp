#include <iostream>
using namespace std ;

int main (){
    int cups; 
    double pricePerCup,totalPrice,discountedPrice;

    cout << "Enter the number of Cups : \n";
    cin >> cups;
    cout << "Enter the Price of each Cups : \n";
    cin >> pricePerCup;\

    totalPrice = cups * pricePerCup ;

    if(totalPrice > 100 ){
        discountedPrice = totalPrice - (totalPrice*0.05);
    }else{
        discountedPrice = totalPrice;
    }


    cout << "The Total Price with Discount is : " << discountedPrice << endl ;
}