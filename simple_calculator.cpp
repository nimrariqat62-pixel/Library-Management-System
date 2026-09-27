
#include <iostream>
using namespace std;
int main(){
	
	int num1,num2;
	int choice;
	
	cout << " enter first number :  ";
	cin >> num1;
	cout << " enter 2nd number :  ";
	cin >> num2;
	
	
	cout << "1. Addition " << endl;
	cout << "2. substraction" << endl;
	cout << "3. multiplication" << endl;
	cout << "4. division" << endl;
	
	cout << " enter your choice :  ";  
	cin >> choice;
	switch(choice) {
		case 1:
		cout <<  num1+num2 << endl;
		break;
		case 2:
		cout <<  num1-num2  << endl;
		break;
		case 3:
		cout <<  num1*num2  << endl;
		break;
		case 4:
		cout << num1/num2<< endl;
		break;
		default:
		cout << "invalid choice" << endl;
		
	}
	return 0;
}
		