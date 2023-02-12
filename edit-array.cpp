#include <iostream>

using namespace std;

int main() {
  int myData[10];
  for (int i = 0; i < 10; i++) {
    myData[i] = 1;
  }
  do {
    for (int i = 0; i < 10; i++) {
      cout << myData[i] << " ";
    }
    cout << endl;
    int index;
    int new_value;
    cin >> index >> new_value;
    if (index < 10 && index >= 0) {
      myData[index] = new_value;
    } else {
      cout << "Invalid index" << endl;
      break;
    }
  } while (true);
  return 0;
}
