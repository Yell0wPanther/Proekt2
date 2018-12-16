#include "StdAfx.h"
#include <iostream>
#include "Min.h"

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
		case ('-'): {
			cout << Min(a, b) << endl;
			break;
		}

		}
system("pause");
return 0;
}
}