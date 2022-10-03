#ifndef TESTE_H
#define TESTE_H

#include <QObject>
#include <QDebug>

class Teste : public QObject
{
    Q_OBJECT
public:
    explicit Teste(QObject *parent = nullptr);

    //Normal Function
    int number();

signals:

public slots:
   void bark();

};

#endif // TESTE_H
