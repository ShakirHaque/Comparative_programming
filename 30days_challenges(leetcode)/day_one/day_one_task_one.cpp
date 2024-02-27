#include <bits/stdc++.h>
using namespace std;
int main() {
    int array[] = {2, 7, 11, 15};
    int target = 9;
    for (int i = 0; i < sizeof(array); i++) {
        for (int j = 1; j < sizeof(array); j++) {
            if (array[i] + array[j] == target) {
                cout <<"[" <<i << "," << j<<"]";
            }
        }
    }
}
