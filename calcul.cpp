#include <iostream>
using namespace std;
int somme(int a, int b) {
    return a + b;
}
int produit(int a, int b) {
    return a * b;
}
int division(int a, int b) {
    if (b == 0) {
        cout << "Erreur : division par zéro" << endl;
        return 0; // ou une autre valeur d'erreur
    }
    return a / b;
}
int soustraction(int a, int b) {
    return a - b;
}
int modulo(int a, int b) {
    if (b == 0) {
        cout << "Erreur : division par zéro" << endl;
        return 0; // ou une autre valeur d'erreur
    }
    return a % b;
}
int main(){
    int x,y;
    char op;
    cout << "Entrez le premier nombre : ";
    cin >> x;
    cout << "Entrez l'operation (+, -, *, /, %): ";
    cin >> op;
    cout << "Entrez le deuxieme nombre : ";
    cin >> y;
    if(op == '+') {
        cout << "Resultat : " << somme(x, y) << endl;
    } else if(op == '-') {
        cout << "Resultat : " << soustraction(x, y) << endl;
    } else if(op == '*') {
        cout << "Resultat : " << produit(x, y) << endl;
    } else if(op == '/') {
        cout << "Resultat : " << division(x, y) << endl;
    } else if(op == '%') {
        cout << "Resultat : " << modulo(x, y) << endl;
    } else {
        cout << "Operation non valide" << endl;
    }

}