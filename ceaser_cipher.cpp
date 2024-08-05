#include <iostream>
using namespace std;

string encry(string s, int a) 
{
    string cipher;
    for(int i = 0; i < s.length(); i++) 
    {
        if(isupper(s[i])) 
        {
            cipher += char(int(s[i] + a - 65) % 26 + 65);
        } 
        else 
        {
            cipher += char(int(s[i] + a - 97) % 26 + 97);
        }
    }
    return cipher;
}

string decry(string s, int a) 
{
    string deyr;
    for(int i = 0; i < s.length(); i++)
     {
        if(isupper(s[i])) 
        {
            deyr += char((int(s[i] - a - 65 + 26) % 26) + 65);
        } 
        else 
        {
            deyr += char((int(s[i] - a - 97 + 26) % 26) + 97);
        }
    }
    return deyr;
}

int main() 
{
    string txt;
    int key, ch;
    
    cout << "Enter Key: ";
    cin >> key;
    
    cout << "Enter your choice (1 for encryption, 2 for decryption): ";
    cin >> ch;
    
    if(ch == 1) 
    {
        cout << "Enter plain text: ";
        cin >> txt;
        cout << "Cipher text: " << encry(txt, key) << endl;
    } 
    else if(ch == 2) 
    {
        cout << "Enter cipher text: ";
        cin >> txt;
        cout << "Decrypted text: " << decry(txt, key) << endl;
    } 
    else 
    {
        cout << "Invalid choice." << endl;
    }
    
    return 0;
}
