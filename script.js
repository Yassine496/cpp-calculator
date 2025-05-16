function somme(a, b) {
    return a + b;
}

function produit(a, b) {
    return a * b;
}

function division(a, b) {
    if (b === 0) {
        return "Erreur : division par zéro";
    }
    return a / b;
}

function soustraction(a, b) {
    return a - b;
}

function modulo(a, b) {
    if (b === 0) {
        return "Erreur : division par zéro";
    }
    return a % b;
}

function calculer() {
    let x = parseFloat(document.getElementById("x").value);
    let y = parseFloat(document.getElementById("y").value);
    let op = document.getElementById("op").value;
    let resultat;

    if (isNaN(x) || isNaN(y)) {
        resultat = "Veuillez entrer deux nombres valides.";
    } else {
        if (op === '+') {
            resultat = somme(x, y);
        } else if (op === '-') {
            resultat = soustraction(x, y);
        } else if (op === '*') {
            resultat = produit(x, y);
        } else if (op === '/') {
            resultat = division(x, y);
        } else if (op === '%') {
            resultat = modulo(x, y);
        } else {
            resultat = "Opération non valide.";
        }
    }

    document.getElementById("resultat").innerText = "Résultat : " + resultat;
}