#include <iostream>
#include <forward_list>
using namespace std;

bool f(int a)
{
	return (a>10);
}

int main()
{
	forward_list<int> x;
	x.assign({23,4,3,6,56,5,10});
	
	x.remove_if(f); // 4 3 6 5 10
	
	forward_list<int>::iterator itr;
	
	for(itr = x.begin() ; itr!=x.end() ;itr++)
	 cout << *itr << " ";
}
