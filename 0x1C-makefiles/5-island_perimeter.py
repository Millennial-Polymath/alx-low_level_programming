#!/usr/bin/python3
'''
Module contains: neighbours_no
and island_perimeter function
'''


def neighbours_no(grid, y, x):
    '''
    neighbours_no - calculates the number of 1's sorrounding an element
    Arguments:
           grid - the 2d matrix
           y - index for row(y axis)
           x - index for column( x axis)
    '''
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
    '''
    island_perimeter - returns the perimeter of the island described in grid
    argument(s):
                grid - grid is a list of list of integers:
                0 represents a water zone
                1 represents a land zone
                One cell is a square with side length 1
                Grid cells are connected horizontally/vertically-
                (not diagonally).
                Grid is rectangular, width and height don’t exceed 100
                Grid is completely surrounded by water,
                and there is one island (or nothing).
                The island doesn’t have “lakes”
                (water inside that isn’t connected
                 to the water around the island).
    '''
    row = len(grid)
    column = len(grid[1])
    perimeter = 0

    for y in range(0, row):
        for x in range(0, column):
            if grid[y][x]:
                perimeter += 4 - (neighbours_no(grid, y, x))

    return perimeter
