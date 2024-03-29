#!/usr/bin/python3
"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """
    Defines a function that returns the perimeter of an island

    Calculates the perimeter of an island in a grid

    Args:
        grid (list): list of list of integers
    
    Returns:
        perimeter (int): perimeter of the island
    """
    if not grid:
        return 0
    
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # count top edge
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                #count left edge
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # count bottom edge
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                # count right edge
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
