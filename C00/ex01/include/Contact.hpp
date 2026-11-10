#ifndef CONTACT_HPP
#define CONTACT_HPP

/* ── system includes ──────────────────────────────── */

# include <string>

/* ── Classes ──────────────────────────────── */

class Contact
{
	private:
	std::string	firstName;
	std::string	lastname;
	std::string nickName;
	std::string phoneNumber;
	std::string darkSecret;

	public:
		void	set(std::string	firstName, std::string	lastname, std::string nickName,
					std::string phoneNumber, std::string darkSecret);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkSecret() const;
};

#endif