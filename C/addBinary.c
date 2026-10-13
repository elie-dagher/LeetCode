
char* addBinary(char* a, char* b) {
    /* 
    Set pointers to the end of either binary char*, since binary is read right to left.
        Perform the binary arithmetic
            1) 0 + 0 = 0 
            2) 1 + 0 = 1
            3) 1 + 1 = 0, carryover = 0
            4) 1 + 1 + 1(carryover) = 1, carryover = 1
    After creating performing our binary arithmetic, we appended our values left to right. Now to return the result right to left (C doesn't have negative index wrap around) we flip the order with a left and right pointer then switching values. 
        
    */
    int first = strlen(a) - 1, second = strlen(b) - 1;
    char* res = (char*)malloc(fmax(first, second) + 10);
    int carry = 0, i = 0;

    while (carry == 1 || first >= 0 || second >= 0){
        int diga = 0, digb = 0;
        int sum;
        
        if (first >= 0){
            diga = a[first--] - '0';
        }
        if (second >= 0){
            digb = b[second--] - '0';
        }

        sum = diga + digb + carry;
        res[i++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    res[i] = '\0';

    int l = 0, r = strlen(res) - 1;
    while (l < r){
        char temp = res[l];
        res[l] = res[r];
        res[r] = temp;
        l++;
        r--;
    }

    return res;
}