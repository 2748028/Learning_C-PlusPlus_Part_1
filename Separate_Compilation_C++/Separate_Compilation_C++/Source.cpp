#include <iostream>
#include <string>

#ifndef _SomeClass_
#define _SomeClass_

namespace MyNameSpace
{
	void PrintHello();

	class SomeClass
	{
	private:
		std::string greeting;
	public:
		SomeClass();
		SomeClass(std::string str);
		void GetGreat();
		const SomeClass& operator << (const SomeClass& another);
	};
}



