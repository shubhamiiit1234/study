#include <iostream>
using namespace std;
int factorial(int a)
{	
	int *n = new int();
	if(a == 1)
		return 1;
	else
	{
		*n = a*factorial(a-1);
		return *n;
	}
}
int main()
{	
	cout << "hii asus" << endl;
	cout << "good" << endl;
	cout << factorial(4) << endl;
	return 0;
}
