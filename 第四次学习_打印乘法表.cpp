#include<iostream>
using namespace std;

int main()
{
	for (int i = 1 ; i < 9 ; i++)
	{
		for (int a = 1 ; a <= i ; a++){
			cout << i << "*" << a << "="<< i*a << "\t" ;
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}