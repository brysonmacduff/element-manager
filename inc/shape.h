#include <ostream>

namespace Geometry
{
class Shape
{
    public:
        Shape(int sideCount);
        int GetSideCount();

        friend std::ostream& operator<<(std::ostream& o, const Shape& s)
        {
            o << "Shape side count: " << s.sideCount;
            return o;
        }

    private:
        int sideCount;
};
}