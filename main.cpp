#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hiba 1: Változónévben elgépelés, NELEMENTS helyett N_ELEMENTS
    int *b = new int[N_ELEMENTS];

    // Hiba 2: Hiányzó pontosvessző a sor végén
    std::cout << '1-100 ertekek duplazasa';

    // Hiba 3: Hiányzó pontosvessző a sor végén, és a for ciklus feltétele hiányzik
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    // Hiba 4: A második for ciklusnak helytelen a feltétele és hiányzik az inkrementáló utasítás
    for (int i = 0; i; i++)
    {
        // Hiba 5: Hiányzó pontosvessző a sor végén
        std::cout << "Ertek:";
    }

    // Hiba 6: Hiányzó pontosvessző a sor végén, és a ciklusnak 0-tól N_ELEMENTS - 1-ig kellene számolnia
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // Hiba 7: Hiányzó pontosvessző a sor végén
        atlag += b[i]
    }

    // Hiba 8: A 'atlag' változót nem inicializálták, és 0-ra kellene inicializálni
    int atlag;

    // Hiba 9: Hiányzó pontosvessző a sor végén
    atlag += b[i]

    // Hiba 10: Hiányzó pontosvessző a sor végén
    std::cout << "Atlag szamitasa: " << std::endl;

    atlag /= N_ELEMENTS;

    // Hiba 11: A szöveg a string-ben idézőjelek között kell legyen
    std::cout << "Atlag: " << atlag << std::endl;

    // Hiba 12: Hiányzó 'delete' utasítás a memória felszabadításához
    delete[] b;

    return 0;
}
