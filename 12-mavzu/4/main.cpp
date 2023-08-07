#include <iostream>
using namespace std;
string numberToWord(int n) {
    string word = "";
    if (n < 0 || n >= 100) {
        word = "son yetarli katta";
    }
    else {
        int tens_digit = n / 10;
        int ones_digit = n % 10;

        switch (tens_digit) {
            case 0:
                word += "";
                break;
            case 1:
                switch (ones_digit) {
                    case 0:
                        word += "o'n";
                        break;
                    case 1:
                        word += "o'n bir";
                        break;
                    case 2:
                        word += "o'n ikki";
                        break;
                    case 3:
                        word += "o'n uch";
                        break;
                    case 4:
                        word += "o'n to'rt";
                        break;
                    case 5:
                        word += "o'n besh";
                        break;
                    case 6:
                        word += "o'n olti";
                        break;
                    case 7:
                        word += "o'n yetti";
                        break;
                    case 8:
                        word += "o'n sakkiz";
                        break;
                    case 9:
                        word += "o'n to'qqiz";
                        break;
                }
                break;
            case 2:
                word += "yigirma";
                break;
            case 3:
                word += "o'ttiz";
                break;
            case 4:
                word += "qirq";
                break;
            case 5:
                word += "ellik";
                break;
            case 6:
                word += "oltmish";
                break;
            case 7:
                word += "yetmish";
                break;
            case 8:
                word += "sakson";
                break;
            case 9:
                word += "to'qson";
                break;
        }

        if (tens_digit != 1 && ones_digit > 0) {
            word += " ";
            switch (ones_digit) {
                case 1:
                    word += "bir";
                    break;
                case 2:
                    word += "ikki";
                    break;
                case 3:
                    word += "uch";
                    break;
                case 4:
                    word += "to'rt";
                    break;
                case 5:
                    word += "besh";
                    break;
                case 6:
                    word += "olti";
                    break;
                case 7:
                    word += "yetti";
                    break;
                case 8:
                    word += "sakkiz";
                    break;
                case 9:
                    word += "to'qqiz";
                    break;
            }
        }
    }
    return word;
}
int main() {
    int N;
    cout << "Iltimos, 0 dan 100 gacha bo'lgan son kiriting: ";
    cin >> N;

    string word = numberToWord(N);
    cout << N << " - " << word << endl;
    return 0;
}
