def numCells(grid):
    rows = len(grid)
    col = len(grid[0])
    tcount = 0

    for i in range(0, rows):
        for j in range(0, col):
            count = 0
            current_element = grid[i][j]
            neighbours = [
                grid[i-1][j] if i-1 >= 0 else None,       # Top
                grid[i-1][j+1] if i-1 >= 0 and j+1 < col else None,  # Top-right
                grid[i-1][j-1] if i-1 >= 0 and j-1 >= 0 else None,  # Top-left
                grid[i][j-1] if j-1 >= 0 else None,       # Left
                grid[i][j+1] if j+1 < col else None,      # Right
                grid[i+1][j] if i+1 < rows else None,      # Bottom
                grid[i+1][j+1] if i+1 < rows and j+1 < col else None,  # Bottom-right
                grid[i+1][j-1] if i+1 < rows and j-1 >= 0 else None   # Bottom-left
            ]

            un_list = list(set(neighbours))
            f_list = list(filter(None, un_list))
            #print(f_list)
            #print(current_element)
            for element in f_list:
                if current_element > element:
                    count += 1
            #print( "Count - ", count, " len flist - ", len(f_list))
            if count == len(f_list):
                tcount += 1

    return tcount

print(numCells([[1, 2, 7], [4, 5, 6], [8, 8, 9]]))





