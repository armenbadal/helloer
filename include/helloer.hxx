#ifndef _HELLOER_HXX_
#define _HELLOER_HXX_

#include <string>

///
class helloer {
public:
    explicit helloer(const std::string& name);
    std::string say() const;

private:
    const std::string _name;
};

///
void say_hello(const char* name);

#endif // _HELLOER_HXX_
