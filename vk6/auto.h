#ifndef AUTO_H
#define AUTO_H


class Auto
{
public:
    Auto();
     Auto(long tunniste);

    void setNopeus(int n);
    void setTunniste(long t);

    int getNopeus();
    long getTunniste();

    //Staattisen muuttujat:
public:
    static int tehdytAutot;
    static void kuvaile();
private:
    int nopeus;
    long tunniste;

};

#endif // AUTO_H