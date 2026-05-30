#include <iostream>
#include <string>

using namespace std;

void printScore(string playername, int score, string grade = "B") {
    cout << playername << ", " << score << ", " << grade << endl;
}

int main() {

    printScore("Shilpa", 90);
    printScore("Prashik", 89);
    printScore("Sejal", 88);
    printScore("Rahul", 95, "A");

    return 0;
}