#include <iostream> 
#include <string> 
using namespace std; 

// Function to encrypt the plain text using Modified Caesar Cipher 
string encryptModifiedCaesarCipher(string plainText, int shiftUpper, int shiftLower) 
{ 
	string cipherText = ""; 
	for (int i = 0; i < plainText.length(); i++) 
	{ 
		char c = plainText[i]; 
		// Check if character is uppercase 
		if (isupper(c)) 
		{ 
			c = (c - 'A' + shiftUpper) % 26 + 'A'; 
		} 
		// Check if character is lowercase 
		else if (islower(c)) 
		{ 
			c = (c - 'a' + shiftLower) % 26 + 'a'; 
		} 
		cipherText += c; 
	} 
	return cipherText; 
} 



// Function to decrypt the cipher text using Modified Caesar Cipher 
string decryptModifiedCaesarCipher(string cipherText, int shiftUpper, int shiftLower) 
{ 
	string plainText = ""; 
	for (int i = 0; i < cipherText.length(); i++) 
	{ 
		char c = cipherText[i]; 
		// Check if character is uppercase 
		if (isupper(c)) 
		{ 
			c = (c - 'A' - shiftUpper + 26) % 26 + 'A'; 
		} 
		// Check if character is lowercase 
		else if (islower(c))
		{ 
			c = (c - 'a' - shiftLower + 26) % 26 + 'a'; 
		} 
		plainText += c; 
	} 
	return plainText; 
} 


int main() 
{ 
	string plainText; 
	int shiftUpper, shiftLower; 
	cout << "Enter the plain text: "; 
	getline(cin, plainText); 

	cout << "Enter the shift value for uppercase letters: "; 
	cin >> shiftUpper; 

	cout << "Enter the shift value for lowercase letters: "; 
	cin >> shiftLower; 

	string encryptedText = encryptModifiedCaesarCipher(plainText, shiftUpper, shiftLower); 
	cout << "Encrypted text: " << encryptedText << endl; 

	string decryptedText = decryptModifiedCaesarCipher(encryptedText, shiftUpper, shiftLower); 
	cout << "Decrypted text: " << decryptedText << endl; 
	
	return 0; 
}