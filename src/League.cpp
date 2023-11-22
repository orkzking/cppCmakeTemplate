#include "League.h"

League::League(int& pPointsPerWin, int& pPointsPerParticipation, int& pNmbTournaments)
{
    zPointsPerWin = pPointsPerWin;
    zPointsPerParticipation = pPointsPerParticipation;
    zNmbTournaments = pNmbTournaments;
    zPlayers = std::vector<Player>();
}

League::League()
{
    zPointsPerWin = 3;
    zPointsPerParticipation = 1;
    zNmbTournaments = 12;
    zPlayers = std::vector<Player>();
}

League::~League()
{
}

void League::loadLeagueFromCSV(std::string pPath2Data)
{
    std::ifstream input;
    input.open(pPath2Data);
    Player lPlayer;
    std::string lHeader,line,cell;
    int pos;
    if (input.is_open())
    {
        //input>>lHeader;
        // Extract the first line in the file
        std::getline(input, lHeader);
        std::cout<<lHeader<<"\n";

        // Read data, line by line
        while(std::getline(input, line))
        {
            // Create a stringstream of the current line
            std::stringstream ss(line);
            pos = 0;
            while (std::getline(ss, cell, ';'))
            {
                switch (pos)
                {
                case 1:
                    lPlayer.Name = cell;
                    break;
                case 2:
                    lPlayer.Wins = stoi(cell);
                    break;
                case 3:
                    lPlayer.Draws = stoi(cell);
                    break;
                case 4:
                    lPlayer.Participations = stoi(cell);
                    break;
                case 5:
                    lPlayer.Points = stoi(cell);
                    break;
                
                default:
                    std::cout<<cell<<"|";
                    break;
                }

                pos++;
            }
            zPlayers.push_back(lPlayer);
        }
    }
    
    input.close();
}