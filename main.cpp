#include <iostream>
#include <string>
using namespace std;

int main() {
  int secim, bot;
  while (true) {
    cout << "Taş kağıt makas\n";
    cout << "Taş için : 1\n";
    cout << "Kağıt için : 2\n";
    cout << "Makas için : 3\n";
    cin >> secim;
    bot = rand() % 3 + 1;
    // win
    if (secim == 1 && bot == 3) {
      cout << "Bot : Makas\n";
      cout << "Sen : Taş\n";
      cout << "Kazandın\n";
    } else if (secim == 2 && bot == 1) {
      cout << "Bot : Taş\n";
      cout << "Sen : Kağıt\n";
      cout << "Kazandın\n";
    } else if (secim == 3 && bot == 2) {
      cout << "Bot : Kağıt\n";
      cout << "Sen : Makas\n";
      cout << "Kazandın\n";
    } else if (secim == 1 && bot == 2) { // Lose
      cout << "Bot : Kağıt\n";
      cout << "Sen : Taş\n";
      cout << "Kaybettin\n";
    } else if (secim == 2 && bot == 3) {
      cout << "Bot : Makas\n";
      cout << "Sen : Kağıt\n";
      cout << "Kaybettin\n";
    } else if (secim == 3 && bot == 1) {
      cout << "Bot : Taş\n";
      cout << "Sen : Makas\n";
      cout << "Kaybettin\n";
    } else if (secim == 1 && bot == 1) { // Draw
      cout << "Bot : Taş\n";
      cout << "Sen : Taş\n";
      cout << "Berabere\n";
    } else if (secim == 2 && bot == 2) {
      cout << "Bot : Kağıt\n";
      cout << "Sen : Kağıt\n";
      cout << "Berabere\n";
    } else if (secim == 3 && bot == 3) {
      cout << "Bot : Makas\n";
      cout << "Sen : Makas\n";
      cout << "Berabere\n";
    }
  }
}
