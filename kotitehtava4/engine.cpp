#include "engine.h"

Engine::Engine() : horsepower(0), displacement(0.0) {}

// Parametrillinen konstruktori
Engine::Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

int Engine::getHorsepower() const { return horsepower; }

double Engine::getDisplacement() const { return displacement; }

void Engine::setHorsepower(int hp) { horsepower = hp; }

void Engine::setDisplacement(double disp) { displacement = disp; }
