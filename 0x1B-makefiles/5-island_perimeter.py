#!/usr/bin/python3
# find perimeter of island

def island_perimeter(grid):
    '''
        island perimieter solution
    '''
    height = len(grid)
    width = len(grid[0])
    answer = 0
    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                answer += 4
                if x > 0 and grid[x - 1][y]:
                    answer -= 2
                if y > 0 and grid[x][y - 1]:
                    answer -= 2
    return answer
