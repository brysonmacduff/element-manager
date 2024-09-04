#include <ostream>
#include <vector>

namespace Geometry
{
class Shape
{
    static constexpr float DEGREES_2PI = 360.0;

    public:
        Shape() = delete;
        // default constructor
        Shape(int side_count);
        // elaborate constructor for receiving angles
        Shape(const std::vector<float>& angles);
        // copy constructor
        Shape(const Shape& shape);
        int GetSideCount() const;
        Shape& operator=(const Shape& rhs);
        bool operator==(const Shape& rhs);

        friend std::ostream& operator<<(std::ostream& stream, const Shape& shape)
        {
            stream << "Shape side count: " << shape.side_count;
            return stream;
        }

    private:
        int side_count;
        std::vector<float> angles;
        
};
}