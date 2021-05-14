#include "auto.h"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>

using namespace std;

//Määritellään staattinen muuttuja
int Auto::tehdytAutot = 0;


Auto::Auto()
{
    srand( (unsigned)time(NULL) );
    tunniste  = rand();
    tehdytAutot++;
}

Auto::Auto(long tunniste)
{
    this->tunniste  = tunniste;
    tehdytAutot++;
}

void Auto::setNopeus(int n)
{
    this->nopeus = n;
}

void Auto::setTunniste(long t)
{
    this->tunniste = t;
}

int Auto::getNopeus()
{
    return nopeus;
}

long Auto::getTunniste()
{
    return  tunniste;
}

void Auto::kuvaile()
{
    cout << "Autossa on neljä rengasta" << endl;
}
