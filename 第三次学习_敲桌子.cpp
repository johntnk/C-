#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	
	for (; i <= 100; i++){
		
		if(i % 10 == 7  || i / 10 % 10 == 7 || i % 7 == 0 ){
			cout << "knock" << endl;
		}else{
			cout << i << endl;
		}
		
	}
	system("pause");
	return 0;
}