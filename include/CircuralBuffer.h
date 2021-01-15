#include <math.h>
#include <vector>


template<typename T>
class CircuralBuffer
{
public:
    using size_type = std::size_t;

    CircuralBuffer(size_type allocate_size)
    :   elements{std::vector<T>(allocate_size)}
    {}



private:
    std::vector<T> elements {std::vector<T>{}};
    bool full {false};
    size_type size {0};
};
