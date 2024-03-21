#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    squared_matrix = []
    
    for row in matrix:
        squared_row = list(map(lambda i: i ** 2, row))
        squared_matrix.append(squared_row)
    return squared_matrix
