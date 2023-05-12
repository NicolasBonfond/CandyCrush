//
//  queue.h
//  CandyCrush
//
//  Created by Nicolas Bonfond on 30/03/2022.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>

#endif /* queue_h */

// Structure coordonnées pion
struct etPion {
    int X;
    int Y;
};

//structure action queue
struct etQAct {
    char tcAct[20];
    struct etPion stPion1;
    struct etPion stPion2;
};

//structure queue
struct etQueue {
    int dTop;
    int dNext;
    int dSize;
    struct etQAct stQAct;
};


