#include "square.hh"
#include <cstdlib>
#include <iostream>

using namespace std;

Square::Square(int x, int y, string color, Carpet* carpet):
    x_(x), y_(y), color_(color), carpet_(carpet)
{ 
}

Square::~Square() {}

string Square::getColor() const
{
    return color_;
}

int Square::getX() const
{
    return x_;
}

int Square::getY() const
{
    return y_;
}



