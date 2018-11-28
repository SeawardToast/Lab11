#include <iostream>
#include "table1.h"
using namespace main_savitch_12A;

int main() {
	table<int> t;
	t.insert(3);
    t.insert(19);
    t.insert(51);
    t.insert(67);
    t.insert(85);
    std::cout << "Printing Table" << std::endl;
    t.print();
        
}
