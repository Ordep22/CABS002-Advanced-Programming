#include <iostream>

using namespace std;

class Box
{
    float largura;
    float altura;
    float profundidade;
    float areaExterna;
    float volume;

public:

    void setLargura(float lar);
    void setAltura(float alt);
    void setProfundidade(float prof);
    void calculaAreaExt();
    void claculaVolume();
};


