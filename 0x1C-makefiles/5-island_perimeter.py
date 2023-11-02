#!/usr/bin/python3
"""fuction to calculate perimeter of island"""


def island_perimeter(grid):
    """fuction to calculate perimeter of island
    grid: list of list of intergers
    return: perimeter of island
    """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            current_item = grid[i][j]

            if current_item == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    count += 1
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    count += 1
    return count
