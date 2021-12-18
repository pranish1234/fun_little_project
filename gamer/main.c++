#include <iostream>
using namespace std;
int ch_x = 2, ch_y = 9;
int width = 50, height = 10;
bool over = false;
int step = 2;

void draw()
{
    system("cls");
    //map
    for (int i = 1; i < width; i++)
    {
        cout << " ";
    }

    for (int i = 1; i < height; i++)
    {
        for (int j = 1; j < width; j++)
        {
            if (j == 1)
                cout << " ";
            //thecharacter
            if (i == ch_y && j == ch_x)
                cout << "O";
            //the character moving forward
            if (ch_x == step)
                ch_x++;
            //thecharacter end
            else
                cout << " ";

            if (j == width - 1)
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < width; i++)
    {
        cout << "#";
    }
    //the helper for character to move forward
    if (step != ch_x)
    {
        step++;
    }
    //the character position reseter
    if (step == width)
    {
        step = 2;
        ch_x = 2;
    }
}
int main()
{
    while (!over)
    {
        draw();
    }
    return 0;
}