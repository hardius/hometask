#include <string>

std::string createPhoneNumber(const int arr [10]){
    std::string new_str = "12345678912345";
    new_str[0] = '(';
    new_str[1] = (char)(arr[0] + '0');
    new_str[2] = (char)(arr[1] + '0');
    new_str[3] = (char)(arr[2] + '0');
    new_str[4] = ')';
    new_str[5] = ' ';
    new_str[6] = (char)(arr[3] + '0');
    new_str[7] = (char)(arr[4] + '0');
    new_str[8] = (char)(arr[5] + '0');
    new_str[9] = '-';
    new_str[10] = (char)(arr[6] + '0');
    new_str[11] = (char)(arr[7] + '0');
    new_str[12] = (char)(arr[8] + '0');
    new_str[13] = (char)(arr[9] + '0');
    return new_str;
}