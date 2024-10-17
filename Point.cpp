#include "Point.h"
#include <iostream>
#include <cmath> // Ajouté pour les fonctions mathématiques
using namespace std;

// Constructeur =sans paramétres
Point::Point()
{
    this->x = 2; 
    this->y = 4; 
}

// Constructeur avec paramètres
Point::Point(double x1, double y1) : x(x1), y(y1) 
{}

// Constructeur de recopie
Point::Point(const Point& P)
{
    cout << "constructeur de recopie point" << endl; 
}

// Destructeur
Point::~Point()
{
    cout << "destructeur point" << endl; 
}

// Méthode pour déplacer le point
void Point::deplace(double dx, double dy)
{
    this->x += dx; // Ajoute dx à la coordonnée x
    this->y += dy; // Ajoute dy à la coordonnée y
}

// Méthode pour afficher les coordonnées du point
void Point::afficher() const
{
    cout << "les coordonnées sont:" << endl;
    cout << "x=" << this->x << endl; // Affiche la coordonnée x
    cout << "y=" << this->y << endl; // Affiche la coordonnée y
}

// Méthode pour saisir les coordonnées du point
void Point::saisir()
{
    cout << "donner les coordonnées cartésiennes de x et y:" << endl;
    cout << "x:";
    cin >> x; // Saisir la coordonnée x
    cout << "y:";
    cin >> y; // Saisir la coordonnée y
}

// Méthode pour calculer la distance entre deux points
double Point::distance(const Point& p)
{
    return sqrt(pow((this->x - p.x), 2) + pow((this->y - p.y), 2)); // Retourne la distance entre les deux points
}

// Surcharge de l'opérateur == pour comparer deux points
bool Point::operator==(const Point& p)
{
    return (this->x == p.x && this->y == p.y); // Retourne true si les points sont identiques
}

// Méthode pour calculer le milieu entre deux points
Point Point::milieu(const Point& p)
{
    double mx = (this->x + p.x) / 2; // Coordonnée x du milieu
    double my = (this->y + p.y) / 2; // Coordonnée y du milieu
    return Point(mx, my); // Retourne un nouvel objet Point pour le milieu
}
