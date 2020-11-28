#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

string catAnimation[8] =
{
R"(
                                           .--.
                                           `.  \
                                             \  \
                                              .  \
                                              :   .
                                              |    .
                                              |    :
                                              |    |
..._  ___                                       |    |
`."".`''''""--..___                              |    |
,-\  \             ""-...__         _____________/    |
/ ` " '                    `""""""""                  .
\                                                      L
(>                                                      \
/                                                         \
\_    ___..---.                                            L
`--'         '.                                           \
             .                                           \_
            _/`.                                           `.._
         .'     -.                                             `.
        /     __.-Y     /''''''-...___,...--------.._            |
       /   _."    |    /                ' .      \   '---..._    |
      /   /      /    /                _,. '    ,/           |   |
      \_,'     _.'   /              /''     _,-'            _|   |
              '     /               `-----''               /     |
              `...-'                                       !_____))",

R"(                                                                          .--.
                                                                            J    L
                                                                            |    |
                                                                            F    F
                                                                           J    J
                                                                          /    /
                                                                         /    /
                                                                       .'    /
                                               .--""--._              /     /
                                           _.-'         `-.          /     /
                                __       .'                `.       /     /
                             _-'-."`-.  J                    \     /     /
                        .---(  `, _   `'|                     `.  J     /
                          `. )                                  ""     /
                           F                                          J
                           L                  |                      J
                           ` (/     /         |                      F
                            |    ._'          |                      |
                           /'`--'`.           |                      J
                           '||\   |-._        `.  ___.               |
                             `     \  `.        |/    `-            J
                                    F   L       /       J           /
                                    |   J      J         F         J
                                    |    \     J         |        J
                                    |    |L    J         J        J
                                    |    FJ    |          L       |
                                    |   J  L   |          L\      F
                                    |   F  |   |           L\    J
                                    F  F   |   |           | L   |
                                   J  J    |   |           | |   F
                                   /  )    F  J            F F  J
                                  ( .'    )   F           J J  F
                                  `"     (   J           /.'  J
                                          `-'           ||-' |)
                                                          '-')",

R"(
                                                             .-""-.__
                                           _.--"""--._____.-'        `-._
                                       .-'                              `.
                                     .'                        _.._       `.
                                    /                       J""    `-.      \
                                   /                         \        `-.    `.
                                 .'          |               F           \     \
                                 F           |              /             `.    \
                           _.---<_           J             J                `-._/
                         ./`.     `.          \          J F
                      __/ F  )                 \          \
                    <     |                \    >.         L
                     `-.                    |  J  `-.      )
                       J         |          | /      `-    F
                        \  o     /         (|/        //  /
                         `.    )'.          |        /'  /
                          `---'`\ `.        |        /  /
                          '|\\ \ `. `.      |       /( /
                             `` `  \  \     |       \_'
                                    L  L    |     .' /
                                    |  |    |    (_.'
                                    J  J    F
                                    J  J   J
                                    J  J   J
                                    J  J   F
                                    |  |  J
                                    |  F  F
                                    F /L  |
                                    `' \_)'
)",

R"(
                                       ______  .----.___
                                   .--'      `' `-      `-.
                                .-'                        `.
                            __.'-                            `.
                          .'                                   `.
               _.---._   /                                       `.
             .'       "-'                                          `.
         .--'                                              .         `.
         `._.-"                                             \._        `.
           <_`-.                            .'              |  `.        `.
            |`                   .'     .--'._            .'     `-.       `.
            |         |/         |   .-'      `---.__.---'          `.       `.
             \``    _.-          | .'                                 `.       `.
              L   //F `.         |/                                     `-.      \
              |"""\J    \        |                                         `-.    \
               |||\F   .'\       |                                            `-._/
                |`J  .'   \|     F
                ` F |      )    J
                 J  F      |    J
                 |  F      |    F
                 \_/       |   J
                           |   )
                           F  J
                          J   |
                         ')   F
                         /.   |
                         ', J'
                         `-''
)",

R"(
                                             _.,._./)
                                         .-''        `-.
              ___                      .'               `.
       ____.-'   `--.____             /                 <)
     <_.  /__---.    `.  `-""------.-'                   L
      `. //  `,                                        -.|
        \ \    )                                         `._
         | )                                                `-.
         J                                                     `-.
          L  _.      /         \                      _           `--.__
          `. \)     /           `.                     `-._             `-.___
            \    .'              |                   _.'   `-._               `-.
             |"-'\`-._    \      |     .--._    _.--'          ``-.___           )
             J  J\`.  `-._ \     |_.--'     """"                      `----.___.'
              L  )        "J    J
               `"           L   |
                            ( ...\
                             \\\\'
                              `-'
)",

R"(
                                               / )
                                              (   )
                                              J   (
                                               \   \
                                           .')_.F   \
                                           (_)'      \
                                          .'         /
                                         /          /
              F-.                       /           `.
              )  `._                 _.'/             \
             /  -   `-------.___'`-'`                  L
            /                  )                       |
           /_.-.                                       )
          --._                                    .' .-.`.
           \  '                                   | /   \ )
         -''`.                                    \ |    Y
       .'.'/| `--'                               .'`.\__/
        ' '      J                            .-'
                  \                         .'
               _.-'--.           ___     _.'
            .-'       `-    )--'``  `````
          .'    ._    __.--'
         (  _.'  """"
           ""
)",

R"(
                                                          .-.        .-.
                                                          -  )      .'  )
                                               __        /  /      /   /
                     .--.                   .-'  """"-._/__(_____.'   /
                  .-'  _)          __     .'  ___.--'                J
                 /  `-.,   .------'  `--.J---'                      /
                 F      `-<                                       .'
                 `.        `.                                 .--'
                 .'|         \                              .'
               .'            J                             /
              /              /                            /
             /              '                           -'
           .'                                          (
          /                               __.----'      \
         /                         __.---'       `.      L
      .-'     _.              .--''                \     \
     /       '             .-'                      \     \
     `--.       /`  __.---'                          \     \
         \     /  .'                                  \     \
         -`.    _/                                     \     \
          ' \_,-'-._                                    \     L
                \`.`-                                    `.    L
                                                           \   |
                                                            L   L
                                                            |   )
                                                            \  /
                                                             ""
)"
};

class cat {
public:
    cat(int age) : cat(age, false, 0) {}
    
    cat(int age, bool animated, int speed) {
        this->age = age;
        while (age < 1 || age > 20) {
            cout << "enter valid age between 1...20 : ";
            cin >> this->age;
            age = this->age;
        }
    }
    
    void display() {
        cout << "cat's age : " << age << endl;
        
        if (!animated) {
            cout << catAnimation[0] << endl;
        } else if (speed > 0) {
            cout << catAnimation[0] << endl;
            this_thread::sleep_for(std::chrono::milliseconds(2000));
            for (int i = 1; i < 8; i++) {
                cout << catAnimation[i] << endl;
                this_thread::sleep_for(std::chrono::milliseconds(speed));
            }
        }
    }
    
    void setAnimation(bool animated) {
        this->animated = animated;
    }
    
    void setSpeed(int speed) {
        this->speed = speed;
    }
    
private:
    int age;
    bool animated;
    int speed;
};

int main() {
    int age;
    cout << "enter cat's age : ";
    cin >> age;
    cat *cat1 = new cat(age);
    
    char answer;
    bool validAnswer = false;
    while (!validAnswer) {
        cout << "Is it moving? (y/n) :";
        cin >> answer;
        if (answer == 'y') {
            cat1->setSpeed(600);
            cat1->setAnimation(true);
            validAnswer = true;
        } else if (answer == 'n') {
            cat1->setAnimation(false);
            validAnswer = true;
        } else {
            cout << "invalid input" << endl;
        }
    }
    
    cat1->display();
}
