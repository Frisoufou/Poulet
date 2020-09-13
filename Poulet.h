/*****************************************************************/
/* SPECFICATION FILE (Poulet.h) Fichier de définition (Poulet.h) */
/*****************************************************************/
#include <iostream>
using namespace std;


class Poulet
{
public:
	//Constructeur

	Poulet();
	Poulet(string name, bool inCage);

	Poulet Bave();
	Poulet GetEtatPlancher() const ;
	Poulet GetEtatPoulet() const ;
	Poulet GetName() const ;
	Poulet PutInCage();
	Poulet PutOutCage();
	Poulet Drink();


private :
	string name_;
	int qtBave_ ;
	int qtEau_;
	bool soif_ ;
	bool inCage_;


};