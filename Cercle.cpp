#include "Cercle.h"
#include <cmath>
#include "Point.h"
#include <iostream>
using namespace std;

// D�finition de la constante pi
const double Cercle::pi = 3.14;

// Constructeur de la classe Cercle
Cercle::Cercle(double r, Point p) : rayon(r), centre(p)
{}

// Destructeur de la classe Cercle
Cercle::~Cercle()
{
    cout << "appel destro " << endl; 
}

// M�thode pour afficher les attributs du cercle
void Cercle::afficher() const
{
    cout << "rayon :" << this->rayon << endl; // Affiche le rayon

    cout << "centre :" << endl; // Indique que les informations du centre vont suivre
    this->centre.afficher(); // Appelle la m�thode afficher() de la classe Point pour le centre
}

// M�thode pour mettre � jour le rayon du cercle
void Cercle::update(double dr)
{
    this->rayon += dr; // Modifie le rayon en ajoutant dr
}

// M�thode pour translater le cercle
void Cercle::translater(double dx, double dy)
{
    this->centre.deplace(dx, dy); // D�place le centre du cercle de dx et dy
}

// Surcharge de l'op�rateur == pour comparer deux cercles
bool Cercle::operator==(const Cercle& c)
{
    return this->centre == c.centre && this->rayon == c.rayon;//retourne true ou false
}

// M�thode pour calculer la surface du cercle
double Cercle::surface() const
{
    return pow(this->rayon, 2) * pi; // Calcule la surface avec la formule pi * r^2
}

// M�thode pour calculer le p�rim�tre du cercle
double Cercle::primetre() const
{
    return 2 * pi * this->rayon; // Calcule le p�rim�tre avec la formule 2 * pi * r
}
