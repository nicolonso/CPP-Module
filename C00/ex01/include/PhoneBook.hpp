# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// Libraries

# include "Contact.hpp"
# include <sstream>
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{
	private:
		Contact		contact[8];
		int			count;
		int			oldest;
		void		helper() const;

	public:
		PhoneBook();
		void	addContact();
		void	search() const;
};

#endif