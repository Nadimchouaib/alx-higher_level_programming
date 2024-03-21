#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_mtrx = []
    for i in matrix:
        new_mtrx.append([j ** 2 for j in i])
    return new_mtrx
