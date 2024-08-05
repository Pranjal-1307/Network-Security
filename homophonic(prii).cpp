#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
string encode(char element)
{
	string ch;
	srand(time(0));
	int ind = rand() % 3;
	char val = toupper(element);
    switch (val) 
    {
        case 'A': ch = ind == 0 ? 'Q' : ind == 1 ? 'W' : 'E'; break;
        case 'B': ch = ind == 0 ? 'R' : ind == 1 ? 'T' : 'Y'; break;
        case 'C': ch = ind == 0 ? 'U' : ind == 1 ? 'I' : 'O'; break;
        case 'D': ch = ind == 0 ? 'P' : ind == 1 ? 'A' : 'S'; break;
        case 'E': ch = ind == 0 ? 'D' : ind == 1 ? 'F' : 'G'; break;
        case 'F': ch = ind == 0 ? 'H' : ind == 1 ? 'J' : 'K'; break;
        case 'G': ch = ind == 0 ? 'L' : ind == 1 ? 'Z' : 'X'; break;
        case 'H': ch = ind == 0 ? 'C' : ind == 1 ? 'V' : 'B'; break;
        case 'I': ch = ind == 0 ? 'N' : ind == 1 ? 'M' : 'Q'; break;
        case 'J': ch = ind == 0 ? 'W' : ind == 1 ? 'E' : 'R'; break;
        case 'K': ch = ind == 0 ? 'T' : ind == 1 ? 'Y' : 'U'; break;
        case 'L': ch = ind == 0 ? 'I' : ind == 1 ? 'O' : 'P'; break;
        case 'M': ch = ind == 0 ? 'A' : ind == 1 ? 'S' : 'D'; break;
        case 'N': ch = ind == 0 ? 'F' : ind == 1 ? 'G' : 'H'; break;
        case 'O': ch = ind == 0 ? 'J' : ind == 1 ? 'K' : 'L'; break;
        case 'P': ch = ind == 0 ? 'Z' : ind == 1 ? 'X' : 'C'; break;
        case 'Q': ch = ind == 0 ? 'V' : ind == 1 ? 'B' : 'N'; break;
        case 'R': ch = ind == 0 ? 'M' : ind == 1 ? 'Q' : 'W'; break;
        case 'S': ch = ind == 0 ? 'E' : ind == 1 ? 'R' : 'T'; break;
        case 'T': ch = ind == 0 ? 'Y' : ind == 1 ? 'U' : 'I'; break;
        case 'U': ch = ind == 0 ? 'O' : ind == 1 ? 'P' : 'A'; break;
        case 'V': ch = ind == 0 ? 'S' : ind == 1 ? 'D' : 'F'; break;
        case 'W': ch = ind == 0 ? 'G' : ind == 1 ? 'H' : 'J'; break;
        case 'X': ch = ind == 0 ? 'K' : ind == 1 ? 'L' : 'Z'; break;
        case 'Y': ch = ind == 0 ? 'X' : ind == 1 ? 'C' : 'V'; break;
        case 'Z': ch = ind == 0 ? 'B' : ind == 1 ? 'N' : 'M'; break;
        default: ch = element;
	}
	if(islower(element))
		ch[0] = tolower(ch[0]);
    return ch;
}
int main()
{
	string plainText;
	cout<<"Enter Plain Text: ";
	getline(cin, plainText);

	string cipherText;
	for (int i = 0; i < plainText.length(); i++)
	{
		if(plainText[i] == ' ')
			cipherText += plainText[i];
		else
        {
			string element = encode(plainText[i]);
			cipherText += element;
		}
	}
	cout<<"Cipher Text : "<<cipherText;
	return 0;
}