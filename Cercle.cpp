#include "Cercle.h"
#include <cmath>
#include "Point.h"
#include <iostream>
using namespace std;

// Définition de la constante pi
const double Cercle::pi = 3.14;

// Constructeur de la classe Cercle
Cercle::Cercle(double r, Point p) : rayon(r), centre(p)
{}

// Destructeur de la classe Cercle
Cercle::~Cercle()
{
    cout << "appel destro " << endl; 
}

// Méthode pour afficher les attributs du cercle
void Cercle::afficher() const
{
    cout << "rayon :" << this->rayon << endl; // Affiche le rayon

    cout << "centre :" << endl; // Indique que les informations du centre vont suivre
    this->centre.afficher(); // Appelle la méthode afficher() de la classe Point pour le centre
}

// Méthode pour mettre à jour le rayon du cercle
void Cercle::update(double dr)
{
    this->rayon += dr; // Modifie le rayon en ajoutant dr
}

// Méthode pour translater le cercle
void Cercle::translater(double dx, double dy)
{
    this->centre.deplace(dx, dy); // Déplace le centre du cercle de dx et dy
}

// Surcharge de l'opérateur == pour comparer deux cercles
bool Cercle::operator==(const Cercle& c)
{
    return this->centre == c.centre && this->rayon == c.rayon;//retourne true ou false
}

// Méthode pour calculer la surface du cercle
double Cercle::surface() const
{
    return pow(this->rayon, 2) * pi; // Calcule la surface avec la formule pi * r^2
}

// Méthode pour calculer le périmètre du cercle
double Cercle::primetre() const
{
    return 2 * pi * this->rayon; // Calcule le périmètre avec la formule 2 * pi * r
}
