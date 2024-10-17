#include<iostream>
using namespace std;
#include"Point.h"
#include"Cercle.h"


int main()
{
	//Point p(2, 3);
	//p.afficher();
	//Point P1;
	//P1.saisir();
	//P1.deplace(5, 6);
	//P1.afficher();
	//cout << "la distance est : " << P1.distance(p) << endl;
	//Point p2 = P1.milieu(p);
	//p2.afficher();



	Point* p1 = new Point(2.0, 3.0); //appel de constricteur de recopie
	Cercle* c1 = new Cercle(2, *p1);//appel constricteur de recopie vient de appel destricteur pour supprimer la copie crée


	c1->afficher();

	delete c1;
	p1->afficher();
	delete p1;

	return 0;
}