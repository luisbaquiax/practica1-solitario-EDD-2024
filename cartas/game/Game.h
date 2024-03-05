//
// Created by Luis on 29/02/2024.
//

#ifndef CARTAS_GAME_H
#define CARTAS_GAME_H

#include "../control-cartas/ControlCartas.h"

class Game {
public:
    ControlCartas c;

    void jugar();

    void verCarta();

    void printGame();

    void menu();

    void moverCarta();

    void moveSelect(int origen, int destino);

    void moveCardToAZs();
    void moveCardFromColaToList();
    void moveCardSeletedToAZs(int columna);

};


#endif //CARTAS_GAME_H