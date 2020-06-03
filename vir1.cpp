#include <iostream>

using namespace std;

class A {
	protected:
		int val;
	public:
		A(int v) { val = v; cout << "Constructor A " << val << endl; }
};

class B : public virtual A {
	public:
		B(int v): A(v) { cout << "Constructor B " << val << endl; }
};

class C : public B {
	public:
		// error: no matching function to call A::A();
		 //C(int v) : B(v) { cout << "Constructor C" << endl; }
		 C(int v) : A(v), B(v) { cout << "Constructor C " << val << endl; }
};

int main()
{
	C obj(5);
	return 0;
}
