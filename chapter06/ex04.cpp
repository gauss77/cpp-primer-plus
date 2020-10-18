#include <iostream>

const int strsize = 20;
const int ArSize = 5;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    using namespace std;
    
    bop arrbop[ArSize]{
        {"Wimp Macho", "Engineer", "MACHO", 1},
        {"Raki Rhodes", "Junior Programmer", "RAKI", 2},
        {"Celia Laiter", "Director", "MIPS", 0},
        {"Hoppy Hipman", "Analyst Trainee", "HIPMAN", 1},
        {"Pat Hand", "Manager", "LOOPY", 2}
    };

    cout << "Benevolent Order of Programmers Report\n"
            " a. display by name\t b. display by title\n"
            " c. display by bopname\t d. display by preference\n"
            " q. quit\n";
    cout << "Enter your choice: ";
    char ch;
    cin >> ch;

    while(ch !='q')
    {
        switch (ch)
        {
            case 'a': {
                    for(int i = 0; i < ArSize; i++)
                        cout << arrbop[i].fullname << endl;
                    break; }
            case 'b': {
                    for(int i = 0; i < ArSize; i++)
                        cout << arrbop[i].title << endl;
                    break; }
            case 'c': {
                    for(int i = 0; i < ArSize; i++)
                        cout << arrbop[i].bopname << endl;
                    break; }
            case 'd': {
                    for(int i = 0; i < ArSize; i++)
                        switch (arrbop[i].preference)
                        {
                            case 0: cout << arrbop[i].fullname << endl; break;
                            case 1: cout << arrbop[i].title << endl; break;
                            case 2: cout << arrbop[i].bopname << endl; break;
                        }
                    break; }
        }
        cout << "Next choice: ";
        cin >> ch;
    }

    cout << "Bye!" << endl;

    return 0;
}
