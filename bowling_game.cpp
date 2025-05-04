#include <iostream>
#include <vector>

using namespace std;

class BowlingGame {
private:
    vector<int> rolls;

public:
    void roll(int pins) {
        rolls.push_back(pins);
    }

    int score() {
        int totalScore = 0;
        int rollIndex = 0;

        for (int frame = 0; frame < 10; ++frame) {
            if (isStrike(rollIndex)) { // Strike
                totalScore += 10 + strikeBonus(rollIndex);
                rollIndex += 1;
            } else if (isSpare(rollIndex)) { // Spare
                totalScore += 10 + spareBonus(rollIndex);
                rollIndex += 2;
            } else {
                totalScore += sumOfBallsInFrame(rollIndex);
                rollIndex += 2;
            }
        }

        return totalScore;
    }

private:
    bool isStrike(int index) {
        return rolls[index] == 10;
    }

    bool isSpare(int index) {
        return rolls[index] + rolls[index + 1] == 10;
    }

    int strikeBonus(int index) {
        return rolls[index + 1] + rolls[index + 2];
    }

    int spareBonus(int index) {
        return rolls[index + 2];
    }

    int sumOfBallsInFrame(int index) {
        return rolls[index] + rolls[index + 1];
    }
};

int main() {
    BowlingGame game;

    vector<int> inputRolls = {1, 4, 4, 5, 6, 4, 5, 5, 10, 0, 1, 7, 3, 6, 4, 10, 2, 6};

    for (int pins : inputRolls) {
        game.roll(pins);
    }

    cout << "Total Score: " << game.score() << endl;

    return 0;
}