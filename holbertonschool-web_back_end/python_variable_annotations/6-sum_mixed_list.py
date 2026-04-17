#!/usr/bin/env python3

"""
This module provides a function sum_mixed_list which takes a list
 mxd_lst of integers
 and floats and returns their sum as a float.
"""


from typing import List, Union


def sum_mixed_list(mxd_lst: List[Union[int, float]]) -> float:
    """
    Takes a list sum_mixed_list of int as argument

    Args:
    input_list: list: The float.

    Returns:
    The sum as a float.
    """
    total_sum = sum(mxd_lst)

    return float(total_sum)
