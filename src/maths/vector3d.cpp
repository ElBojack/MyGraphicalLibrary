#include "vector3d.h"

#include <iostream>
#include <iomanip>

namespace MGLEngine
{
    //Constructor
    vector3d::vector3d() : x(0.0), y(0.0), z(0.0)
    {
    }

    vector3d::vector3d(float xi, float yi, float zi) : x(xi), y(yi), z(zi)
    {
    }

    //Destructor
    vector3d::~vector3d()
    {
    }

    //Copy Constructor
    vector3d::vector3d(const vector3d &copy) : x(copy.x), y(copy.y), z(copy.z)
    {
    }

    vector3d& vector3d::operator=(const vector3d &copy)
    {
        this->x = copy.x;
        this->y = copy.y;
        this->z = copy.z;

        return (*this);
    }

    //Print properties
    void vector3d::print()
    {
        std::cout << std::setprecision(3) << "(" << this->x << ", " << this->y << ", " << this->z << ")\n";
    }

    //Operations
    // Addition
    void vector3d::add(const vector3d &v)
    {
        this->x += v.x;
        this->y += v.y;
        this->z += v.z;
    }

    void vector3d::operator+=(const vector3d &v)
    {
        this->add(v);
    }
    
    vector3d vector3d::operator+(const vector3d &v)
    {
        return (vector3d(
            this->x + v.x,
            this->y + v.y,
            this->z + v.z
        ));
    }

    void vector3d::add(const float f)
    {
        this->x += f;
        this->y += f;
        this->z += f;
    }

    void vector3d::operator+=(const float f)
    {
        this->add(f);
    }
    
    vector3d vector3d::operator+(const float f)
    {
        return (vector3d(
            this->x + f,
            this->y + f,
            this->z + f
        ));
    }

    //Substraction
    void vector3d::sub(const vector3d &v)
    {
        this->x -= v.x;
        this->y -= v.y;
        this->z -= v.z;
    }

    void vector3d::operator-=(const vector3d &v)
    {
        this->sub(v);
    }
    
    vector3d vector3d::operator-(const vector3d &v)
    {
        return (vector3d(
            this->x - v.x,
            this->y - v.y,
            this->z - v.z
        ));
    }

    void vector3d::sub(const float f)
    {
        this->x -= f;
        this->y -= f;
        this->z -= f;
    }

    void vector3d::operator-=(const float f)
    {
        this->sub(f);
    }
    
    vector3d vector3d::operator-(const float f)
    {
        return (vector3d(
            this->x - f,
            this->y - f,
            this->z - f
        ));
    }

    //Multiplication
    void vector3d::mul(const vector3d &v)
    {
        this->x *= v.x;
        this->y *= v.y;
        this->z *= v.z;
    }

    void vector3d::operator*=(const vector3d &v)
    {
        this->mul(v);
    }
    
    vector3d vector3d::operator*(const vector3d &v)
    {
        return (vector3d(
            this->x * v.x,
            this->y * v.y,
            this->z * v.z
        ));
    }

    void vector3d::mul(const float f)
    {
        this->x *= f;
        this->y *= f;
        this->z *= f;
    }

    void vector3d::operator*=(const float f)
    {
        this->mul(f);
    }
    
    vector3d vector3d::operator*(const float f)
    {
        return (vector3d(
            this->x * f,
            this->y * f,
            this->z * f
        ));
    }

    //Division
    void vector3d::div(const vector3d &v)
    {
        if (v.x == 0 ||
            v.y == 0 ||
            v.z == 0
        ) {
            std::cout << "Cannot divide by 0.\n";
            return;
        }

        this->x /= v.x;
        this->y /= v.y;
        this->z /= v.z;
    }

    void vector3d::operator/=(const vector3d &v)
    {
        this->div(v);
    }
    
    vector3d vector3d::operator/(const vector3d &v)
    {
        if (v.x == 0 ||
            v.y == 0 ||
            v.z == 0
        ) {
            std::cout << "Cannot divide by 0.\n";
            return (vector3d());
        }

        return (vector3d(
            this->x / v.x,
            this->y / v.y,
            this->z / v.z
        ));
    }

    void vector3d::div(const float f)
    {
        if (f == 0) {
            std::cout << "Cannot divide by 0.\n";
            return;
        }

        this->x /= f;
        this->y /= f;
        this->z /= f;
    }

    void vector3d::operator/=(const float f)
    {
        this->div(f);
    }
    
    vector3d vector3d::operator/(const float f)
    {
        if (f == 0) {
            std::cout << "Cannot divide by 0.\n";
            return (vector3d());
        }

        return (vector3d(
            this->x / f,
            this->y / f,
            this->z / f
        ));
    }

    //Modulo
        void vector3d::mod(const vector3d &v)
    {
        this->x = this->y * v.z - this->z * v.y;
        this->y = this->z * v.x - this->x * v.z;
        this->z = this->x * v.y - this->y * v.x;
    }

    void vector3d::operator%=(const vector3d &v)
    {
        this->mod(v);
    }
    
    vector3d vector3d::operator%(const vector3d &v)
    {
        return (vector3d(
            this->y * v.z - this->z * v.y,
            this->z * v.x - this->x * v.z,
            this->x * v.y - this->y * v.x
        ));
    }
} // namespace MGLEngine
