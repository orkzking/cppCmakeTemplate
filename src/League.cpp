#include "League.h"

League::League(int& pPointsPerWin, int& pPointsPerParticipation, int& pNmbTournaments)
{
    zPointsPerWin = pPointsPerWin;
    zPointsPerParticipation = pPointsPerParticipation;
    zNmbTournaments = pNmbTournaments;
}

League::League()
{
    zPointsPerWin = 3;
    zPointsPerParticipation = 1;
    zNmbTournaments = 12;
}

League::~League()
{
}