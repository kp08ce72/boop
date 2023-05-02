// program to enter number and cost of a class item using get data () and using put data () to display data. Write get data () outside the class item.

#include <iostream>
#include <string>
using namespace std;

class Item {
    int number;
    double cost;
public:
    void getData();
    void putData() {
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

void Item::getData() {
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter cost: ";
    cin >> cost;
}

int main() {
    Item item;
    item.getData();
    item.putData();
    return 0;
}
