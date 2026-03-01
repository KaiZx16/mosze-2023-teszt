#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];            //Rossz a tömbre való hivatkozás 
    std::cout << "1-100 ertekek duplazasa" << std::endl;  //Hiányzó pontosvessző
    for (int i = 0; i < N_ELEMENTS; i++)                        // A for ciklus hiányos, nincs megadva meddig fusson és mekkora lépésközzel növekedjen, tehát végtelen ciklus van
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)                 //Nincs megadva, meddig fusson a ciklus, és az i++ után hiányzik a pontosvessző
    {
        std::cout << "Ertek:" << b[i] << std::endl;               //Hiányzó pontosvessző, nincs kiírva az érték után az adott szám
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0;                              //A változónak nincs kezdőértéke, illetve double használata kell, mert lehet nem egész számot fogunk kapni
    for (int i = 0; i < N_ELEMENTS; i++)    //Vessző helyett pontos vessző, és a végéről is hiányzik a pontosvessző
    {
        atlag += b[i];                       //Hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    return 0;
    
}
