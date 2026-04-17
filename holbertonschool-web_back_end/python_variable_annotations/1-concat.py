#!/usr/bin/env python3
"""
This module provides a function to add two numbers using type annotations.
"""


def concat(str1: str, str2: str) -> str:
    """
    Add two String.

    Args:
    str1: str: The first string.
    str2: str: The second string.

    Returns:
    string: The concat of a and b.
    """
    if not isinstance(str1, str):
        raise TypeError("str1 must be a string")
    if not isinstance(str2, str):
        raise TypeError("str2 must be a string")
    return str1 + str2
