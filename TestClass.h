#ifndef TESTCLASS_H
#define TESTCLASS_H
#include <iostream>

namespace test
{
	class TestClass
	{
	public:
		TestClass(const TestClass &) = delete;
		TestClass & operator=(const TestClass &) = delete;
	
	public:
		TestClass()
		{}

		void write()
		{
			std::cout << "Out from TestClass..." << std::endl;
		}

	};

}

#endif
