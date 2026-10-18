/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    /*
    malloc a pointer to pointers, then store the char/strings in the pointer of the pointer. 
    this creates a 2d array in c of strings.
    */
    *returnSize = n;
    char** res = (char**)malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0){
            res[i - 1] = "FizzBuzz";
        } else if (i % 3 == 0){
            res[i - 1] = "Fizz";
        } else if (i % 5 == 0){
            res[i - 1] = "Buzz";
        } else {
            res[i - 1] = (char*)malloc(11 * sizeof(char));
            snprintf(res[i - 1], 11, "%d", i);
        }
    }

    return res;
}