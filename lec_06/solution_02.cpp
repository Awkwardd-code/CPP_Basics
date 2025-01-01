#include <iostream>
using namespace std;
int main(){
    string response;

    do
    {
        cout << "Do you want more tea (Yes/No) ";
        getline(cin,response);
    } while (response != "No");
    
    
    return 0;
}