#include <iostream>

using namespace std;

void MessageSelector()
{
	int i = -1;
	bool canExit = false;
	
	do
	{
		cout << "Type an integer that is bigger than 0: ";
		cin >> i;
		
		if(!cin.good())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			canExit = false;
		}
		else
		{
			canExit = i > 0;
		}
	}
	while(!canExit);
	
	switch(i)
	{
		case 1:
			cout << "Hello FunBun" << endl;
			break;
		case 2:
			cout << "Hello GPS" << endl;
			break;
		default:
			cout << "Hello Everyone" << endl;
			break;
	}
}

int main()
{
	//cout << "Hello World" << endl;
	MessageSelector();
	
	system("PAUSE");
	return 0;
}
