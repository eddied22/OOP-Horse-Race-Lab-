#include "Race.h"
#include <iostream>

Race::Race(int length) {
    trackLength = length;
}

void Race::printRace() const {
    for (int i = 0; i < NUM_HORSES; i++) {
        std::cout << "Horse " << i << ": ";
        for (int j = 0; j < horses[i].getPosition(); j++) {
            std::cout << "-";
        }
        std::cout << "🐎\n";
    }
    std::cout << "\n";
}

bool Race::isRaceOver() const {
    for (int i = 0; i < NUM_HORSES; i++) {
        if (horses[i].hasWon(trackLength)) {
            return true;
        }
    }
    return false;
}

void Race::run() {
    while (!isRaceOver()) {
        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
        }
        printRace();
    }

    std::cout << "🏁 Race Over!\n";
}
