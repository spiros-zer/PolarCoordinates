// (c) Spyridon Zervos


#include "PolarCoordinates.h"

#include <sstream>

PolarCoordinates::PolarCoordinates(double InRadius, double InTheta)
{
    R = InRadius;
    Theta = InTheta;
}

PolarCoordinates::PolarCoordinates() : PolarCoordinates(0, 0) {}

PolarCoordinates PolarCoordinates::operator*(const PolarCoordinates& X) const
{
    return {R * X.GetRadius(), Theta + X.GetTheta()};
}

PolarCoordinates PolarCoordinates::operator/(const PolarCoordinates& X) const
{
    return {R / X.GetRadius(), Theta - X.GetTheta()};
}

std::string PolarCoordinates::ToString() const
{
    std::ostringstream OutputStringStream;
    OutputStringStream << R << "/_" << Theta;
    return OutputStringStream.str();
}
