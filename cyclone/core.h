#include "precision.h"

namespace cyclone{
    /**
     * Holds a vector in 3 dimensions. Four data members are allocated
     * to ensure alignment in an array.
     */
    class Vector3
    {
    public:
        /** Holds the value along the x axis. */
        real x;

        /** Holds the value along the y axis. */
        real y;

        /** Holds the value along the z axis. */
        real z;
    
    private:
        /** Padding to ensure 4-word alignment. */
        real pad;

    public:
        /** The default constructor creates a zero vector. */
        Vector3() : x(0), y(0), z(0) {}
        /** the explicit constructor creates a vector with the given components. */
        Vector3(const real x, const real y, const real z)
            : x(x), y(y), z(z) {}
        
        /** Flips all the components of the vector. */
        void invert()
        {
            x = -x;
            y = -y;
            z = -z;
        }

    };
}