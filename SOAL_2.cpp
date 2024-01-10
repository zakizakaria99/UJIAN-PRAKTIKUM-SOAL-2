#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int kotak[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
    vector<int> vect(kotak, kotak + sizeof(kotak) / sizeof(int));

    cout << "Vector Awal :\n";
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " | ";
    }

    sort(vect.begin(), vect.end(), greater<int>());
    cout << "\n\nVector Sorting DSC :\n";
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " | ";
    }

    
    int n = vect.size();
    float median;

    if (n % 2 == 0) {
        median = (vect[n / 2 - 1] + vect[n / 2]) / 2.0;
    }
    else {
        median = vect[n / 2];
    }

    cout << "\n\nNilai Median : " << median << endl;

   
}

