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
    int v1 = 5;
    int v2 = 2;


    cout << "veuillez entrer ci-dessous la valeur de dy :" << endl;
    cin >> dy;
    cout << "veuillez entrer ci-dessous la valeur de dx :" << endl;
    cin >> dx;
    cout << "veuillez entrer ci-dessous la valeur de L1 :" << endl;
    cin >> L1;
    bool valeurdentree = ((dy>0) && (dx>0) && (L1>0));
    
    /*
    int L3 = dy-L1;
    int L2exp = (dx * dx) + (L3 * L3);
    int L2 = sqrt(L2exp);
    cout << L2;
/*
    cout << "le temps employé par le robot est de " L1/v1 +
*/
}