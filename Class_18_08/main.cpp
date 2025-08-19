#include "MainBox.h"

int main()
{
    Box boxOne;
    Box boxTwo;

    boxOne.setAltura(10);
    boxOne.setLargura(20);
    boxOne.setProfundidade(30);

    boxOne.calculaAreaExt();
    boxOne.claculaVolume();
}