#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H

#include <iostream>
#include <cmath>

using namespace std;

/**
 * Funkcja typu Int sumuje dwie macierze. Macierze musza byc wprowadzone wierszami.
 *
 * @param m1 Macierz pierwsza [wiersz][kolumna]
 * @param m2 Macierz druga [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Suma dwoch macierzy
 */
int **addMatrix(int **m1, int **m2, int a, int b);
/**
 * Funkcja typu Double sumuje dwie macierze. Macierze musza byc wprowadzone wierszami.
 *
 * @param m1 Macierz pierwsza [wiersz][kolumna]
 * @param m2 Macierz druga [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Suma dwoch macierzy
 */
double **addMatrix(double **m1, double **m2, int a, int b);

/**
 * Funkcja typu Int odejmuje dwie macierze. Macierze musza byc wprowadzone wierszami.
 *
 * @param m1 Macierz pierwsza [wiersz][kolumna]
 * @param m2 Macierz druga [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Roznica dwoch macierzy
 */
int **subtractMatrix(int **m1, int **m2, int a, int b);
/**
 * Funkcja typu Double odejmuje dwie macierze. Macierze musza byc wprowadzone wierszami.
 *
 * @param m1 Macierz pierwsza [wiersz][kolumna]
 * @param m2 Macierz druga [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Roznica dwoch macierzy
 */
double **subtractMatrix(double **m1, double **m2, int a, int b);

/**
 * Funkcja typu Int mnozy dwie macierze. Macierze musza byc wprowadzone wierszami.
 *
 * @param m1 Macierz pierwsza [wiersz][kolumna]
 * @param m2 Macierz druga [wiersz][kolumna]
 * @param a Ilosc wierszy pierwszej macierzy
 * @param b Ilosc kolumn pierwszej macierzy
 * @param b1 Ilosc kolumn drugiej macierzy
 * @return Iloczyn dwoch macierzy
 */
int **multiplyMatrix(int **m1, int **m2, int a, int b, int b1);
/**
 * Funkcja typu Double mnozy dwie macierze. Macierze musza byc wprowadzone wierszami.
 *
 * @param m1 Macierz pierwsza [wiersz][kolumna]
 * @param m2 Macierz druga [wiersz][kolumna]
 * @param a Ilosc wierszy pierwszej macierzy
 * @param b Ilosc kolumn pierwszej macierzy
 * @param b1 Ilosc kolumn drugiej macierzy
 * @return Iloczyn dwoch macierzy
 */
double **multiplyMatrix(double **m1, double **m2, int a, int b, int b1);

/**
 * Funkcja typu Int mnozy macierz przez skalar. Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @param s Skalar
 * @return Macierz pomnozona przez skalar
 */
int **multiplyByScalar(int **m1, int a, int b, int s);
/**
 * Funkcja typu Double mnozy macierz przez skalar. Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @param s Skalar
 * @return Macierz pomnozona przez skalar
 */
double **multiplyByScalar(double **m1, int a, int b, double s);

/**
 * Funkcja typu Int odwraca macierz (dokonywana jest transpozycja). Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Odwrocona macierz (transponowana)
 */
int **transpozeMatrix(int **m1, int a, int b);
/**
 * Funkcja typu Double odwraca macierz (dokonywana jest transpozycja). Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Odwrocona macierz (transponowana)
 */
double **transpozeMatrix(double **m1, int a, int b);

/**
 * Funkcja typu Int podnosi macierz do potegi. Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @param pow Potega
 * @return Macierz podniesiona do potegi
 */
int **powerMatrix(int **m1, int a, int b, unsigned int pow);
/**
 * Funkcja typu Double podnosi macierz do potegi. Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @param pow Potega
 * @return Macierz podniesiona do potegi
 */
double **powerMatrix(double **m1, int a, int b, unsigned int pow);

/**
 * Funkcja typu Int oblicza rekurencyjnie wyznacznik macierzy. Macierz musi być wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Wyznacznik macierzy
 */
int determinantMatrix(int **m1, int a, int b);
/**
 * Funkcja typu Double oblicza rekurencyjnie wyznacznik macierzy. Macierz musi być wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Wyznacznik macierzy
 */
double determinantMatrix(double **m1, int a, int b);

/**
 *  Funkcja typu Bool (macierz typu int) sprawdza czy podana macierz jest diagonalna. Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return 1 lub 0 (True or false)
 */
bool matrixIsDiagonal(int **m1, int a, int b);
/**
 *  Funkcja typu Bool (macierz typu double) sprawdza czy podana macierz jest diagonalna. Macierz musi byc wprowadzona wierszami.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return 1 or 0 (True or false)
 */
bool matrixIsDiagonal(double **m1, int a, int b);

/**
 * Procedura zamieniajaca miejscami dwie liczby calkowite.
 *
 * @param a Liczba calkowita
 * @param b Liczba calkowita
 */
void swap(int &a, int &b);
/**
 * Procedura zamieniajaca miejscami dwie liczby rzezczywiste.
 *
 * @param a Liczba rzeczywista
 * @param b Liczba rzeczywista
 */
void swap(double &a, double &b);

/**
 * Funkcja typu Int sortuje babelkowo tablice jednowymiarowa.
 *
 * @param tab Tablica jednowymiarowa
 * @param n Wielkosc tablicy jednowymiarowej
 * @return Posortowana rosnaco tablica jednowymiarowa
 */
int *sortRow(int *tab, int n);
/**
 * Funkcja typu Double sortuje babelkowo tablice jednowymiarowa.
 *
 * @param tab Tablica jednowymiarowa
 * @param n Wielkosc tablicy jednowymiarowej
 * @return Posortowana rosnaco tablica jednowymiarowa
 */
double *sortRow(double *tab, int n);

/**
 * Funkcja typu Int sortuje kazdy wiersz w macierzy rosnaco.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Macierz w ktorej wszystkie wiersze sa posortowane rosnaco
 */
int **sortRowsInMatrix(int **m1, int a, int b);
/**
 * Funkcja typu Double sortuje kazdy wiersz w macierzy rosnaco.
 *
 * @param m1 Macierz [wiersz][kolumna]
 * @param a Ilosc wierszy
 * @param b Ilosc kolumn
 * @return Macierz w ktorej wszystkie wiersze sa posortowane rosnaco
 */
double **sortRowsInMatrix(double **m1, int a, int b);

#endif //JIPP2_MATRIXLIB_H