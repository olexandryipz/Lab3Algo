#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubble_sort(vector<float>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    srand(time(0));

    int m = 1000;
    vector<float> arr(m);

    for (int i = 0; i < m; ++i) {
        arr[i] = static_cast<float>(rand()) / RAND_MAX * 100.0;
    }

    clock_t start_time = clock();
    bubble_sort(arr);
    clock_t end_time = clock();

    double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    cout << "Відсортований масив (перші 10 елементів): ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << "..." << endl;
    cout << "Час, який був потрібен для сортування масиву: " << elapsed_time << " секунд" << endl;

    return 0;
}
