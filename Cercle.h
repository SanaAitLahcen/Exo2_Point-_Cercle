#pragma once
#include"Point.h"

class Cercle
{
private:
	const static double pi;
	double rayon;
	Point centre; //composition:La cr�ation et la destruction d'un point  d�pendent d'un cercle.
	//Point* centre;//agr�gation: La cr�ation et la destruction d'un point ne d�pendent pas d'un cercle.

public:
	Cercle(double r, Point p);
	~Cercle();
	void afficher() const;
	void update(double);
	void translater(double dx, double dy);
	bool operator==(const Cercle&);
	double surface() const;
	double primetre() const;

};

