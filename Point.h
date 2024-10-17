#pragma once
class Point
{
private:
	double x;
	double y;

public:

	Point();
	Point(double, double);
	Point(const Point&);
	~Point();
	void deplace(double dx, double dy);
	void afficher() const;
	void saisir();
	double distance(const Point&);
	bool operator==(const Point&);
	Point milieu(const Point&);
};
