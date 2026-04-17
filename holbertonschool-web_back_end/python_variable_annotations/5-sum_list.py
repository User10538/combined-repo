#!/usr/bin/env python3

"""
This module provides a function sum_list which takes a list input_list of
 floats as argument and returns their sum as a float.
"""


from typing import List


def sum_list(input_list: List[float]) -> float:
    """
    Takes a list input_list of floats as argument

    Args:
    input_list: list: The float.

    Returns:
    The sum as a float.
    """
    total_sum = sum(float(sub) for sub in input_list)

    return total_sum
