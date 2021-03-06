#include "math.h"

#include "sphere.h"

Sphere::Sphere(Material mat, Point centre, float radius) : GObject()
{
  material() = mat;

  Centre = centre;
  Radius = radius;
}

ostream& operator<<(ostream& s, Sphere sphere)
{
  s << "\nSphere:" << "\n"
    << "Centre: " << sphere.Centre << " "
    << "Radius: " << sphere.Radius << "\n"
    << "Material: " << sphere.material();

  return s;
}


istream& operator >> (istream& s, Sphere& sphere)
{
  s >> sphere.Centre >> sphere.Radius >> sphere.material();
  return s;
}

void Sphere::print(ostream &s)
{
  s << *this;
}

void Sphere::read(istream& s)
{
  s >> *this;
}

bool Sphere::intersect(Ray ray, float& t, Colour& colour)
{

  //Your code here...Task - 1. Implement the intersection test
  //This function returns 'false' for now.
  //Your job is to fix it by some math you've learned from the course
  //It should return true if a given ray is intersect with the sphere
  //Update t and colour, which are the magnitude of the ray(vector) and the colour of intersecting point, respectively.

  return false;

}




