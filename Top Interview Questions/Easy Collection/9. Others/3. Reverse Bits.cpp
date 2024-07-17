class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // Convert the integer to a 32-bit binary string
        bitset<32> bits(n);
        string bitString = bits.to_string();

        // Reverse the binary string
        reverse(bitString.begin(), bitString.end());

        // Convert the reversed binary string back to an integer
        bitset<32> reversedBits(bitString);
        return reversedBits.to_ulong();
    }
};