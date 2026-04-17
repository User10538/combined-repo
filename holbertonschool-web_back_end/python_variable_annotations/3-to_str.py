#!/usr/bin/env python3
"""
This module provides a type-annotated function to_str that
 takes a float n as argument and returns
 the string representation of the float.
"""


def to_str(n: float) -> str:
    """
    Basic annotations - floor

    Args:
    n: float: The String.

    Returns:
    The string representation of the float.
    """
    if not isinstance(n, float):
        raise TypeError("n must be a float")
    mystring = str(n)

    return mystring
