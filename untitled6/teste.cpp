#include "teste.h"

Teste::Teste(QObject *parent) : QObject{parent}
{

}

int Teste::number()
{
    //return a number
    qInfo() << "Called number()";
    return 42;
}

void Teste::bark()
{
    qInfo() << "Bark Bark";
}
