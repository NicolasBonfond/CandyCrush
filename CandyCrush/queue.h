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
typedef struct etPion {
    int X;
    int Y;
} stPion;

//structure action queue
typedef struct etQAct {
    char tcAct[20];
    stPion pion1;
    stPion pion2;
} stQAct;

//structure queue
typedef struct etQueue {
    int dTop;
    int dNext;
    int dSize;
    stQAct action;
} stQueue;


// fonction paramètre full/empty pour la queue
int isFull(stQueue* queue);
int isEmpty (stQueue* queue);


//init de la queue
void initQueue (stQueue* queue);

//add element à la queue
void addQueue (stQueue* queue, stQAct* action);

//get element actuel du top de la queue
void getQueue (stQueue* queue, stQAct* action);


