#include <iostream>
using namespace std;


int checkTempreture (int tempreture){
    return tempreture;
}
void serveTea (int cups);



void makeChai(){
    cout<<"\nBoiling water and tea leaves for making chai \n";
}
int main(){
    int temp = checkTempreture(5);
    cout<< temp;
    serveTea(3);
    makeChai();
    return 0 ;
}

void serveTea(int cups){
    cout << "\nServing " << cups <<" of teas";
}