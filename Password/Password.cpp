#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;

}
/*
כל קטל בעל 16 תווים כמו:
****************
יש באפראוברפלו. הקלט בעצם כותב גם על המשתנה הבוליאני והופך אותו לטרו
לכן מודפסת הצלחה
*/
