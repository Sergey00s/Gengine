#include "../includes/Engine.hpp"


Vector3d::Vector3d(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector3d::Vector3d()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector3d::~Vector3d()
{

}

float   Vector3d::mag()
{
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

void    Vector3d::normalize()
{
    float m = this->mag();
    if (m != 0)
    {
        this->x /= m;
        this->y /= m;
        this->z /= m;
    }
}

float   Vector3d::dot(Vector3d v)
{
    return this->x * v.x + this->y * v.y + this->z * v.z;
}

Vector3d Vector3d::cross(Vector3d v)
{
    float x = this->y * v.z - this->z * v.y;
    float y = this->z * v.x - this->x * v.z;
    float z = this->x * v.y - this->y * v.x;
    return Vector3d(x, y, z);
}


float   Vector3d::angleBetween(Vector3d v)
{
    float dot = this->dot(v);
    float m1 = this->mag();
    float m2 = v.mag();
    float a = dot / (m1 * m2);
    return acos(a);
}

void    Vector3d::setMag(float n)
{
    this->normalize();
    this->x *= n;
    this->y *= n;
    this->z *= n;
}

void    Vector3d::limit(float max)
{
    if (this->mag() > max)
    {
        this->normalize();
        this->x *= max;
        this->y *= max;
        this->z *= max;
    }
}

void    Vector3d::set(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void    Vector3d::print()
{
    std::cout << "x: " << this->x << " y: " << this->y << " z: " << this->z << std::endl;
}



