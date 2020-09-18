#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int>x;
	
	x.assign({15,4,6,2});
	
    x.sort();
    
    x.reverse();
    
    cout << x.front() << "\n";
    
    cout << *x.begin() << "\n";
    
     x.push_front(12) ;
     x.pop_front();
     
    list<int>::iterator itr;
    
    for(itr=x.begin() ; itr!=x.end() ; itr++)
     cout << *itr << "  ";
    
}
