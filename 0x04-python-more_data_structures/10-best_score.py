#!/usr/bin/python3
def best_score(a_dictionary):
    if not a_dictionary:
        return None

    max_score_key = None
    max_score = None
    for key, value in a_dictionary.items():
        if max_score is None or value > max_score:
            max_score = value
            max_score_key = key

    return max_score_key
