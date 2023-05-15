//
//  queue.c
//  CandyCrush
//
//  Created by Nicolas Bonfond on 30/03/2022.
//

#include "queue.h"

//--------------------------------//
// Fonction init queue           //
//-------------------------------//

void initQueue(stQueue* queue)
{
    queue->dTop = 0;
    queue->dNext = -1;
    queue->dSize = 0;
};


//------------------------------//
// Fonction add queue           //
//------------------------------//
void addQueue(stQueue* queue)
{
    
};


//-----------------------------//
//Fonction get queue           //
//-----------------------------//

void getQueue(stQueue* queue)
{
    
};


int isFull(stQueue* queue){
    return (queue->dSize == MAX_SIZE);
}

int isEmpty (stQueue* queue) {
    return (queue->dSize == 0);
}
