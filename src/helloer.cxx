
#include <iostream>

#include "helloer.hxx"

///
helloer::helloer(const std::string& name)
    : _name{name}
{}

///
std::string helloer::say() const
{
    return "Hello, " + _name + "!";
}

///
void say_hello(const char* name)
{
    std::cout << helloer{name}.say() << std::endl;
}
