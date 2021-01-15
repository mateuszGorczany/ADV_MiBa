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

    CircuralBuffer &add(T item)
    {

        if (head == getAllocatedSize())
            head = 0;

        elements[head] = std::move(item);
        ++head;

        if(size < getAllocatedSize())
            ++size;

        return *this;
    }

    // T pop()

    size_type getSize() { return size; }
    size_type getHead() { return head; }
    size_type getTail() { return tail; }
    size_type getAllocatedSize() { return elements.size(); }

private:
    std::vector<T> elements {std::vector<T>{}};
    bool full {false};
    size_type size {0};
    size_type head{0};
    size_type tail{0};
};
