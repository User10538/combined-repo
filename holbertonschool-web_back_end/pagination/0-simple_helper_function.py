#!/usr/bin/env python3
"""
Simple helper function to calculate index range for pagination.

This module contains the function `index_range` that returns
the start and end indexes for paginating a list.
"""


def index_range(page: int, page_size: int) -> tuple[int, int]:
    """
    Return a tuple containing the start index and end index
    for pagination based on the given page and page_size.

    Parameters:
    - page (int): The current page number (1-indexed).
    - page_size (int): The number of items per page.

    Returns:
    - tuple (start_index, end_index): start index (inclusive) and
      end index (exclusive) for slicing a list.
    """
    start_index = (page - 1) * page_size
    end_index = page * page_size

    return (start_index, end_index)
