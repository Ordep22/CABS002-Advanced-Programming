#include "MainBox.h"

void Box::setLargura(float lar)
{
    largura = lar;
    cout << "Largura setada -> " << largura << endl;
}

void Box::setAltura(float alt)
{
    altura = alt;
    cout << "Altura setada -> " << altura << endl;
}

void Box::setProfundidade(float prof)
{
    profundidade = prof;
    cout << "Profundidade setada -> " << profundidade << endl;
}

void Box::calculaAreaExt()
{
    areaExterna = 2 * (largura*altura + largura*profundidade + altura*profundidade);
    cout << "Area externa claculada -> " << areaExterna << endl;
}

void Box::claculaVolume()
{
    volume = altura*largura*profundidade;
    cout << "Valume calculado -> " << volume << endl;
}



