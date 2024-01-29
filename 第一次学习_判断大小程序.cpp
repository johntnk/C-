#include<iostream>
#include<String>
#include<ctime>


#define John "very good"
using namespace std;

int main(){
	int num = 110;
	int rang = 0;
	srand((unsigned int) time(NULL) );
	rang = rand() % 100 + 1;	
	
	while( rang != num ){
		cout << "please enter a new bumber:"<< endl;
		cin >> num;
		if(num > rang){
			cout << "too large" << endl;
		}else if (num < rang){
			cout << "too small"<<endl;
		}else{
			break;
		}
		}
	
	cout << "that\'s right "<< endl;
	
	
	
	system("pause");
	return 0;
}