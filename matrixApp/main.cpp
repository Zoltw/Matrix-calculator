#include <matrixLib.h>

int x, y, yK;
string wybor_r;

int **alokacjaInt(int a, int b);
double **alokacjaDouble(int a, int b);

int **wczytajIntMatrix(int a, int b);
double **wczytajDoubleMatrix(int a, int b);

bool zabezpieczenieLitery(double a);

void show(int a, int b, int **tab);
void show(int a, int b, double **tab);

void deleteMemory(int **matrix, int a);
void deleteMemory(double **matrix, int a);

void help();


int main() {

    for (;;) // Petla nieskonczona.
    {
        cout << "Wybierz zadanie: " << endl;
        cout << "[0] Help\n\n";
        cout << "[1] Dodawanie dwoch macierzy\n";
        cout << "[2] Odejmowanie dwoch macierzy\n";
        cout << "[3] Mnozenie dwoch macierzy\n";
        cout << "[4] Mnozenie przez skalar\n";
        cout << "[5] Odwracanie macierzy\n";
        cout << "[6] Potegowanie macierzy\n";
        cout << "[7] Wyznacznik macierzy\n";
        cout << "[8] Sprawdz czy macierz jest diagonalna\n";
        cout << "[9] Zamiana dwoch wartosci miejscami\n";
        cout << "[10] Sortowanie tablicy babelkowo\n";
        cout << "[11] Sortowanie wszystkich wierszy w macierzy\n";
        cout << "[12] Wyjscie\n\n";

        // Wybieramy zadanie.
        int wybor;
        cin >> wybor;
        system("clear");
        switch (wybor) {
            case 0:

                // Wyswietlamy dokumentacje programu.
                help();
                break;
            case 1: {
                cout << "-----[addMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                cout << "Podaj ilosc wierszy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m2, **m3;
                    m1 = alokacjaInt(x, y);
                    m2 = alokacjaInt(x, y);
                    m3 = alokacjaInt(x, y);

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy pierwszej macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // Podajemy elementy drugiej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy drugiej macierzy:\n";
                    m2 = wczytajIntMatrix(x, y);

                    // Wykonujemy dodawanie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = addMatrix(m1, m2, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m2, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m2, **m3;
                    m1 = alokacjaDouble(x, y);
                    m2 = alokacjaDouble(x, y);
                    m3 = alokacjaDouble(x, y);

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy pierwszej macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Podajemy elementy drugiej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy drugiej macierzy:\n";
                    m2 = wczytajDoubleMatrix(x, y);

                    // Wykonujemy dodawanie macierzy funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = addMatrix(m1, m2, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m2, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 2: {
                cout << "-----[subtractMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                cout << "Podaj ilosc wierszy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m2, **m3;
                    m1 = alokacjaInt(x, y);
                    m2 = alokacjaInt(x, y);
                    m3 = alokacjaInt(x, y);

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy pierwszej macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // Podajemy elementy drugiej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy drugiej macierzy:\n";
                    m2 = wczytajIntMatrix(x, y);

                    // Wykonujemy odejmowanie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = subtractMatrix(m1, m2, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m2, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m2, **m3;
                    m1 = alokacjaDouble(x, y);
                    m2 = alokacjaDouble(x, y);
                    m3 = alokacjaDouble(x, y);

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy pierwszej macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Podajemy elementy drugiej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy drugiej macierzy:\n";
                    m2 = wczytajDoubleMatrix(x, y);

                    // Wykonujemy odejmowanie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = subtractMatrix(m1, m2, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m2, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 3: {
                cout << "-----[multiplyMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn pierwszej macierzy oraz ilosc kolumn drugiej macierzy.
                cout << "Podaj ilosc wierszy pierwszej macierzy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn pierwszej macierzy: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));
                cout << "Podaj ilosc kolumn drugiej macierzy: ";
                do
                    cin >> yK;
                while (!(zabezpieczenieLitery(yK)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m2, **m3;
                    m1 = alokacjaInt(x, y);
                    if (y < yK) {
                        m2 = alokacjaInt(x, yK);
                        m3 = alokacjaInt(x, yK);
                    } else {
                        m2 = alokacjaInt(x, y);
                        m3 = alokacjaInt(x, y);
                    }

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy pierwszej macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // Podajemy elementy drugiej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy drugiej macierzy:\n";
                    m2 = wczytajIntMatrix(y, yK);

                    // Wykonujemy mnozenie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = multiplyMatrix(m1, m2, x, y, yK);

                    // Wyswietlamy wynik na ekran.
                    show(x, yK, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m2, y);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m2, **m3;
                    m1 = alokacjaDouble(x, y);
                    if (y < yK) {
                        m2 = alokacjaDouble(x, yK);
                        m3 = alokacjaDouble(x, yK);
                    } else {
                        m2 = alokacjaDouble(x, y);
                        m3 = alokacjaDouble(x, y);
                    }

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy pierwszej macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Podajemy elementy drugiej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy drugiej macierzy:\n";
                    m2 = wczytajDoubleMatrix(y, yK);

                    // Wykonujemy mnozenie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = multiplyMatrix(m1, m2, x, y, yK);

                    // Wyswietlamy wynik na ekran.
                    show(x, yK, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m2, y);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 4: {
                cout << "-----[multiplyByScalar]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                cout << "Podaj ilosc wierszy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m3;
                    m1 = alokacjaInt(x, y);
                    m3 = alokacjaInt(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    int s;

                    // Wprowadzamy skalar przez ktory bedzie mnozona macierz.
                    cout << "Wprowadz skalar: ";
                    do
                        cin >> s;
                    while (!(zabezpieczenieLitery(s)));

                    // Wykonujemy mnozenie macierzy przez skalar, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = multiplyByScalar(m1, x, y, s);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m3;
                    m1 = alokacjaDouble(x, y);
                    m3 = alokacjaDouble(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    double s;

                    // Wprowadzamy skalar przez ktory bedzie mnozona macierz.
                    cout << "Wprowadz skalar: ";
                    do cin >> s;
                    while (!(zabezpieczenieLitery(s)));

                    // Wykonujemy mnozenie macierzy przez skalar, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = multiplyByScalar(m1, x, y, s);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 5: {
                cout << "-----[transpozeMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                cout << "Podaj ilosc wierszy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m3;
                    m1 = alokacjaInt(x, y);
                    m3 = alokacjaInt(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // Wykonujemy odwracanie (transpozycje) macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = transpozeMatrix(m1, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m3;
                    m1 = alokacjaDouble(x, y);
                    m3 = alokacjaDouble(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Wykonujemy odwracanie (transpozycje) macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = transpozeMatrix(m1, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 6: {
                cout << "-----[powerMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                cout << "Podaj ilosc wierszy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));

                unsigned int pow;

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m3;
                    m1 = alokacjaInt(x, y);
                    m3 = alokacjaInt(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // Podajemy potege.
                    cout << "Wprowadz potege: ";
                    do
                    cin >> pow;
                    while (!(zabezpieczenieLitery(pow)));

                    // Wykonujemy potegowanie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = powerMatrix(m1, x, y, pow);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m3;
                    m1 = alokacjaDouble(x, y);
                    m3 = alokacjaDouble(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Wprowadzamy potege.
                    cout << "Wprowadz potege: ";
                    do
                        cin >> pow;
                    while (!(zabezpieczenieLitery(pow)));

                    // Wykonujemy potegowanie macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    m3 = powerMatrix(m1, x, y, pow);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 7: {
                cout << "-----[determinantMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                do {
                    cout << "Podaj ilosc wierszy: ";
                    do
                        cin >> x;
                    while (!(zabezpieczenieLitery(x)));
                    cout << "Podaj ilosc kolumn: ";
                    do
                        cin >> y;
                    while (!(zabezpieczenieLitery(y)));
                } while ((x != y) && cout << "Wprowadz macierz kwadratowa!\n");

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, det;
                    m1 = alokacjaInt(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // // Wykonujemy liczenie wyznacznika macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    det = determinantMatrix(m1, x, y);

                    // Wyswietlamy wynik na ekran.
                    cout << "Wyznacznik macierzy wynosi: " << det << endl;

                    deleteMemory(m1, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, det;
                    m1 = alokacjaDouble(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Wykonujemy liczenie wyznacznika macierzy, funkcja zawartą w bibliotece <matrixLib.h>.
                    det = determinantMatrix(m1, x, y);

                    // Wyswietlamy wynik na ekran.
                    cout << "Wyznacznik macierzy wynosi: " << det << endl;

                    deleteMemory(m1, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 8: {
                cout << "-----[matrixIsDiagonal]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                do {
                    cout << "Podaj ilosc wierszy: ";
                    do
                        cin >> x;
                    while (!(zabezpieczenieLitery(x)));
                    cout << "Podaj ilosc kolumn: ";
                    do
                        cin >> y;
                    while (!(zabezpieczenieLitery(y)));
                } while ((x != y) && cout << "Wprowadz macierz kwadratowa!\n");

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1;
                    m1 = alokacjaInt(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    cout << "Czy macierz jest diagonalna? ";

                    // Sprawdzamy czy macierz jest diagonalna funkcja logiczna bool zawarta w bibliotece <matrixlib.h>.
                    if (matrixIsDiagonal(m1, x, y))
                        cout << "Tak\n";
                    else
                        cout << "Nie\n";

                    deleteMemory(m1, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1;
                    m1 = alokacjaDouble(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    cout << "Czy macierz jest diagonalna? ";

                    // Sprawdzamy czy macierz jest diagonalna funkcja logiczna bool zawarta w bibliotece <matrix.h>.
                    if (matrixIsDiagonal(m1, x, y))
                        cout << "Tak\n";
                    else
                        cout << "Nie\n";

                    deleteMemory(m1, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 9: {
                cout << "-----[swap]-----\n\n";

                // Wybieramy rodzaj danych ktore chcemy wprowadzic.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {

                    // Podajemy liczbe x i y ktore chcemy zamienic miejscami.
                    cout << "Podaj pierwsza liczbe x: ";
                    do
                        cin >> x;
                    while (!(zabezpieczenieLitery(x)));
                    cout << "Podaj druga liczbe y: ";
                    do
                        cin >> y;
                    while (!(zabezpieczenieLitery(y)));

                    // Wykonujemy zamiane liczb, funkcja zawartą w bibliotece <matrixLib>.
                    swap(x, y);

                    // Wyswietlamy wynik na ekran.
                    cout << "Po zamianie\nLiczba x: " << x << "\nLiczba y: " << y << endl << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double x, y;

                    // Podajemy liczbe x i y ktore chcemy zamienic miejscami.
                    cout << "Podaj pierwsza liczbe x: ";
                    do
                        cin >> x;
                    while (!(zabezpieczenieLitery(x)));
                    cout << "Podaj druga liczbe y: ";
                    do
                        cin >> y;
                    while (!(zabezpieczenieLitery(y)));

                    // Wykonujemy zamiane liczb, funkcja zawartą w bibliotece <matrixLib>.
                    swap(x, y);

                    // Wyswietlamy wynik na ekran.
                    cout << "Po zamianie\nLiczba x: " << x << "\nLiczba y: " << y << endl << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 10: {
                int n;
                cout << "-----[sortRow]-----\n\n";

                // Podajemy wielkosc tablicy do posortowania babelkowo.
                cout << "Wprowadz wielkosc tablicy: ";
                do
                    cin >> n;
                while (!(zabezpieczenieLitery(n)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do tablicy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int *tab = new int;

                    // Wprowadzamy tablice ktora chcemy posortowac.
                    cout << "Wprowadz tablice: ";
                    for (int i = 0; i < n; ++i) {
                        do
                            cin >> tab[i];
                        while (!(zabezpieczenieLitery(*tab)));
                    }

                    // Wykonujemy sortowanie babelkowe tablicy, funkcja zawartą w bibliotece <matrixLib>.
                    int *sort = sortRow(tab, n);

                    for (int i = 0; i < n; ++i)

                        // Wyswietlamy posortowana tablice na ekran.
                        cout << sort[i] << "\t";
                } else if (wybor_r == "double" || wybor_r == "d") {
                    auto *tab = new double;

                    // Wprowadzamy tablice ktora chcemy posortowac.
                    cout << "Wprowadz tablice: ";
                    for (int i = 0; i < n; ++i) {
                        do
                            cin >> tab[i];
                        while (!(zabezpieczenieLitery(*tab)));
                    }

                    // Wykonujemy sortowanie babelkowe tablicy, funkcja zawartą w bibliotece <matrixLib>.
                    double *sort = sortRow(tab, n);

                    for (int i = 0; i < n; ++i)

                        // Wyswietlamy pososrtowana tablice na ekran.
                        cout << tab[i] << "\t";
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
                cout << endl;
            }
                break;
            case 11: {
                cout << "-----[sortRowsInMatrix]-----\n\n";

                // Podajemy ilosc wierszy i kolumn macierzy.
                cout << "Podaj ilosc wierszy: ";
                do
                    cin >> x;
                while (!(zabezpieczenieLitery(x)));
                cout << "Podaj ilosc kolumn: ";
                do
                    cin >> y;
                while (!(zabezpieczenieLitery(y)));

                // Wybieramy rodzaj danych ktore chcemy wprowadzic do macierzy.
                cout << "Podaj rodzaj danych: [int/double] ";
                cin >> wybor_r;
                if (wybor_r == "int" || wybor_r == "i") {
                    int **m1, **m3;
                    m1 = alokacjaInt(x, y);
                    m3 = alokacjaInt(x, y);

                    // Podajemy elementy macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajIntMatrix(x, y);

                    // Wykonujemy sortowanie wierszy macierzy, funkcja zawartą w bibliotece <matrixLib>.
                    m3 = sortRowsInMatrix(m1, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else if (wybor_r == "double" || wybor_r == "d") {
                    double **m1, **m3;
                    m1 = alokacjaDouble(x, y);
                    m3 = alokacjaDouble(x, y);

                    // Podajemy elementy pierwszej macierzy m[1][1], m[1][2] itp. (wierszami).
                    cout << "Podaj elementy macierzy:\n";
                    m1 = wczytajDoubleMatrix(x, y);

                    // Wykonujemy sortowanie wierszy, funkcja zawartą w bibliotece <matrixLib>.
                    m3 = sortRowsInMatrix(m1, x, y);

                    // Wyswietlamy wynik na ekran.
                    show(x, y, m3);

                    deleteMemory(m1, x);
                    deleteMemory(m3, x);

                    cout << endl;
                } else {
                    cout << "Blad! Wpisz int lub double!\n\n";
                }
            }
                break;
            case 12: {

                // Wychodzmy z programu.
                exit(0);
            }
            default: {
                cout << "Wybierz numer od 1-13\n";

                // Wyswietlenie dokumentacji projektu.
                help();
            }
        }
    }
}


int **alokacjaInt(int a, int b) {
    int **matrix = new int *[a];

    for (int i = 0; i < a; i++) { // (i < y)
        matrix[i] = new int[b];
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            matrix[i][j] = 0;
    }
    return matrix;
}
double **alokacjaDouble(int a, int b) {
    auto **matrix = new double *[a];

    for (int i = 0; i < a; i++) { // (i < y)
        matrix[i] = new double[b];
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            matrix[i][j] = 0;
    }
    return matrix;
}

int **wczytajIntMatrix(int a, int b) {
    int **matrix;
    matrix = alokacjaInt(a, b);

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++) {
            cout << "[" << i + 1 << "] [" << j + 1 << "]: ";
            do
                cin >> matrix[i][j];
            while (!(zabezpieczenieLitery(**matrix)));
        }
    return matrix;
}
double **wczytajDoubleMatrix(int a, int b) {
    double **matrix;
    matrix = alokacjaDouble(a, b);

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++) {
            cout << "[" << i + 1 << "] [" << j + 1 << "]: ";
            do
                cin >> matrix[i][j];
            while (!(zabezpieczenieLitery(**matrix)));
        }
    return matrix;
}

bool zabezpieczenieLitery(double a) {
    while (cin.fail()) {
        cout << "Musi to byc liczba! Wprowadz ja ponownie: " << endl;
        cin.clear();
        cin.ignore(256, '\n');
        return false;
    }
    return true;
}

void show(int a, int b, int **tab) {
    for (int i = 0; i < a; i++) {
        cout << endl;
        for (int j = 0; j < b; j++)
            cout << tab[i][j] << "\t";
    }
}
void show(int a, int b, double **tab) {
    for (int i = 0; i < a; i++) {
        cout << endl;
        for (int j = 0; j < b; j++)
            cout << tab[i][j] << "\t";
    }
}

void deleteMemory(int **matrix, int a) {
    for (int i = 0; i < a; ++i)
        delete[] matrix[i];
    delete[] matrix;

}
void deleteMemory(double **matrix, int a) {
    for (int i = 0; i < a; ++i)
        delete[] matrix[i];
    delete[] matrix;
}

void help() {
    cout << "===========DOKUMENTACJA==========\n\n";
    cout << "[1] ~addMatrix~\nFunkcja sumuje dwie macierze. Macierze musza byc wprowadzone wierszami.\n[m1] Macierz pierwsza [wiersz][kolumna]\n";
    cout << "[m2] Macierz druga [wiersz][kolumna]\n[x] Ilosc wierszy\n[y] Ilosc kolumn\n\n";
    cout << "[2] ~subtractMatrix~\nFunkcja odejmuje dwie macierze. Macierze musza byc wprowadzone wierszami.\n[m1] Macierz pierwsza [wiersz][kolumna]\n";
    cout << "[m2] Macierz druga [wiersz][kolumna]\n[x] Ilosc wierszy\n[y] Ilosc kolumn\n\n";
    cout << "[3] ~multiplyMatrix~\nFunkcja mnozy dwie macierze. Macierze musza byc wprowadzone wierszami.\n[m1] Macierz pierwsza [wiersz][kolumna]\n";
    cout << "[m2] Macierz druga [wiersz][kolumna]\n[x] Ilosc wierszy pierwszej macierzy\n[y] Ilosc kolumn pierwszej macierzy\n[yK] Ilosc kolumn drugiej macierzy\n\n";
    cout << "[4] ~multiplyByScalar~\nFunkcja mnozy macierz przez skalar. Macierz musi byc wprowadzona wierszami.\n[m1] Macierz [wiersz][kolumna]\n";
    cout << "[x] Ilosc wierszy\n[y] Ilosc kolumn\n[s] Skalar\n\n";
    cout << "[5] ~transpozeMatrix~\nFunkcja odwraca macierz (dokonywana jest transpozycja). Macierz musi byc wprowadzona wierszami.\n[m1] Macierz [wiersz][kolumna]\n";
    cout << "[x] Ilosc wierszy\n[y] Ilosc kolumn\n\n";
    cout << "[6] ~powerMatrix~\nFunkcja podnosi macierz do potegi. Macierz musi byc wprowadzona wierszami.\n[m1] Macierz [wiersz][kolumna]\n";
    cout << "[x] Ilosc wierszy\n[y] Ilosc kolumn\n[pow] Potega\n\n";
    cout << "[7] ~determinantMatrix~\nFunkcja oblicza wyznacznik macierzy. Macierz musi byc wprowadzona wierszami.\n[m1] Macierz [wiersz][kolumna]\n";
    cout << "[x] Ilosc wierszy\n[y] Ilosc kolumn\n\n";
    cout << "[8] ~matrixIsDiagonal~\nFunkcja sprawdza czy podana macierz jest diagonalna. Macierz musi byc wprowadzona wierszami.\n[m1] Macierz [wiersz][kolumna]\n";
    cout << "[x] Ilosc wierszy\n[y] Ilosc kolumn\n\n";
    cout << "[9] ~swap~\nProcedura zamienia miejscami dwie liczby.\n";
    cout << "[x] Liczba a\n[y] Liczba b\n\n";
    cout << "[10] ~sortRow~\nFunkcja sortuje tablice jednowymiarowa babelkowo.\n[tab] Tablica\n";
    cout << "[n] Wielkosc tablicy\n\n";
    cout << "[11] ~sortRowsInMatrix~\nFunkcja sortuje kazdy wiersz w macierzy. Macierz musi byc wprowadzona wierszami.\n[m1] Macierz [wiersz][kolumna]\n";
    cout << "[x] Ilosc wierszy\n[y] Ilosc kolumn\n\n";
    cout << "Press enter to exit doc..\n";
    system("read");
}