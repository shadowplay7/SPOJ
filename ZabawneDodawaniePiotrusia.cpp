#include <iostream>
#include <string>

int reverseNumber(int num)
{
	int digit, rev=0;
	while (num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num /= 10;
	}
	return rev;
}

bool isSameDigit(int num)
{
	std::string temp = std::to_string(num);
	if (equal(temp.begin(), temp.begin() + temp.size()/2, temp.rbegin()))
		return true;
	else
		return false;
}

bool isPalindrome(int num)
{
	int rem, rev = 0, orig = num;

	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num /=  10;
	}
	if (rev == orig)
		return true;
	else
		return false;
}

int main() {
	
	int testCases;
	std::cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int input, flag = 0, counter = 0, mem;
		std::cin >> input;
		mem = input;

		while (flag == 0)
		{
			if (!isSameDigit(input))
				flag = 0;
			else
			{
				flag++;
				break;
			}
			mem = reverseNumber(mem) + mem;
			if (!isPalindrome(mem))
				flag = 0;
			else
				flag++;
			counter++;
		}
		std::cout << mem << " " << counter << std::endl;
	}
	return 0;
}