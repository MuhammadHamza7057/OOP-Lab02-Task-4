#include <iostream>
#include "Flower1.h"
#include "Tree1.h"
#include "Bush1.h"

using namespace std;

int main() {
    cout << endl;
    cout << "\tWelcome To Forest Of Bahria!" << endl;
    cout << endl;
    Flower flower(10);
    Tree tree(20);
    Bush bush(15);

    flower.simulateDayOfGrowth();
    tree.simulateDayOfGrowth();
    bush.simulateDayOfGrowth();

    flower.displayHeight();
    tree.displayHeight();
    bush.displayHeight();

    return 0;
}
