#!/usr/bin/python3
'''
Module contains island_perimeter function
'''


def neighbours_no(grid, y, x):
    row = len(grid)
    column = len(grid[1])
    count = 0

    '''top'''
    if (y > 0 and grid[y - 1][x]):
        count += 1

    '''Right'''
    if (x < column - 1) and grid[y][x + 1]:
        count += 1

    '''Bottom'''
    if (y < row - 1) and grid[y + 1][x]:
        count += 1

    '''left'''
    if (x > 0 and grid[y][x - 1]):
        count += 1

    return count


def island_perimeter(grid):
    row = len(grid)
    column = len(grid[1])
    perimeter = 0

    for y in range(0, row):
        for x in range(0, column):
            if grid[y][x]:
                perimeter += 4 - (neighbours_no(grid, y, x))

    return perimeter
