#include<iostream>
#include<string>
#include<time.h>

using namespace std;

int main()
{
    int guessCount = 0;
    int minNumber = 0;
    int maxNumber = 0;
    int randomNumber = 0;
    string input = "";
    bool bIsRunning = true;

    while(bIsRunning)
    {
        cout<<"***number guess game***\n";
        
        cout<< "enter the number of gusses: ";
        getline(cin, input);
        guessCount = stoi(input);

        cout<< "enter the minimum number: ";
        getline(cin, input);
        minNumber = stoi(input);

        cout<<"enter the maximum number: ";
        getline(cin, input);
        maxNumber = stoi(input);

        srand((unsigned) time(0));
        randomNumber = rand() % (maxNumber - minNumber +1) + minNumber;

        for(int i = 0; i<guessCount; ++i)
        {
            int guess = 0;

            cout<< "\n enter your guess: ";
            getline(cin, input);
            guess = stoi(input);

            if(guess == randomNumber)
            {
                cout<< "well done, you gueesed the number!\n";
                break;
            }

            int guessesRemaining = guessCount - (i + 1);
            cout<< "your guess was too " << (guess < randomNumber ? "low." : "high.");
            cout<< "you have " << guessesRemaining << (guessesRemaining > 1 ? " guesses" : " guess") << " remaining";
        }

        cout << "\n enter 0 to exit, or any number to play again: ";
        getline(cin, input);
        if(stoi(input) == 0)
        {
            bIsRunning = false;
        }
    }
}