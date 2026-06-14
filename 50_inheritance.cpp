#include <iostream>
class shape
{
public:
    double volume;
};
class cube : public shape
{
public:
    double size;
    cube(double size)
    {
        this->size = size;
        this->volume = size * size * size;
    }
};
class sphere : public shape
{
public:
    double radius;
    sphere(double radius)
    {
        this->radius = radius;
        this->volume = (4 / 3) * 3.14 * radius * radius * radius;
    }
};
int main()
{
    using std::cout;
    cube cube(10);
    cout << "the volume of the cube is " << cube.volume << "\n";
    sphere sphere(10);
    cout << "the volume of the sphere is " << sphere.volume;
}