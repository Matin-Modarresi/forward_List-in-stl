#include <iostream>
#include <forward_list>

using namespace std;

template<class c>

c f(c z)
{
	c t;
	t=z;
	
	for(auto& item:t)
	 item++;
	 
	 return t;
}

int main()
{
	forward_list<int> x = {1,2,3,4};
	forward_list<int>y;
	
	y = f(x);
	
	for(int& item:y)
	cout << item << " ";
}
