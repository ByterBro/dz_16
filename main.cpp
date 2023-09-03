#include<string>
#include<iostream>
#include <utility>


using namespace std;

int main() {
	char inuse='a';
	int usermode;
	string username1 = "Oleg";
	string username2= "Miha";
	pair<string, string> User1 = make_pair("sex", "gay");// log and pass
	pair<string, string> User2 = make_pair("porn", "gay");
	cout << "Hello! Choose user 1/2: ";
	cin >> usermode;
	if (usermode == 1)// user_1
	{
		char mode;
		cout << "reg or sign in? r/s: ";
		cin >> mode;
		if (mode == 'r')
		{
			cout << "who are you? ";
			cin >> username1;
			cout << "type login" << endl;
			cin >> User1.first;
			cout << "type password" << endl;
			cin >> User1.second;
		}
		if (mode == 's')
		{
			string password;
			string logen;
			cout << "type login" << endl;
			cin >> logen;
			if (logen != User1.first)
			{
				cout << "wrong login" << endl;
				goto end;
			}
			cout << "type password" << endl;
			cin >> password;
			if (password != User1.second)
			{
				cout << "wrong password" << endl;
				goto end;
			}
		}

	}
	if (usermode == 2)
	{
		char mode;
		cout << "reg or sign in? r/s: ";
		cin >> mode;
		if (mode == 'r')
		{
			cout << "who are you? ";
			cin >> username2;
			cout << "type login" << endl;
			cin >> User2.first;
			cout << "type password" << endl;
			cin >> User2.second;
		}
		if (mode == 's')
		{
			string password;
			string logen;
			cout << "type login" << endl;
			cin >> logen;
			if (logen != User2.first)
			{
				cout << "wrong login" << endl;
				goto end;
			}
			cout << "type password" << endl;
			cin >> password;
			if (password != User2.second)
			{
				cout << "wrong password" << endl;
				goto end;
			}

		}
	}
	if ((usermode != 1) and (usermode != 2))
	{
		goto end;
	}
	cout << "[console]: Greetings there again!" << endl;
	cout << "[console]: type e to leave" << endl;
	cout << "[console]: type 'a' to type in global chat" << endl;
	cout << "[console]: 'help'to type this menu again" << endl;
	cout << "[developer]: enjoy!" << endl;
	cin >> inuse;
	while (inuse != 'e')
	{	
		switch (inuse)
		{
		case 'a':
		{	if (usermode == 1)
			{
			string i;
			cout << "Type here: ";
			cin >> i;
			cout << "[All]" << username1 << ": " << i << endl;
			cin >> inuse;
			}
		if (usermode == 2)
		{
			string i;
			cout << "Type here: ";
			cin >> i;
			cout << endl;
			cout << "[All]" << username2 << ": " << i << endl;
			cin >> inuse;
		}
		case 'e':
		{
			goto end;
		}
		case 'help':
		{	cout << "[console]: Greetings there again!" << endl;
			cout << "[console]: Press e to leave" << endl;
			cout << "[console]: type 'all' to type in global chat" << endl;
			cout << "[console]: 'help'to type this menu again" << endl;
			cin >> inuse;
		}

		}
		default:
			break;
		}

	}


	

	
end:
	return 0;
}
