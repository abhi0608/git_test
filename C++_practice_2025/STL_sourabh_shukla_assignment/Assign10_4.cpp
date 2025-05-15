#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Possible moves a knight can make
const int dx[] = {2, 1, -1, -2, -2, -1,  1,  2};
const int dy[] = {1, 2,  2,  1, -1, -2, -2, -1};

// Function to check if a position is valid on the chessboard
bool isValid(int n, int x, int y) {
  return (x >= 0 && x < n && y >= 0 && y < n);
}

// BFS function to find the minimum steps
int minKnightMoves(int n, int xStart, int yStart, int xTarget, int yTarget) {
  // Create a visited 2D array to keep track of visited cells
  vector<vector<bool>> visited(n, vector<bool>(n, false));

  // Create a queue to store positions for BFS traversal
  queue<pair<int, int>> q;

  // Mark starting position as visited and enqueue it
  visited[xStart][yStart] = true;
  q.push({xStart, yStart});

  int steps = 0; // Keep track of steps taken

  while (!q.empty()) {
    int levelSize = q.size(); // Number of nodes to explore in current level

    for (int i = 0; i < levelSize; i++) {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();

      // Check if target is reached
      if (x == xTarget && y == yTarget) {
        return steps;
      }

      // Try all possible knight moves
      for (int j = 0; j < 8; j++) {
        int newX = x + dx[j];
        int newY = y + dy[j];

        // Check if new position is valid and not visited
        if (isValid(n, newX, newY) && !visited[newX][newY]) {
          visited[newX][newY] = true;
          q.push({newX, newY});
        }
      }
    }

    // Increase steps after exploring all nodes in a level
    steps++;
  }

  // Target not reachable
  return -1;
}

int main() {
  int n, xStart, yStart, xTarget, yTarget;

  // Input chessboard size and starting/target positions
  cout << "Enter chessboard size (N): ";
  cin >> n;

  cout << "Enter starting position (x, y): ";
  cin >> xStart >> yStart;

  cout << "Enter target position (x, y): ";
  cin >> xTarget >> yTarget;

  int minSteps = minKnightMoves(n, xStart, yStart, xTarget, yTarget);

  if (minSteps == -1) {
    cout << "Target cannot be reached from the starting position." << endl;
  } else {
    cout << "Minimum steps required: " << minSteps << endl;
  }

  return 0;
}
