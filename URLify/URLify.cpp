// URLify.cpp : 

#include <iostream>
#include <string>

std::string URLify(std::string str);

int main()
{
	std::string sentence="";
	std::cout << "Please enter any sentence: ";
	std::getline(std::cin, sentence);
	std::cout << URLify(sentence);
	return 0;
}

std::string URLify(std::string str)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < str.length(); ++i)
	{
		if (str[i] == ' ')
			++count;
	}
	int new_size = (str.length() + count * 2);
	str.resize(new_size);
	for (int j = str.length(); j > 0; --j, --i)
	{
		if (str[i] == ' ')
		{
			str[j] = '0';
			str[--j] = '2';
			str[--j] = '%';
		}
		else
		{
			str[j] = str[i];
		}
	}
	return str;
}
