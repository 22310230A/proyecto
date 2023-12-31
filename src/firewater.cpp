#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <Firewater.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
using namespace std;


int main(int argc, char const *argv[])
{
    Ventana v;
    Dibujo* d1 = new Dibujo(0,0,"fireboy");
    Dibujo* d2 = new Dibujo(0,0,"watergirl");
    Firewater* fw = new Firewater();
    Controlador* control = new Controlador(d1, d2);


    list<Dibujo*> dibujos;
    dibujos.push_back(d1);
    dibujos.push_back(d2);
    dibujos.push_back(fw);

    list<Actualizable*> actualizables;
    actualizables.push_back(control);
    actualizables.push_back(fw);
    
    bool ejecucion = true;
    while (ejecucion)
    {
        v.Actualizar(actualizables);
        v.Dibujar(dibujos);
    } 

    return 0;
}