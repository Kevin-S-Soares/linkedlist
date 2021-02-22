#include <iostream>
#include "linkedlist.h"
using namespace std;

int main (int argc, char* argv[])
{
	LinkedList *l = new LinkedList(10);
	l->append(20);
	l->append(30);
	int n = l->getValueByIndex(1);
	cout << "funciona: " << n << endl;
	l->printAll();
	delete l;
}
