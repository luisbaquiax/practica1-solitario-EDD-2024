CPP = g++
TARGET = solitario

# all
all: .all-post

.all-post:  carta/Carta.o cola/Cola.o pila/Pila.o lista/ListaDoble.o movimiento/Movimiento.o movimiento/ListMovment.o control-cartas/ControlCartas.o game/Game.o main.o utiles/Utiles.o
	$(CPP)  carta/Carta.o cola/Cola.o pila/Pila.o lista/ListaDoble.o movimiento/Movimiento.o movimiento/ListMovment.o control-cartas/ControlCartas.o game/Game.o main.o utiles/Utiles.o -o $(TARGET)

Utiles.o: utiles/Utiles.cpp utiles/Utiles.h
	$(CPP) -c Utiles.cpp

Carta.o: carta/Carta.cpp carta/Carta.h
	$(CPP) -c carta/Carta.cpp

Cola.o: cola/Cola.cpp cola/Cola.h
	$(CPP) -c cola/Cola.cpp

Pila.o: pila/Pila.cpp pila/Pila.h
	$(CPP) -c pila/Pila.cpp

ListaDoble.o: lista/ListaDoble.cpp lista/ListaDoble.h
	$(CPP) -c lista/ListaDoble.cpp

Movimiento.o: movimiento/Movimiento.cpp movimiento/Movimiento.h
	$(CPP) -c movimiento/Movimiento.cpp

ListMovment.o: movimiento/ListMovment.cpp movimiento/ListMovment.h
	$(CPP) -c movimiento/ListMovment.cpp

ControlCartas.o: control-cartas/ControlCartas.cpp control-cartas/ControlCartas.h
	$(CPP) -c control-cartas/ControlCartas.cpp

Game.o: game/Game.cpp game/Game.h
	$(CPP) -c game/Game.cpp

main.o:
	$(CPP) -c main.cpp

# clean
clean:
	rm -f *.o $(TARGET)