#!/usr/bin/python3

def element_at(my_list, idx):
    """function that retrieves an element from a list like in C

    Parameters:
        my_list: a list
        idx: the index of item to retrieve

    Returns:
        the item at a given index idx
    """
    if my_list:
        if idx < 0:
            return
        elif idx > len(my_list) - 1:
            return
        else:
            return my_list[idx]
        