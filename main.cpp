#include <iostream>
#include "Poulet.h"

using namespace std;

int main()
{
	string name;
	char ans;
	bool inCage(false);

	cout << "Donne un nom à ton chien : " << endl;
	cin >> name;
	cout << "Est-il dans sa cage ? (y/n) " << endl;
	cin >> ans;
	if (char == "y")
		inCage = true;


	bool stop = false;
	do {
		cout << "1. Faire baver " << Poulet.GetName() << endl;
		cout << "2. Faire boire " << Poulet.GetName() << endl;
		cout << "3. Mettre dans la cage " << Poulet.GetName() << endl;
		cout << "3. Sortir de la cage " << Poulet.GetName() << endl;
		cout << "4. Connaitre l'état de  " << Poulet.GetName() << endl;
		cout << "5. Connaitre l'état du plancher" << endl;
		cout << "6. Arreter." << endl;
		cin >> rep;
	} while (stop);





	return 0
};
