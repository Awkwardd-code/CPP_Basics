#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <ctime>
#include <string>
#include <list>

using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int productID;
    int quantity;
    string cutomerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {101, "Desc Lamp", "Home"},
    };

    deque<string> recentCustomers = {
        "C001","C002","C003","C004"
    };
    recentCustomers.push_back("C005");
    recentCustomers.push_front("C006");

    list<Order> orderHistory;

    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,3,"C002",time(0)});
    orderHistory.push_back({3,103,1,"C003",time(0)});

    set<string>categories;
    for(const auto &product : products){
        categories.insert(product.category);
    }

    map <int, int > productStock = {
        {101,10},
        {102,23},
        {103,45},
        {104,24},
        {105,5},
    };

    multimap<string,Order> customerOrders ;
    for(const auto &order : orderHistory){
        customerOrders.insert({order.cutomerID,order});
    }
    

    unordered_map<string,string> cutomerData={
        {"C001","Atik"},
        {"C002","Mahbub"},
        {"C003","Akash"},
        {"C004","Harry"},
        {"C005","Potter"},
    };

    unordered_set<int> uniqueProductIDs ;
    for(const auto &product : products){
        uniqueProductIDs.insert(product.productID);
    }



    return 0;
}
