#include <iostream>
using namespace std;
/*
Operator conversion
The second way to produce automatic type conversion is through operator
overloading. You can create a member function that takes the current type
and converts it to the desired type using the operator keyword followed by
the type you want to convert to. This form of operator overloading is unique
because you do not appear to specify a return type - the return type is the
name of the operator you're overloading. Here is an example:
*/

class Four;

class Three
{
	private:
		int val;
	public:
		Three(int ii = 0);
		explicit Three(const Four &);
};

class Four
{
	private:
		int val;
	public:
		Four(int );
		operator Three() const;
		//explicit operator Three() const;
};

Three::Three(int x) : val(x)
{
	std::cout << "constructor Three called "<< val << endl;
}

Three::Three(const Four &val)
{
	cout << "constructor converter called" << endl;
}

Four::Four(int x) : val(x)
{
	std::cout << "constructor Four called " << val << endl;
}

Four::operator Three() const
{
	std::cout << "operator converter called " << val << endl;
	return Three(val);
}
//
// explicit operator Three() const
// {
// 	std::cout << "converter called" << endl;
// 	return Three(val);
// }

void g(Three){}
//void g(Four) {}

int main()
{
	// Three(1);
	// Three x(2);
	// cout << endl;
	// g(3);  // Calls Three(3)
	Four fourobj(4);

	g(fourobj);
	g(Three(fourobj));
}

/*
With the constructor technique, the destination class is performing
the conversion, but with operators, the source class performs the
conversion. The value of the constructor technique is that you can add
a new conversion path to an existing system as you are creating a
new class. However, creating a single-argument constructor always
defines an automatic type conversion (even if it is got more than
one argument, if the rest of the arguments are defaulted), which may
not be what you want (in which case you can turn it off using
explicit). In addition, there is no way to use a constructor
conversion from a user-defined type to a built-in type; this is
possible only with operator overloading.
*/
