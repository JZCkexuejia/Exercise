#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); //Use the current time as a random seed

    for (int n = 5; n <= 100; n += 5) { //n Increases by 5 each time from 5 to 100
        int c = 0;

        for (int i = 0; i < 100; i++) { //Perform 100 tests
            int birthdays_flag[365] = {0}; //Initialize the birthday tag array and count
            int count = 0;
            //Each person chooses a birthday
            for (int j = 0; j < n; j++) {
                int b = rand() % 365;
                if (!birthdays_flag[b]) {
                    birthdays_flag[b] = true;
                    count++;
                }
            }
          //If there is a duplicate birthday, add 1 to the counter
            if (count < n) {
                c++;
            }
        }

        double probability = 1.0*c / 100; //calculate probability
        cout << n << "," << c << "," << probability << endl;
    }

    return 0;
}

