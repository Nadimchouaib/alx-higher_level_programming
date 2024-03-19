#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    tmp = []
    for index in range(len(tmp)):
        if my_list[index] % 2 == 0:
            tmp.append(True)
        else:
            tmp.append(False)
    return tmp
