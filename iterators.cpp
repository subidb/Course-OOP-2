#include <vector>
#include <list>
#include <deque>
#include <iostream>

using namespace std;

const unsigned int size = 6;

int main(int argc, char** argv)
{
	vector<int> vint;
	list<int> lint;
	deque<int> dint;
	for (unsigned int i = 0; i < size; i++)
	{
		vint.push_back(i);
		(i % 2) == 0 ? dint.push_front(i) : dint.push_back(i);
		lint.push_front(i * i);

	}

	vector<int>::iterator viter = vint.begin();
	vector<int>::iterator viter2 = vint.end();
	list<int>::iterator liter;

	deque<int>::iterator diter = dint.begin();
	deque<int>::iterator diter2 = dint.end();

  	while (viter != vint.end())
	{
		cout << *viter << " " ;
		viter++;
	}
	cout << endl;

	do
	{
		viter2--;
		cout << *viter2 << " " ;
	}
	while (viter2 != vint.begin());

	cout << endl;

	cout << "\n" << endl;
	while (diter != dint.end())
	{
		cout << *diter << " ";
		diter++;
	}

	cout << endl;
	while (diter2 != dint.begin())
	{
		diter2--;
		cout << *diter2 << " ";
	}
	cout << "\n" << endl;


	cout << endl;

	for (liter = lint.begin(); liter != lint.end(); liter++)
		cout << *liter << " ";
}
