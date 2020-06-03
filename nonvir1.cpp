#include <iostream>

using namespace std;

class A {
	protected:
		int val;
	public:
		A(int v) { val = v; cout << "Constructor A " << val << endl; }
};

class B : public A
{
	public:
		B(int v) : A(v) { cout << "Constructor B " << val << endl; }
};

class C : public B
{
	public:
		C(int v) : B(v) { cout << "Constructor C " << val << endl; }
		// error type 'A' is not a direct base of 'C'
		 //C(int v) : A(v), B(v) { cout << "Constructor C" << endl; }
};

int main()
{
	C obj(2);
	return 0;
}
