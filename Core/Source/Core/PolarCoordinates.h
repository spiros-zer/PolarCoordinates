// (c) Spyridon Zervos


#pragma once

#include <string>

struct PolarCoordinates
{
    /** @brief The radius and angle in degrees of the Polar coordinates. */
    double R{}, Theta{};

    /**** CONSTRUCTORS/DESTRUCTORS */
    PolarCoordinates(double InRadius, double InTheta);
    PolarCoordinates();

    /**** SETTERS/GETTERS */
    double GetRadius() const {return R;}
    void SetRadius(double InRadius) {R = InRadius;}

    double GetTheta() const {return Theta;}
    void SetTheta(double InTheta) {Theta = InTheta;}

    /**** OPERATOR OVERLOADING */
    PolarCoordinates operator*(const PolarCoordinates& X) const;
    PolarCoordinates operator/(const PolarCoordinates& X) const;

    /**** STRING OPERATIONS */
    /** @brief Converts the Polar coordinates to a std::string. */
    std::string ToString() const;

    /** @brief Converts cartesian coordinate to char*. */
    char* ToString(int& InSize, int Precision = 2) const;

    /** @brief Prints the Cstring in the iostream with the NULL char. */
    void Print() const;
};
