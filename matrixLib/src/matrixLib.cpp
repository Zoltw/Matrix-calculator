#include "../include/matrixLib.h"

int **addMatrix(int **m1, int **m2, int a, int b) {

    // Alokacja pamieci.
    int **matrix = new int *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new int[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

        // Dodawanie macierzy.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = m1[i][j] + m2[i][j];

    return matrix;
}
double **addMatrix(double **m1, double **m2, int a, int b) {

    // Alokacja pamieci.
    auto **matrix = new double *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new double[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0.0;

        // Dodawanie macierzy.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = m1[i][j] + m2[i][j];

    return matrix;
}

int **subtractMatrix(int **m1, int **m2, int a, int b) {

    // Alokacja pamieci.
    int **matrix = new int *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new int[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

        // Odejmowanie macierzy
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = m1[i][j] - m2[i][j];

    return matrix;
}
double **subtractMatrix(double **m1, double **m2, int a, int b) {

    // Alokacja pamieci.
    auto **matrix = new double *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new double[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

        // Odejmowanie macierzy.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = m1[i][j] - m2[i][j];

    return matrix;
}

int **multiplyMatrix(int **m1, int **m2, int a, int b, int b1) {

    // Alokacja pamieci.
    int **matrix = new int *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new int[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

        // Mnozenie macierzy.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b1; ++j)
            for (int k = 0; k < b; ++k)
                matrix[i][j] += m1[i][k] * m2[k][j];

    return matrix;
}
double **multiplyMatrix(double **m1, double **m2, int a, int b, int b1) {

    // Alokacja pamieci.
    auto **matrix = new double *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new double[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

        // Mnozenie macierzy.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b1; ++j)
            for (int k = 0; k < b; ++k)
                matrix[i][j] += m1[i][k] * m2[k][j];

    return matrix;
}

int **multiplyByScalar(int **m1, int a, int b, int s) {

    // Alokacja pamieci.
    int **matrix = new int *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new int[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

    // Mnozenie macierzy przez skalar.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = s * m1[i][j];

    return matrix;
}
double **multiplyByScalar(double **m1, int a, int b, double s) {

    // Alokacja pamieci.
    auto **matrix = new double *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new double[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = 0;

    // Mnozenie macierzy przez skalar.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = s * m1[i][j];

    return matrix;
}

int **transpozeMatrix(int **m1, int a, int b) {

    // Alokacja pamieci.
    int **matrix = new int *[b];
    for (int i = 0; i < b; ++i)
        matrix[i] = new int[a];

    for (int i = 0; i < b; ++i)
        for (int j = 0; j < a; ++j)
            matrix[i][j] = 0;

        // Transpozycja macierzy.
    for (int i = 0; i < b; ++i)
        for (int j = 0; j < a; ++j)
            matrix[i][j] = m1[j][i];

    return matrix;
}
double **transpozeMatrix(double **m1, int a, int b) {

    // Alokacja pamieci.
    auto **matrix = new double *[b];
    for (int i = 0; i < b; ++i)
        matrix[i] = new double[a];

    for (int i = 0; i < b; ++i)
        for (int j = 0; j < a; ++j)
            matrix[i][j] = 0;

    // Dokonujemy transpozycji
    for (int i = 0; i < b; ++i)
        for (int j = 0; j < a; ++j)
            matrix[j][i] = m1[i][j];

    return matrix;
}

int **powerMatrix(int **m1, int a, int b, unsigned int pow) {

    if (pow == 1) return m1;

    // Alokacja pamieci.
    int **matrix = new int *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new int[b];

    // Potegowanie macierzy.
    for (int w = 0; w < pow; ++w)
        for (int i = 0; i < a; ++i)
            for (int j = 0; j < b; ++j) {
                matrix[i][j] = 0;
                for (int k = 0; k < a; ++k)
                    matrix[i][j] += m1[i][k] * m1[k][j];
            }
    return matrix;
}
double **powerMatrix(double **m1, int a, int b, unsigned int pow) {

    if (pow == 1) return m1;

    // Alokacja pamieci.
    auto **matrix = new double *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new double[b];

    // Potegowanie macierzy.
    for (int w = 0; w < pow; ++w)
        for (int i = 0; i < a; ++i)
            for (int j = 0; j < b; ++j) {
                matrix[i][j] = 0;
                for (int k = 0; k < a; ++k)
                    matrix[i][j] += m1[i][k] * m1[k][j];
            }

    return matrix;
}

int determinantMatrix(int **m1, int a, int b) {
    int det = 0;

    // Sprawdzenie czy rozmiar macierzy jest rowny 1, 2 czy wiekszy.
    if (a == 1) return m1[0][0];
    else if (a == 2) return ((m1[0][0] * m1[1][1]) - (m1[1][0] * m1[0][1]));
    else {

        // Alokacja pamieci.
        int **matrix = new int *[a];
        for (int i = 0; i < a; ++i)
            matrix[i] = new int[b];

        // Obliczenie wyznacznika macierzy.
        for (int k = 0; k < a; ++k) {
            int subi = 0;
            for (int i = 1; i < a; ++i) {
                int subj = 0;
                for (int j = 0; j < a; ++j) {
                    if (j == k)
                        continue;
                    matrix[subi][subj] = m1[i][j];
                    subj++;
                }
                subi++;
            }
            det += pow(-1, k) * m1[0][k] * determinantMatrix(matrix, a - 1, b - 1);
        }
    }
    return det;
}
double determinantMatrix(double **m1, int a, int b) {
    double det = 0.0;

    // Sprawdzenie czy rozmiar macierzy jest rowny 1, 2 czy wiekszy.
    if (a == 1) return m1[0][0];
    else if (a == 2) return ((m1[0][0] * m1[1][1]) - (m1[1][0] * m1[0][1]));
    else {

        // Alokacja pamieci
        auto **matrix = new double *[a];
        for (int i = 0; i < a; ++i)
            matrix[i] = new double[b];

        // Obliczenie wyznacznika macierzy.
        for (int k = 0; k < a; ++k) {
            int subi = 0;
            for (int i = 1; i < a; ++i) {
                int subj = 0;
                for (int j = 0; j < a; ++j) {
                    if (j == k)
                        continue;
                    matrix[subi][subj] = m1[i][j];
                    subj++;
                }
                subi++;
            }
            det += pow(-1, k) * m1[0][k] * determinantMatrix(matrix, a - 1, b - 1);
        }
    }
    return det;
}

bool matrixIsDiagonal(int **m1, int a, int b) {

    // Sprawdzenie czy macierz jest diagonalna. Zwracamy 1 (true) lub 0 (false).
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            if ((i != j) && (m1[i][j] != 0))
                return false;
    return true;
}
bool matrixIsDiagonal(double **m1, int a, int b) {

    // Sprawdzenie czy macierz jest diagonalna. Zwracamy 1 (true) lub 0 (false).
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            if ((i != j) && (m1[i][j] != 0.0))
                return false;
    return true;
}

void swap(double &a, double &b) {
    double c = a;

    // Zamiana wartosci.
    a = b;
    b = c;
}
void swap(int &a, int &b) {
    int c = a;

    // Zamiana wartosci.
    a = b;
    b = c;
}

int *sortRow(int *tab, int n) {

    // Sortowanie babelkowo.
    for (int j = 0; j < n - 1; ++j)
        for (int i = 0; i < n - 1; ++i)
            if (tab[i] > tab[i + 1])
                swap(tab[i], tab[i + 1]);

    return tab;
}
double *sortRow(double *tab, int n) {

    // Sortowanie babelkowo.
    for (int j = 0; j < n - 1; ++j)
        for (int i = 0; i < n - 1; ++i)
            if (tab[i] > tab[i + 1])
                swap(tab[i], tab[i + 1]);

    return tab;
}

int **sortRowsInMatrix(int **m1, int a, int b) {

    // Alokacja pamieci.
    int **matrix = new int *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new int[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = m1[i][j];

        // Sortowanie wierszy w macierzy
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            for (int k = 0; k < b - j - 1; ++k)
                if (matrix[i][k] > matrix[i][k + 1])
                    swap(matrix[i][k], matrix[i][k + 1]);

    return matrix;
}
double **sortRowsInMatrix(double **m1, int a, int b) {

    // Alokacja pamieci.
    auto **matrix = new double *[a];
    for (int i = 0; i < a; ++i)
        matrix[i] = new double[b];

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            matrix[i][j] = m1[i][j];

        // Sortowanie wierszy w macierzy.
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            for (int k = 0; k < b - j - 1; ++k)
                if (matrix[i][k] > matrix[i][k + 1])
                    swap(matrix[i][k], matrix[i][k + 1]);

    return matrix;
}