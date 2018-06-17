/*
    CH08-320142
    a4_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#ifndef _VECTOR_H
#define _VECTOR_H

using namespace std;

class Vector
{
private:

    int size;
    double *comp;
    double *newComp;
public:
    Vector(const int&, const double*);
    Vector();
    Vector(const Vector&);

    ~Vector();

    // getters
    int getSize() const;
    double* getComponents() const;

    // setters
    void setSize(const int&);
    void setComponents(const double*, const int&);

    void print() const;
    double norm() const;
    Vector sub(const Vector&) const;
    Vector add(const Vector&) const;
    double scalar(const Vector&) const;

};

#endif
