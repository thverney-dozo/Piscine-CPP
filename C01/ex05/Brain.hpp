#ifndef _BRAIN_H_
# define _BRAIN_H_

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
    private:
            std::string _SelfAware;
            std::string _Feelings;
            std::string _Logic;
            std::string _Senses;
            std::string _BodyControl;
    public:
            Brain(void);
            ~Brain(void);

            std::string identify() const;
};

#endif
