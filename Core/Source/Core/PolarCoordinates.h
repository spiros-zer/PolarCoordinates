// (c) Spyridon Zervos


#pragma once

#include <string>

class PolarCoordinates
{
private:

    /** @brief The Radius of the Polar coordinates. */
    double _r;

    /** @brief The Angle of the Polar coordinates in degrees. */
    double _theta;

public:

    PolarCoordinates(double InRadius, double InTheta);
    PolarCoordinates();

    double GetRadius() const {return _r;}
    void SetRadius(double InRadius) {_r = InRadius;}

    double GetTheta() const {return _theta;}
    void SetTheta(double InTheta) {_theta = InTheta;}

    /** Operator Overloading */
    PolarCoordinates operator*(const PolarCoordinates& X) const;

    PolarCoordinates operator/(const PolarCoordinates& X) const;

    /** @brief Converts the Polar coordinates to a std::string. */
    std::string ToString() const;
};
