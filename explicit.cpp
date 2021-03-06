/*
	There are times when automatic type conversion via the constructor
	can cause problems. To turn it off, you modify the constructor by
	prefacing with the keyword explicit (which only works with constructors).
	Used to modify the constructor of class Two in the example above:
*/

// Using the "explicit" keyword
#include <iostream>

using namespace std;

class One
{
	public:
	One() { cout << "one" << endl;}
};

class Two
{
	public:
	explicit Two(const One&) { cout << "two" << endl; }
};

void f(Two) {}

int main()
{
	//One one;
	//f(one); // No auto conversion allowed
	cout << hex << "0x" << 10 << flush;
	//f(Two(one)); // OK -- user performs conversion
}

/*
	By making Two's constructor explicit, the compiler is told not to perform
	any automatic conversion using that particular constructor
	(other non-explicit constructors in that class can still perform automatic
	conversions). If the user wants to make the conversion happen, the code
	must be written out. In the code above, f(Two(one)) creates a temporary
	object of type Two from one, just like the compiler did in the previous
	version.
*/
