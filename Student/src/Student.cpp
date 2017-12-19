//============================================================================
// Name        : Student.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ThiSinh.h"
using namespace std;

int main() {
	ThiSinh* p = new ThiSinh();
	p->create("BKA123", "Thinh", 1994, 10);
	p->create("BKA124", "Huong", 1994, 9);
	p->create("BKA125", "Ngo", 1994, 10);
	p->create("BKA126", "Ham", 1994, 10);
	p->create("BKA127", "Dien", 1994, 10);
	p->create("BKA128", "Ng3", 1994, 10);
	p->display();
	return 0;
}
