#include <iostream>
#include <string>

using namespace std;

bool ReplaceTrigraph(string& str, const string& from, const string& to)
{
	size_t start_pos = str.find(from);
	if (start_pos == std::string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
		return true;
}

int main()
{
	string input;
	while (getline(cin, input))
	{
		ReplaceTrigraph(input, "??=", "#");
		ReplaceTrigraph(input, "??/", "\\");
		ReplaceTrigraph(input, "??'", "^");
		ReplaceTrigraph(input, "??(", "[");
		ReplaceTrigraph(input, "??)", "]");
		ReplaceTrigraph(input, "??!", "|");
		ReplaceTrigraph(input, "??<", "{");
		ReplaceTrigraph(input, "??>", "}");
		ReplaceTrigraph(input, "??-", "~");
		cout << input;
	}
}