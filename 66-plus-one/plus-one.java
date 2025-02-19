class Solution {
    public int[] plusOne(int[] digits) {
        int position = digits.length - 1;
        

        if (digits[position] != 9) {
            digits[position]++;
            return digits;
        }

        return update(digits, position);
    }

        int[] update(int[] digits, int position) {
        
        if (position == 0 && digits[position] == 9) {
            int[] newDigits = new int[digits.length + 1];
            newDigits[0] = 1; 
            return newDigits;
        }

        if (digits[position] != 9) {
            digits[position]++;
            return digits;
        }

        digits[position] = 0;
        return update(digits, position - 1);
    }
}