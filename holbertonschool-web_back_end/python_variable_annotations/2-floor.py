#!/usr/bin/env python3
"""
This module provides a function to Basic annotations - floor
"""


def floor(n: float) -> int:
    """
    Basic annotations - floor

    Args:
    n: str: The float.

    Returns:
    The floor of the float.
    """
    if not isinstance(n, float):
        raise TypeError("n must be a float")

    return int(n)
