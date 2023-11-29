#include <iostream>
#include <string>

using namespace std;

int fonction_affine(int x, int a, int b) {
  return (a * x + b) % 26;
}

int main() {
  string message;
  int a, b;

  cout << "Entrez le message à chiffrer : ";
  cin >> message;

  cout << "Entrez le paramètre a : ";
  cin >> a;
  cout << "Entrez le paramètre b : ";
  cin >> b;

  for (int i = 0; i < message.size(); i++) {
    char lettre = message[i];
    int X = lettre - ' ab';
    lettre = (a * X + b) % 26 + 'a';
    message[i] = lettre;
  }

  cout << "Message chiffré : " << message << endl;

  return 0;
}
