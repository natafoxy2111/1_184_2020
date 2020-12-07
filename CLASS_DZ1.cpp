#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
class Rabbit{
private:
    string name;
    string gender;
    int age;
public:
    Rabbit(string n, string g, int a) {
        name = n;
        gender = g;
        age = a;
    }
    Rabbit(string n, int a) {
        name = n;
        age = a;
        gender = "male";
    }
    void getView() {
        string view = R""""(
(\___/)
(='.'=)
(")_(")
)"""";
        cout << view << endl;
    }
    void getViewtwo() {
        string view = R""""(
(\__/)
(O.o )
(> < )
)"""";
        cout << view << endl;
    }
    void Name() {
        cout << "The rabbit's name is " << name << "." << endl;
    }
    void Age() {
        cout << "She is " << age << " years old." << endl;
    }
    void Gender() {
        cout << "Rabbit gender: " << gender << "." << endl;
    }
};
int main(){
    Rabbit one("Laki", "female", 2);
    Rabbit two("Kirya", 1);
    one.Name();
    one.Gender();
    one.Age();
    one.getView();
    two.Name();
    two.Gender();
    two.Age();
    two.getViewtwo();
    return 0;
}