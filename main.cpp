#include <cstdlib>
#include <ctime>
#include "Race.h"

int main() {
    srand(time(nullptr));

    Race race(15);
    race.run();

    return 0;
}
