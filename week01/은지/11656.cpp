#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
	std::string str;
	std::cin >> str;

	std::vector <std::string> v;
	std::string text;


	for (int i = 0; i < str.size(); i++)
	{
		for (int j = i; j < str.size(); j++) {
			text += str[j];
		}

		v.push_back(text);
		text = "";
	}

	std::sort(v.begin(), v.end());

	for (int i = 0; i < str.size(); i++)
	{
		std::cout << v[i] << "\n";
	}

	return 0;
}
