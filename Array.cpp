#include <stdexcept>
#include <string>
#include <iterator>
#include <type_traits>

template <class T,size_t N>
struct Array {
    

};

template <class Arg0, class ...Args>
Array(Arg0, Args...) -> Array<Arg0, sizeof...(Args)+1>;

int main() {
    puts("1");
    return 0;
}
