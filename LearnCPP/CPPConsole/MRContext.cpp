#include "MRContext.h"
#include <iostream>

MRContext::MRContext() {

}

MRContext::MRContext(int x, int y) {
	this->FileCount = x;
}

void MRContext::PrintCount() {
	std::cout << "PrintCount!" << this->FileCount << "\n";
}
void MRContext::HelloWorld() {
	std::cout << "Hello World!\n";
}

