#ifndef RACE_H
#define RACE_H

#include "Horse.h"

class Race {
private:
    static const int NUM_HORSES = 5;
    int trackLength;
    Horse horses[NUM_HORSES];

public:
    Race(int trackLength);
    void run();
    void printRace() const;
    bool isRaceOver() const;
};

#endif
