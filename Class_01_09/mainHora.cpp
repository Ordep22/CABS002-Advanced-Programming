#include "mainHora.h"
#include "iostream"

#define TRINTAMIN 30
#define TRESHORAS 180 
#define DOZEHORAS 720

int Horario::getHora()
{
    return horarioInicial;
}

int Horario::getMin()
{
    return min;
}

bool Horario::setHora(int novaHora)
{
    hora  = novaHora;
    return true;
}

bool Horario::setMin(int novoMin)
{
    min =  novoMin;
    return true;
}

int Horario::calculaIntevalo(int h, int intervalo)
{
    


}