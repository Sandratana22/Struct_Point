
namespace Struct_Point {

    bool operator==(const Coordinates& first, const Coordinates& second) {
        return (first.x == second.x && 
            first.y == second.y);
    }

    std::ostream& operator<<(std::ostream& stream, const Coordinates& point) {
        stream << "(" << point.x << ", " << point.y << ")";
        return stream;
    }

}
