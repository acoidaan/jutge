#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>  // Para manejar excepciones

using namespace std;

// Suma dos números grandes representados como cadenas
string addStrings(const string& num1, const string& num2) {
    string result;
    int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

// Resta dos números grandes representados como cadenas
string subtractStrings(const string& num1, const string& num2) {
    string result;
    int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
    
    while (i >= 0) {
        int sub = (num1[i] - '0') - (j >= 0 ? (num2[j--] - '0') : 0) - carry;
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result += sub + '0';
        --i;
    }
    
    // Eliminar ceros a la izquierda
    while (result.size() > 1 && result.back() == '0') {
        result.pop_back();
    }
    
    reverse(result.begin(), result.end());
    return result;
}

string multiplyKaratsuba(const string& num1, const string& num2) {
    // Verificar si alguna cadena es vacía o si es un número cero
    if (num1.empty() || num2.empty()) throw invalid_argument("Input strings cannot be empty.");
    if (num1 == "0" || num2 == "0") return "0";

    // Base case for the recursion, when numbers are small
    if (num1.size() == 1 && num2.size() == 1) {
        return to_string((num1[0] - '0') * (num2[0] - '0'));
    }
    
    int len1 = num1.size();
    int len2 = num2.size();
    int maxLen = max(len1, len2);
    int halfLen = maxLen / 2;
    
    // Padding the shorter number with leading zeros
    string high1 = num1.substr(0, len1 - halfLen);
    string low1 = num1.substr(len1 - halfLen);
    string high2 = num2.substr(0, len2 - halfLen);
    string low2 = num2.substr(len2 - halfLen);

    // Handle cases where substrings are empty due to small number length
    if (high1.empty()) high1 = "0";
    if (high2.empty()) high2 = "0";
    if (low1.empty()) low1 = "0";
    if (low2.empty()) low2 = "0";

    // Recursive multiplication calls
    string z0 = multiplyKaratsuba(low1, low2);
    string z1 = multiplyKaratsuba(addStrings(low1, high1), addStrings(low2, high2));
    string z2 = multiplyKaratsuba(high1, high2);
    
    string z1Sub = subtractStrings(subtractStrings(z1, z2), z0);
    
    string result = addStrings(addStrings(z2 + string(2 * halfLen, '0'), z1Sub + string(halfLen, '0')), z0);
    
    // Eliminar ceros a la izquierda
    while (result.size() > 1 && result[0] == '0') {
        result.erase(result.begin());
    }
    
    return result;
}

int main() {
    try {
        string n1, n2;
        cin >> n1 >> n2;
        cout << multiplyKaratsuba(n1, n2) << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}
