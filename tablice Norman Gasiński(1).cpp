#include <iostream>
#include <math.h>
#include <cstdlib>  // std::srand(), std::rand()
#include <ctime>    // std::time()

using namespace std;

    void wczytaj(int a[], int b){   //funkcja do wczytywania tablic
    for (int i=0; i<b;i++ ){
        a[i]=rand()%501; //przypisanie losowej wartości do 500
        if (rand()%4==1){
            a[i]=a[i]*-1;
        }
}
}
    void wypisz(int c[],int d){
    for(int i=0;i<d;i++){
        cout << c[i];
        cout << "  ";
}
}

    void dodawanie(int z[],int y[], int m){
    int pomocnicza0[m]; //tablica pomocnicza


    for (int i=0;i<m;i++){
        pomocnicza0[i]=z[i]+y[i];        //obliczenie dodawania pojedynczych komórek
        cout << pomocnicza0[i] << endl;         //wypisanie pojedynczych komórek po dodaniu
}

}
    void odejmowanie(int z[],int y[], int m){
    int pomocnicza1[m];
    for (int i=0;i<m;i++){
        pomocnicza1[i]=z[i]-y[i];           //jedyna zmiana to znak ujemny
        cout << pomocnicza1[i] << endl;
}

}
    int mnozenie(int z[],int y[], int m){
    int pomocnicza2[m];
    int suma=0;
    for (int i=0;i<m;i++){
        pomocnicza2[i]=z[i]*y[i];       //przemnozenie komórek o tych samych wspólrzêdnycg
        suma+=pomocnicza2[i];           //dodanie wartosci wszystkich juz przemnozonych komórek
}
return suma; //zwrócenie wyniku
}
    double srednia(int z[],int m){

    double sum=0;
    for (int i=0; i<m;i++ ){
        sum+=z[i];                  //dodanie wszystkich elementów tablicy
}
        return sum/m; //podzielenie sumy wszystkich elementow przez ilosc

}
        void dlugosc(int z[], int y[], int m){
        double pomocnicza3[m];
        for (int i=0;i<m;i++){
            pomocnicza3[i]=abs((z[i]-y[i])); //wartosc bezwzgledna z odejmowania
            cout << pomocnicza3[i] << endl;

        }

}
int main()
{

    int n;
    char f;
    srand(time(nullptr));
    cout << "podaj wielkosc tablicy";
    cin >> n;
    int g[n];
    int l[n];
    wczytaj(g,n);
    wczytaj(l,n);
    cout << "pierwsza tablica ";
    wypisz(g,n);
    cout << endl;
    cout << "druga tablica   ";
    wypisz(l,n);
    printf("\n wybierz dzialanie \n + dla dodawania \n - dla odejmowania \n * dla mnozenia \n $ dla sredniej \n ^ dla dlugosci wektora \n ");
    cin >> f;
    switch(f){
case '+' :
    dodawanie(g,l,n);
    break;
case '-' :
    odejmowanie(g,l,n);
    break;
case '*':
    cout << mnozenie(g,l,n);
    break;
case '$' :
    cout <<"srednia pierwszej tablicy: "  << srednia(g,n) << endl;
    cout <<"srednia drugiej tablicy: " << srednia(l,n) << endl;
    break;
case '^':
    dlugosc(g,l,n);
    break;
default :
    cout << "error niepoprawny znak dzialania";
    }





    return 0;
}
