#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>    
using namespace std;

enum playgame { stone = 1, paper = 2, sessior = 3 };
struct game
{
    string name;
    int theround = 0;
    int playerwins = 0;
    int computerwins = 0;

};
int randomnumber(int from , int to)
{
    int randomnumber = 0;
    randomnumber = rand() % (to - from + 1) + from;
    return randomnumber;
}

game playgame(game &game1)
{

    int choose = 0;
    int randomcom = 0;
    game1.theround = 0;
    game1.playerwins = 0;
    game1.computerwins = 0;
    cout << "what is your name " << endl;
    cin >> game1.name;
    cout << "enter the rounds do you want to play "<<endl;
    cin >> game1.theround;
    for (int i = 0;i < game1.theround;i++)
    {
        randomcom = randomnumber(1, 3);
        cout << "please choose one of (1) stone (2) paper (3) sessior " << endl;
        cin >> choose;
        cout << endl;
        cout << game1.name <<" choose " << choose << endl;
        cout <<"computer choose "<< randomcom<<endl;
        cout << "____________________________________" << endl;
        if (choose == playgame::stone && randomcom == playgame::sessior)
        {
            system("color 2F");
            game1.playerwins++;
        }
        else if (choose == playgame::stone && randomcom == playgame::paper)
        {
            cout << "\a";
            system("color 4F");
            game1.computerwins++;
        }
        else if (choose == playgame::stone && randomcom == playgame::stone)
        {
            system("color 6F");
            game1.playerwins;
            game1.computerwins;
        }
        else if (choose == playgame::sessior && randomcom == playgame::sessior)
        {
            system("color 6F");
            game1.playerwins;
            game1.computerwins;
        }
        else if (choose == playgame::sessior && randomcom == playgame::paper)
        {
            system("color 2F");
            game1.playerwins++;
        }
        else if (choose == playgame::sessior && randomcom == playgame::stone)
        {
            cout << "\a";
            system("color 4F");
            game1.computerwins++;
        }
        else if (choose == playgame::paper && randomcom == playgame::paper)
        {
            system("color 6F");
            game1.playerwins;
            game1.computerwins;
        }
        else if (choose == playgame::paper && randomcom == playgame::stone)
        {
            system("color 2F");
            game1.playerwins++;
        }
        else if (choose == playgame::paper && randomcom == playgame::sessior)
        {
            cout << "\a";
            system("color 4F");
            game1.computerwins++;
        }
        cout << game1.name << " score  " << game1.playerwins <<endl ;
        cout << "com score  " << game1.computerwins << endl;

    }
    return game1;
}
void printscoregame(game game1)
{
    cout << "_______________________________" << endl;
    cout << "your name " << game1.name<<endl;
    cout << "your score " << game1.playerwins<<endl;
    cout << "your score com " << game1.computerwins<<endl;
    cout << "_______________________________" << endl;


}
float readposnumber(string message)
{
    float num = 0;
    do
    {
        cout << message << "?";
        cin >> num;
    } while (num <= 0);
    return num;
}

int main()
{
    
    game game1;
    playgame(game1);
    printscoregame(game1);
}

