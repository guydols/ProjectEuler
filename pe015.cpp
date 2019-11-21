// Starting in the top left corner of a 2×2 grid,
// and only being able to move to the right and down,
// there are exactly 6 routes to the bottom right corner.

// How many such routes are there through a 20×20 grid?

// gridSize = [20,20]

// def recPath(gridSize):

//     # base case, no moves left
//     if gridSize == [0,0]: return 1

//     # recursive calls
//     paths = 0

//     # move left when possible
//     if gridSize[0] > 0:
//         paths += recPath([gridSize[0]-1,gridSize[1]]

//     # move down when possible
//     if gridSize[1] > 0:
//         paths += recPath([gridSize[0],gridSize[1]-1])

//     return paths

// start = time.time()
// result = recPath(gridSize)
// elapsed = time.time() - start

// print "result %s found in %s seconds" % (result, elapsed)

#include <iostream>

int walkGrid(int gridx, int gridy) {
  if (gridx == 0 and gridy == 0) {
    return 1;
  }

  int paths = 0;

  if (gridx > 0) {
    paths += walkGrid(gridx - 1, gridy);
  }

  if (gridy > 0) {
    paths += walkGrid(gridx, gridy - 1);
  }

  return paths;
}

int main() {
  std::cout << walkGrid(20, 20);
  std::cout << "\n";

  return 0;
}