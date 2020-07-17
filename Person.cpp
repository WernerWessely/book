
#include <string>

class Person
{
    std::string name{};
    std::string addr{};

public:
    Person() = default;
    Person(const std::string &name, const std::string addr) : name(name), addr(addr) {}
};

int main()
{
}