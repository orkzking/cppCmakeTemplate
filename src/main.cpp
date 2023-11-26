#include "std_header.h"

int main(int argc, char **argv)
{
    std::string lPath2Data;
    std::cout<<"Hello World\n";

    if(argc > 1)
    {
        lPath2Data = argv[1];
    }
    else
    {
        lPath2Data = "../../../../data/Tabelle_Archonliga_Q3-23.csv";
    }

    League lTest = League();
    lTest.loadLeagueFromCSV(lPath2Data);

    lTest.recalcPointsOfPlayers();

    if (argc > 1)
    {
        /* code */
    }
    else
    {
        lTest.saveLeagueAsCSV("../../../../data/Tabelle_Archonliga_Q3-23_stdPointdistr.csv");
    }
    

    return EXIT_SUCCESS;
}