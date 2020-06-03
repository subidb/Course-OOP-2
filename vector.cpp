#include <vector>
#include <deque>
#include <iostream>

const int size = 50;

using namespace std;

int main(int argc, char** argv)
{
	vector<int> vint;//(5,1);
	deque<int> dint;//{3,3,6};
	deque<double> dint2;
	vector<int> vint20{3,3,6};

	unsigned int i;

    cout << "\nCurrent size " << vint.size() << endl;
    //cout << "Current capacity " << vint.max_size() << endl;

    for (i = 0; i < vint.size(); i++)	// uses the overloaded [] operator
	{									// to access data
    	cout << vint[i] << " ";
	}

	for(i = 0; i < 5; i++)
    {
		vint.push_back(i);
	}

	for(i = 12; i < 14; i++)
	{
		vint.push_back(i);
	}

	for(i = 0; i < 5; i++)
    {
		dint.push_back(i);
		dint.push_front(i*(-1));
	}

	for(i = 12; i < 14; i++)
	{
		dint.push_back(i);
		dint.push_front(i*(-1));
	}

	for(i = 1; i < 5; i++)
	{
		dint2.push_back(i);
		dint2.push_front(i*10);
	}

	cout << "\n size changed to " << vint.size() << endl;
	cout << "\nEmpty? " << vint.empty() << endl;

    cout << "\nVector 1:\n";
	for (i = 0; i < vint.size(); i++)	// uses the overloaded [] operator
	{
		cout << endl;
		cout << vint[i] << " ";
		cout << &vint[i] << " ";
	}

	cout << "\n\n\nDeque 1:\n";
	for (i = 0; i < dint.size(); i++)	// uses the overloaded [] operator
	{
		cout << endl;
		cout << dint[i] << " ";
		cout << &dint[i] << " ";
	}

	cout << "\n\n\nDeque 2:\n";
	for (i = 0; i < dint2.size(); i++)	// uses the overloaded [] operator
	{
		cout << endl;
		cout << dint2[i] << " ";
		cout << &dint2[i] << " ";
	}

   //  cout << "\nVector 2:\n";
   //  for (i = 0; i < vint20.size(); i++)	// uses the overloaded [] operator
   //  										// to access data
   //  { cout << vint[i] << " ";
	//    cout << &vint20[i] << " ";
   // cout << endl;}
   //
	// vint.clear();  // removes all elements
	// cout << endl << "\ncurrent number of elements " << vint.size() << endl;
	// cout << "\nEmpty? " << vint.empty() << endl;

}
