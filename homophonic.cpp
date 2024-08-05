#include<iostream>
#include<string>
using namespace std;

char encode(char element)
{
    string key[26] = { "QWE", "RTY", "UIO", "PAS", "DFG", "HJK", "LZX", "CVB", "NMQ", "WER",
        "TYU", "IOP", "ASD", "FGH", "JKL", "ZXC", "VBN", "MQW", "ERT", "YUI",
        "OPA", "SDF", "GHJ", "KLZ", "XCV", "BNM"};

    srand(time(0));
    int ind = rand() % 3;
    char letter = int(toupper(element)) - 65;
    char ch;

    ch = key[letter][ind];

    if(islower(element))
        ch = tolower(ch);

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
        else{
            char element = encode(plainText[i]);
            cipherText += element;
        }
    }
    cout<<"Cipher Text : "<<cipherText;
    return 0;
}