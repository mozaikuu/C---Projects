#include <iostream>
// i need to make code that evenly distributes the money between the team members.

// 350 acrylic, 15 wire, 25 multi-wire, 10x3 endstop button, 120 psu, ??? screws, ??? filament.

// 45 + 35 + 50 = 130 taxi, 60 microbus, (not included in total)

// extra wires, wax, welding, multimeter, soldering iron, soldering wire. (not included in total) (plus other contributions)
int main()
{
    // what everyone has paid.
    double moussa = 800;
    double rawan = 200;
    double fawaz = 1080; // 300+230+550=1480
    double shahd = 300;
    double amira = 700;
    double esmail = 300;
    double samaa = 300;
    double basmala = 300;

    // total money.
    double total = moussa + fawaz + rawan + shahd + samaa + basmala + amira + esmail;

    // money per member.
    double member = total / 8;
    std::cout << std::endl;
    std::cout << "single Member: " << member << std::endl;
    std::cout << std::endl;

    // money each member needs to pay.
    double moussa2 = member - moussa;
    double fawaz2 = member - fawaz;
    double rawan2 = member - rawan;
    double shahd2 = member - shahd;
    double samaa2 = member - samaa;
    double basmala2 = member - basmala;
    double amira2 = member - amira;
    double esmail2 = member - esmail;

    // print the money each member needs to pay.
    std::cout << "moussa " << moussa2 << std::endl;
    std::cout << "fawaz " << fawaz2 << std::endl;
    std::cout << "rawan " << rawan2 << std::endl;
    std::cout << "shahd " << shahd2 << std::endl;
    std::cout << "samaa " << samaa2 << std::endl;
    std::cout << "basmala " << basmala2 << std::endl;
    std::cout << "amira " << amira2 << std::endl;
    std::cout << "esmail " << esmail2 << std::endl;

    return 0;
}
