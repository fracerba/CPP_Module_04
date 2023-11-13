#ifndef Brain_HPP
#define Brain_HPP

#include <cstdlib>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &Brain);
        ~Brain();
        Brain& operator=(const Brain &Brain);

        std::string getIdea(int i) const;
        void setIdea(std::string, int i);
};

#endif