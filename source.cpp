#include "source.h"

source::source(QObject *parent) : QObject(parent)
{

}

void source::test()
{
    emit mySignal("Esta es la señal");
}
