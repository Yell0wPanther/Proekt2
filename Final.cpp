

#include "StdAfx.h"
#include <iostream>
#include "Umn.h"
#include "del.h"
#include "plus.h"
#include "Min.h"

using namespace std;
//проверка работы проекта
int main(){
	double a;
	double b;
	char choise;
	cout << "Vvedite 2 chisla, razdeliv ih probelom: "<<endl;
	cin >> a>> b;
	
	do
	{
		cout << "::: Vvedite deistvie :::"<<endl;
		cin >> choise;



		switch (choise)
		{
		case ('+'): {
			cout << Plus(a, b) << endl;
			break;
		}
		case ('-'): {
			cout << Min(a,b)<< endl;
			break;
		}
		case ('*'): {
			cout << Umn(a, b) << endl;
			break;
		}
		case ('/'): {
			cout << Del(a, b) << endl;
			break;
		}


		default:
			exit(0);
			break;
		}

	} while (choise != 0);

system("pause");
return 0;
}