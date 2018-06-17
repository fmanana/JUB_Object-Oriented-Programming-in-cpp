#include <iostream>
#include "City.h"

using namespace std;

int main()
{
    City Bremen, Hamburg, Berlin;


    Bremen.setName("Bremen");
    Bremen.setPOI("Universum");
    Bremen.setLocation("Hauptbahnhof");
    Bremen.setInhabitants(551767);
    Bremen.print();

    cout << endl;
    //Space for readability

    Hamburg.setName("Hamburg");
    Hamburg.setPOI("Kunsthalle Hamburg");
    Hamburg.setLocation("Elbe");
    Hamburg.setInhabitants(1736000);
    Hamburg.print();

    cout << endl;

    Berlin.setName("Berlin");
    Berlin.setPOI("Berlin Wall");
    Berlin.setLocation("Mode Museum");
    Berlin.setInhabitants(3470000);
    Berlin.print();

    return 0;
}
