#include<iostream>

using namespace std;

char toUpperCase(char in);
string toUpperCase(string in);

const string lower = "abcdefghijklmnopqrstuvwxyz";
const string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int cows(string word, string guess);
int bulls(string word, string guess);

int main()
{
    bool playagain = true;
    while(playagain)
    {
        string word, guess;
        cout << "Player 1: Please enter a word." << endl;
        cin >> word;
        cout << "Player 2: Please guess Player 1's word." << endl;
        cin >> guess;
        word = toUpperCase(word);
        guess = toUpperCase(guess);
        cout << "Cows: " << cows(word, guess) << " Bulls: " << bulls(word, guess);
        cout << endl;
        cout << "Play again? [y/n]" << endl;
        char result;
        cin >> result;
        playagain = (result == 'y' || result == 'Y');
    }
}

int cows(string word, string guess)
{
    int cow = 0;
    for (int ii = 0; ii < word.size(); ii++)
    {
        for (int iii = 0; iii < guess.size(); iii++)
        {
            if (word[ii] == guess[iii])
            {
                cow++;
                break;
            }
        }
    }
    return cow;
}

int bulls(string word, string guess)
{
    int bull = 0;
    int size = (word.size() < guess.size()) ? word.size() : guess.size();
    for (int ii = 0; ii < word.size(); ii++)
    {
        if (word[ii] == guess[ii])
            bull++;
    }
    return bull;
}

string toUpperCase(string in)
{
    for (int ii = 0; ii < in.size(); ii++)
    {
        in[ii] = toUpperCase(in[ii]);
    }
    return in;
}

char toUpperCase(char in)
{
    for (int ii = 0; ii < 26; ii++)
    {
        if (in == lower[ii])
            return upper[ii];
    }
    return in;
}
