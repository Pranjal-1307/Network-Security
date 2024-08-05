#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string msg, key, k;
    string ct, pt;

    cout << "Enter Message: ";
    getline(cin, msg);
    cout << "Enter Key: ";
    getline(cin, key);

    int lenm = msg.length();
    int lenk = key.length();

    // Extend the key to match the length of the message
    for (int i = 0, j = 0; i < lenm; ++i, ++j) 
    {
        if (j == lenk) 
        {
            j = 0;
        }
        k += key[j];
    }

    // Encrypt
    for (int i = 0; i < lenm; ++i) 
    {
            if (isupper(msg[i])) 
            {
                ct += char(((msg[i] - 'A' + k[i] - 'A') % 26) + 'A');
            } 
            else if(islower(msg[i])) 
            {
                ct += char(((msg[i] - 'a' + k[i] - 'a') % 26) + 'a');
            }
         else 
         {
            ct += msg[i]; // Preserve non-alphabetic characters
        }
    }

    // Decrypt
    for (int i = 0; i < lenm; ++i) 
    {
            if (isupper(ct[i])) 
            {
                pt += char((((ct[i] - 'A') - (k[i] - 'A') + 26) % 26) + 'A');
            }
             else if(islower(ct[i])) 
            {
                pt += char((((ct[i] - 'a') - (k[i] - 'a') + 26) % 26) + 'a');
            }
         else 
         {
            pt += ct[i]; // Preserve non-alphabetic characters
        }
    }

    cout << "\nEncrypted Message: " << ct << endl;
    cout << "Decrypted Message: " << pt << endl;
    return 0;
}