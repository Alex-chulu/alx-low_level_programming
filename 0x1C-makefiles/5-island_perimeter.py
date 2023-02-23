#!/usr/bin/python3
"""This module will calculate the perimeter of the island described in grid"""

def island_perimeter(grid):
    """Function that return the perimeter of the island in grid """

    land_zone = 1
    width = len(grid[0])
    height = len(grid)
    margin = 0
    size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] = land_zone:
                size = size + 1
                if (y > 0 and grid[x][y - 1] == land_zone):
                    margin = margin + 1
                if (x > 0 and grid[x - 1][y] == land_zone):
                    margin = margin + 1
    return size * 4 - margin * 2
