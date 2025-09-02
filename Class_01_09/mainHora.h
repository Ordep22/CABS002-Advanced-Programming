#ifndef _MAINHORA_H
#define _MAINHORA_H

#include <stdio.h>
#include <iostream>

class Horario
{
    public:
        int min;
        int hora;
        int novaHora;
        int horarioInicial;
        int horarioFinal;

    private:
        int getHora();
        int getMin();
        bool setHora(int novaHora);
        bool setMin(int novoMin);
        int calculaIntevalo(int h, int intervalo);
};

#endif


