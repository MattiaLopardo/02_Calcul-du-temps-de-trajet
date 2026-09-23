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

using namespace std;

int main () {
    int dy = 0;
    int dx = 0;
    int L1 = 0;
    int s1 = 5;
    int s2 = 2;


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

    bool valeurdentree = ((dy>0) && (dx>0) && (L1>0) && (s1>0) && (s2>0)); // vérification des valeurs en entrée

    if (valeurdentree==false) {
        cout << "les valeurs en entree doivent toutes etre plus grandes que 0" << endl;
        return EXIT_FAILURE;
    }

    if (valeurdentree==true) {

        int L3 = dy-L1;
        int L2 = sqrt((dx * dx) + (L3 * L3));
        int theure = L1/s1 + L2/s2;

        cout << "le robot mettra " << theure << " heures pour atteindre son objectif" << endl;
        return EXIT_SUCCESS;
    }

}