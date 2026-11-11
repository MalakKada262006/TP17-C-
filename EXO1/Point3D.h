#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x;
    double y;
    double z;

public:
    Point3D();
    Point3D(double x, double y, double z);

    double getX() const;
    double getY() const;
    double getZ() const;

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    void afficher() const;
};

#endif
