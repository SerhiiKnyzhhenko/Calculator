#include <iostream>
#include "func.h"
#include <typeinfo>



int main()
{
	std::vector<long double> arr_num;
	std::vector<char> arr_oper;
	std::string str;
	short Y = 0;

	while (true)
	{
		std::getline(std::cin, str);
		short X = static_cast<short>(str.length());
		
		setCursorPosition(X, Y);
		++Y;

		str_parsing(arr_num, arr_oper, str);

		double res = result(arr_num, arr_oper);

		std::cout << res << '\n';

		str = "";
		arr_num.clear();
		arr_oper.clear();
	}
	


	
	
	return 0;
}

