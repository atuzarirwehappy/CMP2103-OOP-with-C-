
import std;
using namespace std;

// Return true if the card number is valid
bool isValid(long long number);

// Get the result from Step 2
int sumOfDoubleEvenPlace(long long number);

// Return this number if it is a single digit, otherwise, return the sum of the two digits
int getDigit(int number);

// Return sum of odd place digits in number
int sumOfOddPlace(long long number);

// Return true if the digit d is a prefix for number
bool prefixMatched(long long number, int d);

// Return the number of digits in d
int getSize(long long d);

// Return the first k number of digits from number. 
// If the number of digits in number is less than k, return number.
long long getPrefix(long long number, int k);


bool isValid(long long number) {
    const int size = getSize(number);
    if (size < 13 || size > 16) {
        return false;
    }

    const bool hasValidPrefix = prefixMatched(number, 4)  ||  // Visa
                                prefixMatched(number, 5)  ||  // MasterCard
                                prefixMatched(number, 37) ||  // American Express
                                prefixMatched(number, 6);     // Discover

    if (!hasValidPrefix) {
        return false;
    }

    const int totalSum = sumOfDoubleEvenPlace(number) + sumOfOddPlace(number);
    return (totalSum % 10 == 0);
}

/**
 * Step 2: Double every second digit from right to left (even positions).
 * If doubling results in a two-digit number, add up the two digits via getDigit.
 * Returns the sum of all such single digits.
 */
int sumOfDoubleEvenPlace(long long number) {
    int sum = 0;
    // Step past the rightmost digit (which is in odd position #1)
    number /= 10;
    while (number > 0) {
        const int digit = static_cast<int>(number % 10);
        sum += getDigit(digit * 2);
        // Skip past the next odd position
        number /= 100;
    }
    return sum;
}

/**
 * Return this number if it is a single digit (0–9), 
 * otherwise return the sum of the two digits (e.g. 16 -> 1 + 6 = 7).
 */
int getDigit(int number) {
    if (number < 10) {
        return number;
    }
    return (number / 10) + (number % 10);
}

/**
 * Step 3: Return the sum of all digits in the odd places from right to left
 * in the card number (positions 1, 3, 5, ...).
 */
int sumOfOddPlace(long long number) {
    int sum = 0;
    while (number > 0) {
        const int digit = static_cast<int>(number % 10);
        sum += digit;
        // Skip past the next even position
        number /= 100;
    }
    return sum;
}

/**
 * Return true if the digit d is a prefix for number.
 */
bool prefixMatched(long long number, int d) {
    return getPrefix(number, getSize(d)) == d;
}

/**
 * Return the number of digits in integer d.
 */
int getSize(long long d) {
    if (d == 0) {
        return 1;
    }
    if (d < 0) {
        d = -d;
    }
    int count = 0;
    while (d > 0) {
        count++;
        d /= 10;
    }
    return count;
}

/**
 * Return the first k digits from number.
 * If the number of digits in number is less than k, return number.
 */
long long getPrefix(long long number, int k) {
    const int size = getSize(number);
    if (size <= k) {
        return number;
    }
    long long divisor = 1;
    for (int i = 0; i < size - k; ++i) {
        divisor *= 10;
    }
    return number / divisor;
}


// Main Function

int main() {
cout << "Enter a credit card number as a long integer: ";

    long long number = 0;
    if (cin >> number) {
        if (isValid(number)) {

            cout << number << " is valid\n";
        } 
          else{ cout << number << " is invalid\n";}

        }
  

    return 0;
}
