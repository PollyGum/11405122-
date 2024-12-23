int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Предотвращаем переполнение
            int result = guess(mid);

            if (result == 0) {
                return mid; // Угадали число
            } else if (result == -1) {
                high = mid - 1; // Загаданное число меньше
            } else {
                low = mid + 1; // Загаданное число больше
            }
        }

        // Здесь мы никогда не должны оказаться, если входные ограничения соблюдены
        return -1; 
    }
};
