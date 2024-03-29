#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//Initial Variables
	string Code = "?";
	string Encode = "?";
	string Decode = "?";
	char CurrentCharacter = '?';
	int CurrentCharValue = 0;
	char UserChoice1 = '5';
	char UserChoice2 = '6';
	int ShiftValue = 0;
	int ComplexChange = 0;

	//Choice Prompts
	while (UserChoice1 != '1' && UserChoice1 != '2')
	{
		cout << "Choose whether you would like to encode or decode a message.\n"
			<< "1 - Encode\n"
			<< "2 - Decode\n";
		cin >> UserChoice1;
	}
	while (UserChoice2 != '1' && UserChoice2 != '2')
	{
		cout << "Choose whether you would like to use a simple or complex Caesar Cipher.\n"
			<< "1 - Simple\n"
			<< "2 - Complex\n";
		cin >> UserChoice2;
	}

	//Simple Caeser Cipher
	if (UserChoice2 == '1')
	{
		if (UserChoice1 == '1')
		{
			//Encoding
			cout << "Simple Encode.\n";
			cout << "Please enter a shift value for the encoding.\n";
			cin >> ShiftValue;
			while (ShiftValue % 26 == 0)
			{
				cout << "Please enter a shift value that is not a multiple of 26." << endl;
				cin >> ShiftValue;
			}
			if (ShiftValue > 25)
			{
				ShiftValue = ShiftValue % 26;
			}
			cout << "Please enter the message you would like to encode.\n";
			getline(cin, Code);
			getline(cin, Code);
			for (int i = 0; i < Code.size(); i++)
			{
				CurrentCharacter = Code[i];
				if ((int)CurrentCharacter >= 65 && (int)CurrentCharacter <= 90)
				{
					
					CurrentCharacter = (int)CurrentCharacter + ShiftValue;
					if ((int)CurrentCharacter > 90)
					{
						CurrentCharacter = (int)CurrentCharacter - 26;
					}
					cout << CurrentCharacter;
				}
				else if ((int)CurrentCharacter >= 97 && (int)CurrentCharacter <= 122)
				{
					if ((int)CurrentCharacter + ShiftValue <= 122)
					{
						CurrentCharacter = (int)CurrentCharacter + ShiftValue;
					}
					else if ((int)CurrentCharacter + ShiftValue > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - (26 - ShiftValue);
					}
					if ((int)CurrentCharacter > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - 26;
					}
					cout << CurrentCharacter;
					
				}
				else if ((int)CurrentCharacter == 32)
				{
					cout << " ";
				}
				else
				{
					cout << CurrentCharacter;
				}
				
			}

		}
		else
		{
			//Decoding
			cout << "Simple Decode.\n";
			cout << "Please enter the shift value used for encoding the message.\n";
			cin >> ShiftValue;
			while (ShiftValue % 26 == 0)
			{
				cout << "Please enter a shift value that is not a multiple of 26." << endl;
				cin >> ShiftValue;
			}
			if (ShiftValue > 25)
			{
				ShiftValue = ShiftValue % 26;
			}
			cout << "Please enter the message you would like to decode.\n";
			getline(cin, Code);
			getline(cin, Code);
			for (int i = 0; i < Code.size(); i++)
			{
				CurrentCharacter = Code[i];
				if ((int)CurrentCharacter >= 65 && (int)CurrentCharacter <= 90)
				{

					CurrentCharacter = (int)CurrentCharacter - ShiftValue;
					if ((int)CurrentCharacter < 65)
					{
						CurrentCharacter = (int)CurrentCharacter + 26;
					}
					cout << CurrentCharacter;
				}
				else if ((int)CurrentCharacter >= 97 && (int)CurrentCharacter <= 122)
				{
					if ((int)CurrentCharacter - ShiftValue >= 97)
					{
						CurrentCharacter = (int)CurrentCharacter - ShiftValue;
					}
					else if ((int)CurrentCharacter - ShiftValue < 97)
					{
						CurrentCharacter = (int)CurrentCharacter + (26 - ShiftValue);
					}
					if ((int)CurrentCharacter > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - 26;
					}
					cout << CurrentCharacter;

				}
				else if ((int)CurrentCharacter == 32)
				{
					cout << " ";
				}
				else
				{
					cout << CurrentCharacter;
				}
			}
		}
	}

	//Complex Caeser Cipher
	else if (UserChoice2 == '2')
	{
		if (UserChoice1 == '1')
		{
			//Encoding
			cout << "Complex Encode.\n";
			cout << "Please enter a shift value for the encoding.\n";
			cin >> ShiftValue;
			while (ShiftValue % 26 == 0)
			{
				cout << "Please enter a shift value that is not a multiple of 26." << endl;
				cin >> ShiftValue;
			}
			if (ShiftValue > 25)
			{
				ShiftValue = ShiftValue % 26;
			}
			cout << "Please enter the message you would like to encode.\n";
			getline(cin, Code);
			getline(cin, Code);
			for (int i = 0; i < Code.size(); i++)
			{
				
				if (ShiftValue > 25)
				{
					ShiftValue = ShiftValue % 26;
				}
				CurrentCharacter = Code[i];
				if ((int)CurrentCharacter >= 65 && (int)CurrentCharacter <= 90)
				{

					CurrentCharacter = (int)CurrentCharacter + ShiftValue;
					if ((int)CurrentCharacter > 90)
					{
						CurrentCharacter = (int)CurrentCharacter - 26;
					}
					cout << CurrentCharacter;
				}
				else if ((int)CurrentCharacter >= 97 && (int)CurrentCharacter <= 122)
				{
					if ((int)CurrentCharacter + ShiftValue <= 122)
					{
						CurrentCharacter = (int)CurrentCharacter + ShiftValue;
					}
					else if ((int)CurrentCharacter + ShiftValue > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - (26 - ShiftValue);
					}
					if ((int)CurrentCharacter > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - 26;
					}
					cout << CurrentCharacter;

				}
				else if ((int)CurrentCharacter == 32)
				{
					cout << " ";
				}
				else
				{
					cout << CurrentCharacter;
				}
				ShiftValue = ShiftValue + pow(2, ComplexChange);
				ComplexChange++;
			}

		}
		else
		{
			//Decoding
			cout << "Complex Encode.\n";
			cout << "Please enter the shift value used for the encoding.\n";
			cin >> ShiftValue;
			while (ShiftValue % 26 == 0)
			{
				cout << "Please enter a shift value that is not a multiple of 26." << endl;
				cin >> ShiftValue;
			}
			if (ShiftValue > 25)
			{
				ShiftValue = ShiftValue % 26;
			}
			cout << "Please enter the message you would like to decode.\n";
			getline(cin, Code);
			getline(cin, Code);
			for (int i = 0; i < Code.size(); i++)
			{
				if (ShiftValue > 25)
				{
					ShiftValue = ShiftValue % 26;
					cout << ShiftValue << endl;
				}
				if (ShiftValue < 0)
				{
					ShiftValue = (ShiftValue % 26) + 26;
				}
				CurrentCharacter = Code[i];
				CurrentCharValue = (int)CurrentCharacter;
				if ((int)CurrentCharacter >= 65 && (int)CurrentCharacter <= 90)
				{

					CurrentCharacter = (int)CurrentCharacter - ShiftValue;
					if ((int)CurrentCharacter < 65)
					{
						CurrentCharacter = (int)CurrentCharacter + 26;
					}
					cout << CurrentCharacter;
				}
				else if ((int)CurrentCharacter >= 97 && (int)CurrentCharacter <= 122)
				{
					if ((int)CurrentCharacter + ShiftValue <= 122)
					{
						CurrentCharacter = (int)CurrentCharacter + ShiftValue;
					}
					else if ((int)CurrentCharacter + ShiftValue > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - (26 - ShiftValue);
					}
					else if ((int)CurrentCharacter - ShiftValue < 97)
					{
						CurrentCharacter = (int)CurrentCharacter + (26 + ShiftValue);
					}
					if ((int)CurrentCharacter > 122)
					{
						CurrentCharacter = (int)CurrentCharacter - 26;
					}
					cout << CurrentCharacter;

				}
				else if ((int)CurrentCharacter == 32)
				{
					cout << " ";
				}
				else
				{
					cout << CurrentCharacter;
				}
				ShiftValue = ShiftValue - pow(2, ComplexChange);
				ComplexChange++;
				
			}
		}
	}
	//getline(cin, Code);
	//cout << "?";
	return 0;
}
