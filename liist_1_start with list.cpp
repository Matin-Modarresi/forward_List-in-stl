#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int>x;
	
	x.assign({15,4,6,2}); 
	
    x.sort();//2 4 6 15
    
    x.reverse();// 15 6 4 2
    
    cout << x.front() << "\n"; // 15
    
    cout << *x.begin() << "\n"; // 15
    
     x.push_front(12) ; // 12 15 6 4 2
     x.pop_front();    // 15 6 4 2
     
    list<int>::iterator itr;
    
    for(itr=x.begin() ; itr!=x.end() ; itr++)
     cout << *itr << "  ";
    
}
