#!/usr/bin/env python3

"""
This module provides a function to_kv that takes a string
 k and an int OR float v as arguments and returns a tuple.
"""


from typing import Union, Tuple


def to_kv(k: str, v: Union[int, float]) -> Tuple[str, float]:
    """
    Takes a string k and an int OR float v as arguments

    Args:
    k: String.
    v: int or float

    Returns:
    The tuple.
    """
    square_of_v = v ** 2
    mytuple = str(k), float(square_of_v)

    return tuple(mytuple)
