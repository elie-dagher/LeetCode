/* The two conditions to be met, we check if they either have been met then return false if so. Keep track of how many absenses
    and when its been three days we can check if theyve been absent for 3 days in a row. 
    Simple c syntax, access char* by index 🎅
*/
bool checkRecord(char* s) {
    int i = 0, a = 0, l = 0;
    while (s[i]){
        if (i >= 2){
            if (s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L'){
                return false;
            }
        }

        if (s[i++] == 'A') a++;
    }

    return (a < 2 ? true : false);
}

/*
checkRecord - Python implementation
class Solution:
    def checkRecord(self, s: str) -> bool:
        a = 0
        for i in range(len(s)):
            if s[i] == "A":
                a += 1
            if i >= 2:
                if s[i] == "L" and s[i-1] == "L" and s[i-2] == "L":
                    return False
        return True if a < 2 else False
*/