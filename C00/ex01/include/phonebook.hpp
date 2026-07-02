#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "contact.hpp"

class Phonebook
{
	private:
		Contact 	contacs[8];
		int 		count;	
	public:
		Phonebook();
		void	addContact();
		void	search() const;
};

#endif