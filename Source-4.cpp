#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	const char caractere[] = { "abcdefghijklmnopqrstuvwxyz"
		"1234567890"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"!@#$%^&*" };
	cout << sizeof(caractere) << endl;
	cout << strlen(caractere)+1 << endl;
	int size=sizeof(caractere), length;
	cin >> length;
	for (int i = 0; i < sizeof(caractere); i++)
	{
		cout << caractere[i];
	}
	srand(time(NULL));
	cout << endl << "the generated password is: ";
	for (int j = 0; j < length; j++) {
		cout << caractere[rand()%size];
	}
}