/*
Imagine a tree of all the possibilities. A branch of all 1's to sum to n. one which branches off 1's sum to n-2 and then one 2, in every permutations.
Thats what the recursive calls do. 
*/
int climbStairs(int n) {
    if (n == 0 || n == 1) return 1;

    return climbStairs(n-1) + climbStairs(n-2);
}