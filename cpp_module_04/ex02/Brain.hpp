#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(Brain const &copy);
		virtual ~Brain();

		Brain const	&operator=(Brain const &copy);
		std::string const	&getIdea(int const &index) const;
		void	setIdea(std::string const &idea, int const &index);
};
#endif