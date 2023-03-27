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
struct etQAct {
    int tAct[20];
    int d;
    int dTwopiece;
};

struct etQueue {
    int dTop;
    int dNext;
    int dSize;
    struct etQAct stQAct;
};


