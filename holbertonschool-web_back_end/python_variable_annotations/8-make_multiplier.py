#!/usr/bin/env python3

"""
This module provides a function make_multiplier that takes a
 float multiplier as argument and returns a function that
   multiplies a float by multiplier.
"""


from typing import Callable


def make_multiplier(multiplier: float) -> Callable[[float], float]:
    """
    Takes a float multiplier as argument

    Args:
    multiplier: float.

    Returns:
    function that multiplies a float by multiplier
    """

    def get_multiplies(n: float) -> float:
        return n * multiplier

    return get_multiplies
