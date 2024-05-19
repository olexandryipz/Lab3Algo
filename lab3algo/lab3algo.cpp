#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double f_n(int n) {
    return n;
}

double f_log_n(int n) {
    return (n > 0) ? log(n) : 0;
}

double f_n_log_n(int n) {
    return (n > 0) ? n * log(n) : 0;
}

double f_n_squared(int n) {
    return n * n;
}

double f_2_pow_n(int n) {
    return pow(2, n);
}

double f_factorial_n(int n) {
    if (n < 0) return 0;
    double factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

void tabulate_functions() {
    ofstream outfile("functions_data.csv");
    outfile << "n,f_n,f_log_n,f_n_log_n,f_n_squared,f_2_pow_n,f_factorial_n\n";
    int max_y = 500;

    for (int n = 0; n <= 50; ++n) {
        double fn = f_n(n);
        double flog_n = f_log_n(n);
        double fn_log_n = f_n_log_n(n);
        double fn_squared = f_n_squared(n);
        double f2_pow_n = f_2_pow_n(n);
        double ffactorial_n = f_factorial_n(n);

        if (fn > max_y) fn = max_y;
        if (flog_n > max_y) flog_n = max_y;
        if (fn_log_n > max_y) fn_log_n = max_y;
        if (fn_squared > max_y) fn_squared = max_y;
        if (f2_pow_n > max_y) f2_pow_n = max_y;
        if (ffactorial_n > max_y) ffactorial_n = max_y;

        outfile << n << "," << fn << "," << flog_n << "," << fn_log_n << "," << fn_squared << "," << f2_pow_n << "," << ffactorial_n << "\n";
    }

    outfile.close();
    cout << "Табулювання завершено. Дані збережено у файл functions_data.csv" << endl;
}

int main() {
    tabulate_functions();
    return 0;
}
