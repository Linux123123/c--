/*
Sukurta: 10:06 05 10 2021

skaitymas
*/

#include <bits/stdc++.h>
using namespace std;

int dieniuSkaitys(int pus, int pusPerDiena, int pusDaug)
{
    int dienos = 0;
    while (true)
    {
        dienos++;
        pus -= pusPerDiena;
        pusPerDiena += pusDaug;
        if (pus <= 0)
            break;
    }
    return dienos;
}

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, a, b;

    fr >> n >> a >> b;

    fo << dieniuSkaitys(n, a, b) << endl;

    fr.close();
    fo.close();
    return 0;
}