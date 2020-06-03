#include <iostream>
#include <vector>
#include <list>

using namespace std;
int main()
{

	list<int> la;
	list<int> lb;
	vector<list<int>> v;

	la.push_back(1);
	la.push_back(2);
	la.push_back(3);

	lb.push_back(4);
	lb.push_back(5);
	lb.push_back(6);

	v.push_back(la);
	v.push_back(lb);

	vector<list<int>>::iterator itvec;
	for(itvec=v.begin(); itvec!=v.end(); itvec++)
	{
		list<int>::iterator itlist;
		for(itlist=itvec->begin(); itlist!=itvec->end(); itlist++)
			cout << *itlist << " ";
		cout << endl;
	}
	return 0;
}
