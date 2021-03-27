/*
    List the titles of all games, add the title of the game, remove the title.
    Enter a list of your favorite games. (vector and iterator)
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std; // better to write std :: cout .....


int main()
{
    vector <string> listGames;
    vector <string> ::iterator myIterator;
    string dels;
    string start;
    string choice;
    string add_games;
    int in;
    bool go_while = true;

    // list favirite games
    listGames.push_back("CS");
    listGames.push_back("Dota2");
    listGames.push_back("WOW");

    cout << "Favorite games(vector): \n";
    for (int i = 0; i < listGames.size(); ++i)
    {
        cout << i + 1 << ": " << listGames[i] << endl;
    }

    cout << "\nFavorite games(iterator): \n";
    for (myIterator = listGames.begin(); myIterator != listGames.end(); ++myIterator)
    {
        cout << *myIterator << endl;
    }

    cout << "\n";
    cout << "Hello, do you want to create a list of your favorite games (yes/no) ?\n";
    cin >> start;

    if (start == "yes" || start == "y")
    {
        while (go_while)
        {
            cout << "\nDo you want to add your favorite game or remove it (add/del/list) ?\n";
            cin >> choice;
            if (choice == "add" || choice == "a")
            {
                cout << "Please, see your favorite games: ";
                cin >> add_games;
                cout << "\n";
                listGames.insert(listGames.begin(), add_games);
                cout << "The list has been replenished and now look like this: \n";
                for (int i = 0; i < listGames.size(); ++i)
                {
                    cout << i + 1 << ": " << listGames[i] << endl;
                }
                continue;
            }
            if (choice == "del" || choice == "d")
            {
                cout << "What do you want to remove from the list?: \n";
                for (int i = 0; i < listGames.size(); ++i)
                {
                    cout << i + 1 << ": " << listGames[i] << endl;
                }
                cout << "Select position: ";
                cin >> in;
                cout << "This game will be removed: " << listGames[in - 1] << endl;
                listGames.erase(listGames.begin() + (in - 1));
                continue;
            }
            if (choice == "list" || choice == "l")
            {
                cout << "Favorite games(vector): \n";
                for (int i = 0; i < listGames.size(); ++i)
                {
                    cout << i + 1 << ": " << listGames[i] << endl;
                }

                cout << "\nFavorite games(iterator): \n";
                for (myIterator = listGames.begin(); myIterator != listGames.end(); ++myIterator)
                {
                    cout << *myIterator << endl;
                }
                continue;
            }
            else
            {
                cout << "Goodbye, my freind...\n\n\n\n";
                go_while = false;
            }
        }
    }
    else
    {
        cout << "Goodbye, my freind...\n\n\n\n";
    }
    return 0;
}