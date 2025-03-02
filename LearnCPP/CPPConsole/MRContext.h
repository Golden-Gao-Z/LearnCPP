#pragma once
#include <stdio.h>
class MRContext {
public:
	// default ctor
	MRContext();

	MRContext(int x, int y);


	int FileCount;
	char CH;
	void PrintCount();
	void HelloWorld();
private:
	int LoadedCount;
};