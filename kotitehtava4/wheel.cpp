#include "wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int s, const std::string &t) : size(s), type(t) {}

int Wheel::getSize() const { return size; }

std::string Wheel::getType() const { return type; }

void Wheel::setSize(int s) { size = s; }

void Wheel::setType(const std::string &t) { type = t; }
