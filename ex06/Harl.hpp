#ifndef HARL_HPP
# define HARL_HPP

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
	Harl();
	~Harl();
};

#endif