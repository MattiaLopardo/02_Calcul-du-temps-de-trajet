/* --------------------------- 
Laboratoire : 02
Auteur(s) : 
Date : 
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main () {
    double dy = 0.;
    double dx = 0.;
    double L1 = 0.;
    double s1 = 0.;
    double s2 = 0.;

    SetConsoleOutputCP(CP_UTF8); // Permet d'afficher des lettres accentuées

    cout << "veuillez entrer ci-dessous en km la longueur total de la route (variable = dy) :" << endl;
    cin >> dy;
    cout << "veuillez entrer ci-dessous en km la longueur du segment sur terre (variable = dx) :" << endl;
    cin >> dx;
    cout << "veuillez entrer ci-dessous en km la longueur de la route parcouru par le robot (variable = L1) :" << endl;
    cin >> L1;
    cout << "veuillez entrer ci-dessous en km/h la vitesse du robot sur route (variable = s1) :" << endl;
    cin >> s1;
    cout << "veuillez en fin entrer ci-dessous en km/h la vitesse du robot sur terre (variable = s2) :" << endl;
    cin >> s2;

    bool valeurdentree = ((dy>0) && (dx>0) && (L1>0) && (s1>0) && (s2>0)); // vérification des valeurs en entrée qui ne doivent pas être nulle

    if (valeurdentree==false) { //Si une des valeurs en entrée est nulle, cette condition arrête le programme
        cout << "les valeurs en entrée doivent toutes être plus grandes que 0" << endl;
        return EXIT_FAILURE;
    }

    if (valeurdentree==true) { //Si aucune valeurs en entrée n'est nulle, cette condition s'applique

        double L3 = dy-L1; //Défini la longueur d'un côté du triangle rectangle
        double L2 = sqrt((dx * dx) + (L3 * L3)); //Permet de calculer l'hypotenuse
        double theure = L1/s1 + L2/s2;//Permet de calculer le temps total en heures
        //double = round(theure);

        cout << "le robot mettra " << theure << " heures pour atteindre son objectif" << endl;
        return EXIT_SUCCESS;
    }

}