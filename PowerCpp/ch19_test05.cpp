#include <iostream> 
#include <vector>
#include <algorithm> 
using namespace std;

void main() {

    int arr[10] = { 9, 4, 7, 2, 5, 10, 8, 1, 6, 3 };
    vector<int> target(&arr[0], &arr[10]);

    cout << "정렬 전: ";
    for (int i = 0; i < 10; i++) { cout << target[i] << " "; }
    cout << endl;

    sort(target.begin(), target.end());

    cout << "정렬 후: ";
    for (int i = 0; i < 10; i++) { cout << target[i] << " "; }
    cout << endl;

}
