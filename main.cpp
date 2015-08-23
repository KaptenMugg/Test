#include "TestClass.h"
#include <iostream>

int main()
{
	test::TestClass c;
	std::cout << "hello world" << std::endl;
	c.write();
	std::cout << "more output..." << std::endl;
	return 0;
}
