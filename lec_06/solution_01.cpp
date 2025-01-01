#include <iostream>
using namespace std;
int main(){
    int teaCups ;
    cout << "Enter the number of tea cup to serve : ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        cout << "Serving a cup of tea \n" << teaCups << "Remaining \n";
        teaCups--;

    }
    
    cout << " All cups has been served";
    return 0;
}