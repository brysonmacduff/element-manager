#include <ostream>

namespace Geometry
{
class Shape
{
    public:
        Shape() = delete;
        // default constructor
        Shape(const int& side_count);
        // copy constructor
        Shape(const Shape& shape);
        const int& GetSideCount() const;
        Shape& operator=(const Shape& rhs);

        friend std::ostream& operator<<(std::ostream& stream, const Shape& shape)
        {
            stream << "Shape side count: " << shape.side_count;
            return stream;
        }

    private:
        int side_count;
};
}