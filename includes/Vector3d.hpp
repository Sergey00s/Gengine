#ifndef VECTOR3D_HPP
# define VECTOR3D_HPP


class Vector3d
{
    public:
        float x;
        float y;
        float z;

    public:
        Vector3d();
        Vector3d(float x, float y, float z);
        ~Vector3d();
        void    setX(float x){ this->x = x;}
        void    setY(float y){ this->y = y;}
        void    setZ(float z){ this->z = z;}
        float   getX(){ return this->x;}
        float   getY(){ return this->y;}
        float   getZ(){ return this->z;}
        Vector3d operator+(const Vector3d &v){ return Vector3d(this->x + v.x, this->y + v.y, this->z + v.z);}
        Vector3d operator-(const Vector3d &v){ return Vector3d(this->x - v.x, this->y - v.y, this->z - v.z);}
        Vector3d operator*(const float &n){ return Vector3d(this->x * n, this->y * n, this->z * n);}
        Vector3d operator/(const float &n){ return Vector3d(this->x / n, this->y / n, this->z / n);}
        void    operator+=(const Vector3d &v){ this->x += v.x; this->y += v.y; this->z += v.z;}
        void    operator-=(const Vector3d &v){ this->x -= v.x; this->y -= v.y; this->z -= v.z;}
        void    operator*=(const float &n){ this->x *= n; this->y *= n; this->z *= n;}
        void    operator/=(const float &n){ this->x /= n; this->y /= n; this->z /= n;}
        float   mag();
        void    normalize();
        float   dot(Vector3d v);
        Vector3d cross(Vector3d v);
        float   angleBetween(Vector3d v);
        void    setMag(float n);
        void    limit(float max);
        void    set(float x, float y, float z);
        void    print();
};

#endif