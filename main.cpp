#include <iostream>
#include <cstdlib>

using namespace std;

int a, b, c, d, e, t, answer;

void num_gen() {
    srand (time(NULL));
    a = rand() % 15;
    b = rand() % 15;
}

void num_gen2() {
    srand (time(NULL));
    a = rand() % 15;
    b = rand() % 15;
}

void main_game() {
    cout << "Hello! Let's play a game!\n";
    cout << "What's " << a << " * " << b << "?" << endl;
    cin >> answer;
    if (answer == a * b) {
        cout << "Correct\n";
    } else {
        cout << "Wrong!\n";
    } 
}
void main_game2() {
    
 cout << "Let's play another game!\n";
    cout << "What's " << a << " * " << b << "?" << endl;
    cin >> answer;
    if (answer == a * b) {
        cout << "Correct\n";
    } else {
        cout << "Wrong!\n";
    } 
}

void sec_game() {
    
}

int main()
{
    num_gen();
    main_game();
    num_gen2();
    main_game2();
    return 0;
}







