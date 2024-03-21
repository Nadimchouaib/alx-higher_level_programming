#!/usr/bin/python3

def no_c(my_string):
    tmp = {ord(char): None for char in "cC"}
    Updated_str = my_string.translate(tmp)
    return Updated_str
