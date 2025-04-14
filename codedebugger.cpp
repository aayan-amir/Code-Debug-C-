#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

string begbug[] = {
    "int main() {\n  cout << 'Hello World';\n  return 0;\n}",
    "int main() {\n  int x = 10\n  cout << x;\n  return 0;\n}",
    "int main() {\n  for(int i = 0; i < 5; i++) {\n    cout << i;\n  }\n}",
    "int main() {\n  int a = 5;\n  int b = 10;\n  cout << a + b;\n  return 0;\n}",
    "int main() {\n  cout << 'This is a test';\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  if (x = 10) {\n    cout << 'x is 10';\n  }\n  return 0;\n}",
    "int main() {\n  cout << 'Hello';\n  cout << 'World';\n  return 0;\n}",
    "int main() {\n  int x = 0;\n  while (x < 5) {\n    cout << x;\n    x++;\n  }\n}",
    "int main() {\n  int x = 5;\n  cout << 'Value of x is: ' << x;\n  return 0;\n}",
    "int main() {\n  cout << 'Hello, World!';\n  return 0;\n}"
};

string begsol[] = {
    "int main() {\n  cout << \"Hello World\";\n  return 0;\n}",
    "int main() {\n  int x = 10;\n  cout << x;\n  return 0;\n}",
    "int main() {\n  for(int i = 0; i < 5; i++) {\n    cout << i;\n  }\n  return 0;\n}",
    "int main() {\n  int a = 5;\n  int b = 10;\n  cout << a + b;\n  return 0;\n}",
    "int main() {\n  cout << \"This is a test\";\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  if (x == 10) {\n    cout << \"x is 10\";\n  }\n  return 0;\n}",
    "int main() {\n  cout << \"Hello\";\n  cout << \"World\";\n  return 0;\n}",
    "int main() {\n  int x = 0;\n  while (x < 5) {\n    cout << x;\n    x++;\n  }\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  cout << \"Value of x is: \" << x;\n  return 0;\n}",
    "int main() {\n  cout << \"Hello, World!\";\n  return 0;\n}"
};

string interbug[] = {
    "int main() {\n  for(int i = 0; i < 5; i++) {\n    cout << i;\n  }\n}",
    "int main() {\n  int x = 5;\n  if (x = 10) {\n    cout << 'x is 10';\n  }\n  return 0;\n}",
    "int main() {\n  int a = 5;\n  int b = 10;\n  cout << a * b;\n  return 0;\n}",
    "int main() {\n  int arr[5] = {1, 2, 3, 4, 5};\n  for(int i = 0; i <= 5; i++) {\n    cout << arr[i];\n  }\n}",
    "int main() {\n  int x = 10;\n  while (x > 0) {\n    cout << x;\n    x--;\n  }\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  cout << 'Value of x is: ' << x;\n  return 0;\n}",
    "int main() {\n  int arr[5] = {1, 2, 3, 4, 5};\n  for(int i = 0; i < 5; i++) {\n    cout << arr[i];\n  }\n  return 0;\n}",
    "int main() {\n  int a = 5;\n  int b = 10;\n  cout << a / b;\n  return 0;\n}",
    "int main() {\n  int x = 0;\n  do {\n    cout << x;\n    x++;\n  } while (x < 5);\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  if (x > 0) {\n    cout << 'x is positive';\n  }\n  return 0;\n}"
};

string intersol[] = {
    "int main() {\n  for(int i = 0; i < 5; i++) {\n    cout << i;\n  }\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  if (x == 10) {\n    cout << \"x is 10\";\n  }\n  return 0;\n}",
    "int main() {\n  int a = 5;\n  int b = 10;\n  cout << a * b;\n  return 0;\n}",
    "int main() {\n  int arr[5] = {1, 2, 3, 4, 5};\n  for(int i = 0; i < 5; i++) {\n    cout << arr[i];\n  }\n  return 0;\n}",
    "int main() {\n  int x = 10;\n  while (x > 0) {\n    cout << x;\n    x--;\n  }\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  cout << \"Value of x is: \" << x;\n  return 0;\n}",
    "int main() {\n  int arr[5] = {1, 2, 3, 4, 5};\n  for(int i = 0; i < 5; i++) {\n    cout << arr[i];\n  }\n  return 0;\n}",
    "int main() {\n  int a = 5;\n  int b = 10;\n  cout << a / b;\n  return 0;\n}",
    "int main() {\n  int x = 0;\n  do {\n    cout << x;\n    x++;\n  } while (x < 5);\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  if (x > 0) {\n    cout << \"x is positive\";\n  }\n  return 0;\n}"
};

string advbug[] = {
    "int main() {\n  int* ptr = nullptr;\n  *ptr = 10;\n  cout << *ptr;\n  return 0;\n}",
    "int main() {\n  int arr[3] = {1, 2, 3};\n  cout << arr[3];\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  int& ref;\n  ref = x;\n  cout << ref;\n  return 0;\n}",
    "int main() {\n  int x = 0;\n  while (x > -1) {\n    cout << x;\n    x++;\n  }\n  return 0;\n}",
    "int main() {\n  int x = 10;\n  for (int i = 0; i < x; i--) {\n    cout << i;\n  }\n  return 0;\n}"
};

string advsol[] = {
    "int main() {\n  int* ptr = nullptr;\n  if (ptr) {\n    *ptr = 10;\n    cout << *ptr;\n  } else {\n    cout << \"Pointer is null\";\n  }\n  return 0;\n}",
    "int main() {\n  int arr[3] = {1, 2, 3};\n  cout << arr[2];\n  return 0;\n}",
    "int main() {\n  int x = 5;\n  int& ref = x;\n  cout << ref;\n  return 0;\n}",
    "int main() {\n  int x = 0;\n  while (x <= 10) {\n    cout << x;\n    x++;\n  }\n  return 0;\n}",
    "int main() {\n  int x = 10;\n  for (int i = 0; i < x; i++) {\n    cout << i;\n  }\n  return 0;\n}"
};

string cleanans(string& str) {
    string cleaned = str;
    cleaned.erase(remove(cleaned.begin(), cleaned.end(), ' '), cleaned.end());
    cleaned.erase(remove(cleaned.begin(), cleaned.end(), '\n'), cleaned.end());
    return cleaned;
}

void menu() {
    cout << "\n\n==== Code Debugging Simulator ====\n";
    cout << "1. Beginner Level\n";
    cout << "2. Intermediate Level\n";
    cout << "3. Advanced Level\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

void playGame(int level, int& attempts, int& correct) {
    int codenum;
    string userFix, ans;
    system("color F4");

    if (level == 1) {
        codenum = rand() % 10;
        cout << "\n\nFix the following code snippet:\nNote: Do not worry about space, new lines or indentation. Type '==again' to clear your input and start over!\n\n" << begbug[codenum] << endl;

        cout << "\nEnter your fix (type 'done' to finish):\n";

        userFix = "";
        while (getline(cin, ans) && ans != "done") {
            if (ans == "==again") {
                userFix = "";
                cout << "Cleared input. Start again:\n";
                continue;
            }
            userFix += ans + "\n";
        }

        attempts++;
        if (cleanans(userFix) == cleanans(begsol[codenum])) {
            system("color F2");

            cout << "\nCongratulations! You fixed the bug!\n";
            correct++;
        }
        else {
            cout << "\nIncorrect fix. Here's the correct solution:\n" << begsol[codenum] << endl;
        }
    }
    else if (level == 2) {
        codenum = rand() % 10;
        cout << "\n\nFix the following code snippet:\nNote: Do not worry about space, new lines or indentation. Type '==again' to clear your input and start over!\n\n" << interbug[codenum] << endl;

        cout << "\nEnter your fix (type 'done' to finish):\n";

        userFix = "";
        while (getline(cin, ans) && ans != "done") {
            if (ans == "==again") {
                userFix = "";
                cout << "Cleared input. Start again:\n";
                continue;
            }
            userFix += ans + "\n";
        }

        attempts++;
        if (cleanans(userFix) == cleanans(intersol[codenum])) {
            system("color F2");
            cout << "\nCongratulations! You fixed the bug!\n";
            correct++;
        }
        else {
            cout << "\nIncorrect fix. Here's the correct solution:\n" << intersol[codenum] << endl;
        }
    }
    else if (level == 3) {
        codenum = rand() % 5;
        cout << "\n\nFix the following code snippet:\nNote: Do not worry about space, new lines or indentation. Type '==again' to clear your input and start over!\n\n" << advbug[codenum] << endl;

        cout << "\nEnter your fix (type 'done' to finish):\n";

        userFix = "";
        while (getline(cin, ans) && ans != "done") {
            system("color F2");
            if (ans == "==again") {
                userFix = "";
                cout << "Cleared input. Start again:\n";
                continue;
            }
            userFix += ans + "\n";
        }

        attempts++;
        if (cleanans(userFix) == cleanans(advsol[codenum])) {
            cout << "\nCongratulations! You fixed the bug!\n";
            correct++;
        }
        else {
            cout << "\nIncorrect fix. Here's the correct solution:\n" << advsol[codenum] << endl;
        }
    }
    else {
        cout << "\nInvalid level. Returning to the menu.\n";
    }
}

int main() {
    int choice;
    int attempts = 0, correct = 0;

    srand(static_cast<unsigned>(time(0)));

    do {
        menu();
        SendMessage(GetConsoleWindow(), WM_SYSCOMMAND, SC_MAXIMIZE, 0);
        cin >> choice;
        cin.ignore();

        if (choice == 4) {
            cout << "\nThank you for playing! Your score:\n";
            cout << "Total attempts: " << attempts << "\nCorrect attempts: " << correct << "\n";
            break;
        }
        else if (choice >= 1 && choice <= 3) {
            playGame(choice, attempts, correct);
        }
        else {
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (true);

    return 0;
}