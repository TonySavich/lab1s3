
#include <iostream>
#include <vector>

int main()
{
	std::vector <char> s;
	
	std::string d;
	std::cin >> d;
	for (int i = 0; i < d.size()+1; i++) {
		s.push_back(d[i]);
	}


	for (int i = 0; i < s.size(); i++) {
	
		if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
		
			auto iter = s.cbegin();
			if ((i - 1) > (-1)) {
				if ((s[i - 1] == '(' && s[i] == ')' )||( s[i - 1] == '[' && s[i] == ']') || (s[i - 1] == '{' && s[i] == '}')) {

					s.erase(iter + i);
					s.erase(iter + i - 1);
					i = 0;
				}
			}
		}
   }
	
	
	if (s.size() < 2) {
		std::cout << "true";

	}
	else {
		std::cout << "false";
	}

//	for (int i = 0; i < s.size(); i++) {
	//	std::cout << s[i];
	//}

}
