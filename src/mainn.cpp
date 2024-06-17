#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <thread> //hilos de procesos
#include <fstream> //flujos de archivos
#include <string> //control de cadena 
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

Dibujo carretera("./assets/images/pelotra.txt");
Dibujo carro("./assets/images/porteria.txt");

int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create
    (
        Dimension::Full(),
        Dimension::Full()
    );

    int x = 0;
    while (true)
    {
        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        pantalla.PixelAt(x,5).character = " O ";
        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }
    
    return 0;
}