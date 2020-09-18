#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int>x={4,3,2,1};
	forward_list<int>y={7,6,5};
	
	forward_list<int>::iterator itr;
	
//	y.merge(x); // 4 3 2 1 7 6 5 
	
	x.merge(y , greater<int>()); //7 6 5 4 3 2 1
	
	for(itr=y.begin() ; itr!=y.end() ; itr++)
	cout << *itr << " ";
	
    for(itr=x.begin() ; itr!=x.end() ; itr++)
	cout << *itr << " ";	

}
