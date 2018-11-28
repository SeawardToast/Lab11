#include <iostream>
#include "table1.h"

int main() {
	table<int> t;
	for(int i = 0; i < 5; i++)
		t.insert(i+1);
}
