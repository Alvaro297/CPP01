#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Harl
{
private:
public:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
#endif