#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Counter
{
	private:
		std::string name;
		int			value;
	public:
		Counter(std::string name);
		~Counter();
		void increment();
		int	getValue() const;


};

#endif