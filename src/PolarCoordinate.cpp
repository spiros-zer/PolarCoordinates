// (c) Spyridon Zervos


#include "PolarCoordinates.h"

#include <sstream>

PolarCoordinates::PolarCoordinates(double InRadius, double InTheta)
{
    _r = InRadius;
    _theta = InTheta;
}

PolarCoordinates::PolarCoordinates() : PolarCoordinates(0, 0) {}

PolarCoordinates PolarCoordinates::operator*(const PolarCoordinates& X)
{
    return {_r * X.GetRadius(), _theta + X.GetTheta()};
}

PolarCoordinates PolarCoordinates::operator/(const PolarCoordinates& X)
{
    return {_r / X.GetRadius(), _theta - X.GetTheta()};
}

std::string PolarCoordinates::ToString() const
{
    std::ostringstream OutputStringStream;
    OutputStringStream << _r << "/_" << _theta;
    return OutputStringStream.str();
}
