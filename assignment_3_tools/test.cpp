#include <iostream>
#include <stack>
#include <cstring>


using namespace std;

int main(int argc, char* argv[])
{

	string silent = "silent";
	string confess = "confess";

	int last = 0;

	stack<string> emotionalStack;

	emotionalStack.push(" ");
	emotionalStack.push(" ");
	emotionalStack.push(" ");

	if (strcmp(argv[2], "silent") == 0)
	{
		emotionalStack.pop();
		emotionalStack.push(confess);
		cout << emotionalStack.top();
	}
	else
	{
		emotionalStack.pop();
		emotionalStack.push(silent);
		cout << emotionalStack.top();
	}
	

	return 0;

}
