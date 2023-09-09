#include <iostream>
#include <string>
using namespace std;

void Q1()
{
	std::cout << "Insert operation you would like to complete (please enter exactly how they are):";
	std::cout << "add, sub, mul, div, sqrt, rem, sin, cos, :";
}


int main() {
	// variables
	double x = 0;
	double y = 0;
	double z = 0;
	double ans = 0;
	std::string a = "?";
	int i = -1;
	std::string add = "add";
	std::string sub = "sub";
	std::string mul = "mul";
	std::string div = "div";
	std::string sqrt = "sqrt";
	std::string rem = "rem";
	std::string sin1 = "sin";
	std::string cos1 = "cos";
	std::string tan1 = "tan";
	do {
		Q1();
		std::cin >> a;
		if (a == add) {
			std::cout << "Insert Minimum 2 numbers (max 3, if you dont want a 3rd number, insert 0): ";
			std::cin >> x;
			std::cin >> y;
			std::cin >> z;
			ans = x + y + z;
			std::cout << ans;
			i++;
		}
		if (a == sub) {
			std::cout << "Insert Minimum 2 numbers (max 3, if you dont want a 3rd number, insert 0): ";
			std::cin >> x;
			std::cin >> y;
			std::cin >> z;
			ans = x - y - z;
			std::cout << ans;
			i++;
		}
		if (a == mul) {
			std::cout << "Insert Minimum 2 numbers (max 3, if you dont want a 3rd number, insert 0): ";
			std::cin >> x;
			std::cin >> y;
			std::cin >> z;
			ans = x * y * z;
			std::cout << ans;
			i++;
		}
		if (a == div) {
			std::cout << "Insert Minimum 2 numbers: ";
			std::cin >> x;
			std::cin >> y;
			std::cin >> z;
			ans = x / y / z;
			std::cout << ans;
			i++;
		}
		if (a == sqrt) {
			std::cout << "Insert MAX 1 nums: ";
			std::cin >> x;
			ans = sqrtl(x);
			std::cout << ans;
			i++;
		}
		if (a == rem) {
			std::cout << "Insert Max 2 numbers (i.e 10/3): ";
			std::cin >> x;
			std::cin >> y;
			ans = remainder(x,y);
			std::cout << ans;
			i++;
		}
		if (a == sin1) {
			std::cout << "Sine function 1 number max (this will provide a normal andsquared ans): ";
			std::cin >> x;
			ans = sin(x);
			std::cout << ans;
			std::cout << " ", std::cout << exp2(ans);
			i++;
		}
		if (a == cos1) {
			std::cout << "Cosine fuction 1 number max (this will provide a normal squared ans): ";
			std::cin >> x;
			ans = cos(x);
			std::cout << ans;
			std::cout << " ", std::cout << exp2(ans);
			i++;
		}
		if (a == tan1) {
			std::cout << "tangent function 1 number max (this will provide a noraml and squared ans): ";
			std::cin >> x;
			ans = tan(x);
			std::cout << ans;
			std::cout << " ", std::cout << exp2(ans);
			i++;
		}
	} while (i < 0);
	return 0;
}