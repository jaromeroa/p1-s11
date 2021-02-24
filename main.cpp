#include <QCoreApplication>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    source objSource;
    destination objDestination;

    //Aquí conecto la señal con el slot
    QObject::connect(&objSource, &source::mySignal, &objDestination, &destination::onMessage);

    //Con la conexión de arriba ya podemos emitir la señal
    objSource.test();

    return a.exec();
}
