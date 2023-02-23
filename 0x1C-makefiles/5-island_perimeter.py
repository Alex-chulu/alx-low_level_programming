#!/usr/bin/python3
"""This is a module that calculates the perimeter of an island in a grid"""


def surroundin_water(grid, x, y):
    """Function that return the perimeter of island in a grid"""

    surr_water = 0

    if x <= 0 or not grid[x - 1][y]:
        surr_water += 1
    if y <= 0 or not grid[x][y - 1]:
        surr_water += 1
    if y >= len(grid[x]) - 1 or not grid[x][y + 1]:
        surr_water += 1
    if x >= len(grid) - 1 or not grid[x + 1][y]:
        surr_water += 1

    return surr_water


def island_perimeter(grid):
    """Function that returns the perimeter of the island in grid"""

    per = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                per += surroundin_water(grid, x, y)

    return per
