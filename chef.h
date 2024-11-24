#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(const std::string& chefName);
    virtual ~Chef();

    void makeSalad() const;
    void makeSoup() const;
};

#endif // CHEF_H
