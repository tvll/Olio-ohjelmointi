#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& chefName);
    ~ItalianChef();

    void makePasta() const;
    std::string getName() const;
};

#endif // ITALIANCHEF_H
