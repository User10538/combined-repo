#!/usr/bin/env python3
"""
This module provides asynchronous coroutine that takes in an integer argument
 named wait_random that waits for a random delay between 0 and max_delay
 seconds and eventually returns it.
"""


import random
import asyncio


async def wait_random(max_delay: int = 10) -> float:
    """
    integer argument max_delay, with a default value of 10 named wait_random
      that waits for a random delay between 0 and max_delay

    Args:
    max_delay: int = 10

    Returns:
    float: The actual delay time used.
    """

    #get_random = random() * max_delay (this works too)
    get_random = random.uniform(0, max_delay)
    await asyncio.sleep(get_random)
    return get_random
