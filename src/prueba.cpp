#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>
#include <cmath>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    int frame = 0;
   std::string reseet_position;

    while (true)
    {
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

        auto can = Canvas(100,100);
        can.DrawPointCircle(50,50,30);
        int ceja = std::sin(frame*0.1)*3;
        can.DrawPointLine(35,30 - ceja,45,30-ceja);
        can.DrawPointLine(55,30 - ceja,65,30-ceja);
        can.DrawPointCircle(40,40,5);
        can.DrawPointCircle(60,40,5);
        can.DrawPointCircle(40,40,2);
        can.DrawPointCircle(60,40,2);
        int boca = 65 + std::sin(frame*0.1)*3;
        can.DrawPointLine(35,boca,40,boca+2);
        can.DrawPointLine(40,boca+2,45,boca+3);
        can.DrawPointLine(45,boca+3,50,boca+4);
        can.DrawPointLine(50,boca+4,55,boca+3);
        can.DrawPointLine(55,boca+3,60,boca+2);
        can.DrawPointLine(60,boca+2,65,boca);

        Element lienzo = bgcolor(Color::Aquamarine1, canvas(&can));
        Render(pantalla, lienzo);

        std::cout << reseet_position;
        pantalla.Print();
        reseet_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}