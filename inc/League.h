#ifndef LEAGUE_H
#define LEAGUE_H

#include <vector>
#include <string>
#include <variant>
#include <iostream>
#include <fstream>
#include <sstream>

// put here all own coded header
#include "utilStructs.h"

class League
{
private:
    int zPointsPerWin;
    int zPointsPerParticipation;
    int zNmbTournaments;
    std::vector<Player> zPlayers;
public:
    League(int& pPointsPerWin, int& pPointsPerParticipation, int& pNmbTournaments);
    League();
    ~League();
    void loadLeagueFromCSV(std::string pPath2Data);
};

#endif