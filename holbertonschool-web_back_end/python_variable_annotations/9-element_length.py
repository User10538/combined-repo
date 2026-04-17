#!/usr/bin/env python3

"""
This module provides Annotate the below function’s parameters
 and return values with the appropriate types.
"""


from typing import Iterable, Sequence, List, Tuple


def element_length(lst: Iterable[Sequence]) -> List[Tuple[Sequence, int]]:
    """
    Annotate the below function’s parameters

    Args:
    lst: list.

    Returns:
    Values with the appropriate types
    """

    return [(i, len(i)) for i in lst]
