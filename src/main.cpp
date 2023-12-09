#include "std_header.h"

int main(int argc, char **argv)
{
    std::filesystem::path lPath2Data("");
    int lReplacemode = 0; //default
    std::cout<<"Hello World\n";

    if(argc > 1)
    {
        lPath2Data = argv[1];
    }
    else
    {
        lPath2Data = "../../../../data/Tabelle_Archonliga_Q3-23.csv";
    }
    if(argc > 2)
    {
        lReplacemode = std::stoi(argv[2]);
    }


    League lTest = League();

    std::string lCasename = "_stdPointdistr";

    switch (lReplacemode)
    {
    case 1:
        lTest = League(3,15,1,12);
        lCasename = "w3_p15_d1";
        break;

    case 2:
        lTest = League(3,12,1,12);
        lCasename = "w3_p15_d1";
        break;

    case 3:
        lTest = League(3,10,1,12);
        lCasename = "w3_p15_d1";
        break;

    case 4:
        lTest = League(3,8,1,12);
        lCasename = "w3_p15_d1";
        break;
    
    default:
        std::cout<<"using standart points\n";
        break;
    }

    lTest.loadLeagueFromCSV(lPath2Data.make_preferred().string());

    lTest.recalcPointsOfPlayers();

    lPath2Data.replace_filename(lPath2Data.filename().replace_extension().string()+lCasename+".csv");

    lTest.saveLeagueAsCSV(lPath2Data.make_preferred().string());  

    return EXIT_SUCCESS;
}