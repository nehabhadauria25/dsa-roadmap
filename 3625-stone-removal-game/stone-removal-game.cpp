class Solution {
public:
    bool canAliceWin(int n) {
        int stones = n;
        int remove = 10;
        bool alice = true;

        while (stones >= remove) {
            stones -= remove;
            remove--;
            alice = !alice;
        }

        return !alice;
    }
};