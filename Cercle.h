#pragma once
#include"Point.h"

class Cercle
{
private:
	const static double pi;
	double rayon;
	Point centre; //composition:La création et la destruction d'un point  dépendent d'un cercle.
	//Point* centre;//agrégation: La création et la destruction d'un point ne dépendent pas d'un cercle.

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

