
#ifndef POINT_H
#define POINT_H

namespace Struct_Point {

    struct Coordinates {
        int x;
        int y;
    };

    //overload  equality operator
    bool operator==(const Coordinates& first, const Coordinates& second);

    //stream insertion operators
    std::ostream& operator<<(std::ostream& stream, const Coordinates& point);

} 
#endif
