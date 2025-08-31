#include <iostream>
#include <string>

int main() {
	std::string str;
	int cnt_u = 0, cnt_l = 0, cnt_s = 0, cnt_n = 0;

	while (std::getline(std::cin, str)) {
		for (int i = 0; i < str.size(); i++) {
			if ('A' <= str[i] && str[i] <= 'Z') {
				cnt_u++;
			}

			else if ('a' <= str[i] && str[i] <= 'z') {
				cnt_l++;
			}

			else if ('0' <= str[i] && str[i] <= '9') {
				cnt_n++;
			}
			else {
				cnt_s++;
			}
		}

		std::cout << cnt_l << " " << cnt_u << " " << cnt_n << " " << cnt_s << "\n";
		cnt_u = 0, cnt_l = 0, cnt_s = 0, cnt_n = 0;
	}

	return 0; 
}
