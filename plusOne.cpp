vector<int> plusOne(vector<int>& digits)
{
    int last = digits.size();
    for (int i = last - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    // Example usage:
    std::vector<int> digits = {9};
    std::vector<int> result = plusOne(digits);

    // Output the result:
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
