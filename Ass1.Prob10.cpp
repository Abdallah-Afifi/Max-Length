

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int maxLen(const string& infile) {
    ifstream fin(infile);
    if (!fin) {
        cerr << "Error opening file " << infile << endl;
        return -1;
    }

    int max_length = 0;
    string line;
    while (getline(fin, line)) {
        int length = line.length();
        if (length > max_length) {
            max_length = length;
        }
    }

    fin.close();
    return max_length;
}

int main() {
    string infile = "input.txt";
    int max_length = maxLen(infile);
    if (max_length >= 0) {
        cout << "Maximum line length in file " << infile << " is " << max_length << endl;
    }
    return 0;
}
