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

//Definition de la taille maximale de la queue.
#define MAX_SIZE 8

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
typedef struct etQueue {
    int dTop;
    int dNext;
    int dSize;
    struct etQAct stQAct;
} stQueue;

// fonction paramètre full/empty pour la queue
int isFull(stQueue* queue);
int isEmpty (stQueue* queue);


//init de la queue
void initQueue (stQueue* queue);

//add element à la queue
void addQueue (stQueue* queue);

//get element actuel du top de la queue
void getQueue (stQueue* queue);


