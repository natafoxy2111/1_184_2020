#include <iostream>
#include <cstring>
using namespace std;

class Fox
{
private:
    string name;
    int weight;
    int age;
    string From; // откуда пришла Лиса
public:
    Fox()
    {
        this->name = name;
        this->From = From;
    }

    void GetView()
    {
        string view = R""""(
                                                                     ,-,
                                                             _.-=;~ /_
                                                          _-~   '     ;.
                                                      _.-~     '   .-~-~`-._
                                                _.--~~:.             --.____88
                              ____.........--~~~. .' .  .        _..-------~~
                     _..--~~~~               .' .'             ,'
                 _.-~                        .       .     ` ,'
               .'                                    :.    ./
             .:     ,/          `                   ::.   ,'
           .:'     ,(            ;.                ::. ,-'
          .'     ./'.`.     . . /:::._______.... _/:.o/
         /     ./'. . .)  . _.,'               `88;?88|
       ,'  . .,/'._,-~ /_.o8P'                  88P ?8b
    _,'' . .,/',-~    d888P'                    88'  88|
 _.'~  . .,:oP'        ?88b              _..--- 88.--'8b.--..__
:     ...' 88o __,------.88o ...__..._.=~- .    `~~   `~~      ~-._ Seal _.
`.;;;:='    ~~            ~~~                ~-    -       -   -

)"""";
        cout << view << endl;
    }

    void Input()
    {
        cout << "Name: "; cin >> name; cout << endl;
        cout << "Age: "; cin >> age; cout << endl;
        cout << "Weight: "; cin >> weight; cout << endl;
        cout << "Where did the" << name << " come from? "; cin >> From;
    }

    void Display()
    {
        cout << name << "-fox is moving." << "Age: " << age << endl << " Weight: " << weight << " " << name << "-fox come from " << From << endl;
    }

    ~Fox() {}
};


int main()
{
    Fox fox_1;
    Fox fox_2;
    fox_1.GetView();
    cout << endl << endl;
    fox_1.Input();
    fox_1.Display();
    cout << endl;
    fox_2.Input();
    fox_2.Display();

}

