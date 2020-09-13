/************************************************************************/
/* IMPLEMENTATION FILE (Poulet.h) Fichier d'implémentation (Poulet.cpp) */
/************************************************************************/

#include <iostream>
#include "Poulet.h"

using namespace std;

/************************************************************************/
Poulet::Poulet()
{
	name_ = "Isaac";
	qtBave_ = 0;
	qtEau_ = 50;
	soif_ = false;
	inCage_ = true;
};
/************************************************************************/
Poulet::Poulet(string name, bool soif, bool inCage)
{
	name_ = name;
	qtBave_ = 0;
	qtEau_ = 50;
	soif_ = false;
	inCage_ = inCage;
};
/************************************************************************/
Poulet::Bave()
{
	if (qtEau_ > 0)
		qtEau_ = qtEau_ - 10;
	if (inCage_)
		qtBave_ = qtBave_ + 20;
	qtEau_ = qtEau_ - 20;
	else
		qtBave_ = qtBave_ + 10;
	qtEau_ = qtEau_ - 10;
	else
		cout << name_ << " ne peut plus baver en raison de déshydratation" << endl;
};
/************************************************************************/
Poulet::GetEtatPlancher() const
{
	cout << "Il y a " << qtBave_ << " ml de bave sur le plancher." << endl;
};
/************************************************************************/
Poulet::GetEtatPoulet() const
{
	if (inCage_) 
		cout << name_ << " est dans la cage." << endl;
	else
		cout << name_ << " n'est pas dans la cage." << endl;
	
	if (soif_ )
		cout << name_ << " a soif." << endl;
	else
		cout << name_ << " n'a pas soif." << endl;
};
/************************************************************************/
Poulet::getName() const
{
	cout << "Le nom de ce poulet est " << name_ << endl
};
/************************************************************************/
Poulet::PutInCage()
{
	if (inCage_)
		cout << name_ << " est déjà dans la cage." << endl;
	else
		inCage_ = true;
};
/************************************************************************/
Poulet::PutOutCage()
{
	if (!inCage_)
		cout << name_ << " est déjà hors de la cage." << endl;
	else
		inCage_ = false;
};
/************************************************************************/
Poulet::Drink()
{
	if (qtEau_ == 100)
		cout << name_ << " n'a pas soif." << endl;
	else
		qtEau_ = qtEau_ + 10;
	if (qtEau_ > 20)
		soif_ = false;
};
/************************************************************************/