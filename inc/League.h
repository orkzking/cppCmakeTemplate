#ifndef LEAGUE_H
#define LEAGUE_H



// put here all own coded header

class League
{
private:
    int zPointsPerWin;
    int zPointsPerParticipation;
    int zNmbTournaments;
public:
    League(int& pPointsPerWin, int& pPointsPerParticipation, int& pNmbTournaments);
    League();
    ~League();
};

#endif