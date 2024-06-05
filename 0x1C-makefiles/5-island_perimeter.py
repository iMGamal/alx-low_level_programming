#!/usr/bin/python3
"""Module for island_perimeter function."""


def island_perimeter(grid):
    """RETURN the perimeter of the island."""
    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

    for n in range(rows):
        for s in range(columns):
            if grid[n][s] == 1:
                perimeter += 4
                if n > 0 and grid[n - 1][s] == 1:
                    perimeter -= 2
                if s > 0 and grid[n][s - 1] == 1:
                    perimeter -= 2

    return perimeter

