#include <iostream>
#include <cmath>
#include <locale> 
#include <string>
#include "Koren_3_stepeni.h"
#include "Min_dlin_mas.h"
#include "Zodiak.h"
using namespace std;
int main()
{
    
    cout << "Vvedite chislo:\n";
    int Chislo, Stepen = 3;          
    double Result = 0;               
    cin >> Chislo;                   
    Result = VichWithDiff(Chislo, Stepen);          
    cout << "\nresult = " << Result;                
    return 0;
    


    //2 
   /*
    int n;
    cout << "n=";
    cin >> n;

    double* a = new double[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    cout << "\nmin=" << Min(a, n) << "\n";

    delete[]a;
    system("pause");
    return 0;

  */


    //3
   /*
    int d, m;
    double zodiak = 0;

    cout << "Enter Day: ";
    cin >> d;
    cout << "Enter Month: ";
    cin >> m;

    if (Zodiakk(d, m, zodiak) == 1)
        cout << "Aries";
    else if (Zodiakk(d, m, zodiak) == 2)
        cout << "Taurus";
    else if (Zodiakk(d, m, zodiak) == 3)
        cout << "Gemini";
    else if (Zodiakk(d, m, zodiak) == 4)
        cout << "Cancer";
    else if (Zodiakk(d, m, zodiak) == 5)
        cout << "Leo";
    else if (Zodiakk(d, m, zodiak) == 6)
        cout << "Vergo";
    else if (Zodiakk(d, m, zodiak) == 7)
        cout << "Libra";
    else if (Zodiakk(d, m, zodiak) == 8)
        cout << "Scorpio";
    else if (Zodiakk(d, m, zodiak) == 9)
        cout << "Sagittarius";
    else if (Zodiakk(d, m, zodiak) == 10)
        cout << "Capticorn";
    else if (Zodiakk(d, m, zodiak) == 11)
        cout << "Aquarius";
    else if (Zodiakk(d, m, zodiak) == 12)
        cout << "Pisces";
    else {
        cout << "ERROR!";
    }

    return 0;
    */
}
