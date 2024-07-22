#include <iostream>
using namespace std;

int main() {
    int grades[3][3] = {{85, 90, 92}, {78, 80, 85}, {92, 95, 98}};
    int sum[3] = {0, 0, 0};
    double average[3] = {0.0, 0.0, 0.0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i] += grades[i][j];
        }
        average[i] = static_cast<double>(sum[i]) / 3;
    }

    cout << "Student 1 average: " << average[0] << endl;
    cout << "Student 2 average: " << average[1] << endl;
    cout << "Student 3 average: " << average[2] << endl;

    return 0;
}