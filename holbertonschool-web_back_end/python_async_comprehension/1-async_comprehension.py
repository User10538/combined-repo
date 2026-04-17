#!/usr/bin/env python3
"""
Import async_generator from the previous task and
then write a coroutine called
 async_comprehension that takes no arguments.
"""


from typing import List

async_generator = __import__('0-async_generator').async_generator


async def async_comprehension() -> List[float]:
    """
    Write a coroutine called async_generator
     that takes no arguments.

    Args:
    none

    Returns:
    yield a random number between 0 and 10
    """
    # iterate over values (x) yielded from the asynchronous generator.
    return [x async for x in async_generator()]
