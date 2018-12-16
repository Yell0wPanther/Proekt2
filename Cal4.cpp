#include "StdAfx.h"
#include <iostream>
#include "Del.h"

using namespace std;
int main(){
	double a;
	double b;
	char choise;
	cout << "Vvedite 2 chisla: "<<endl;
	cin >> a>> b;
	do
	{
		cout << " Vvedite deistvie "<<endl;
		cin >> choise;
		switch (choise)
		{
		case ('/'): {
			cout << Del(a, b) << endl;
			break;
		}

		}
system("pause");
return 0;
}
}