#!/usr/bin/env python3
"""
This module provides a function to add two numbers using type annotations.
"""


def add(a: float, b: float) -> float:
    """
    Add two floating-point numbers.

    Args:
    a (float): The first number.
    b (float): The second number.

    Returns:
    float: The sum of a and b.
    """
    if not isinstance(a, float):
        raise TypeError("a must be float")
    if not isinstance(b, float):
        raise TypeError("b must be float")
    return a + b
