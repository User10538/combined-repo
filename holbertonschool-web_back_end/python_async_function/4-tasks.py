#!/usr/bin/env python3
"""
Import wait_random and write an async routine called wait_n
 that takes in 2 int. wait_n should return the list of all
 the delays (float values). The list of the delays
should be in ascending order
"""


import asyncio
from typing import List

task_wait_random = __import__('3-tasks').task_wait_random


async def task_wait_n(n: int, max_delay: int = 0) -> List[float]:
    """
    integer argument max_delay, with a default value of 10 named wait_random
      that waits for a random delay between 0 and max_delay

    Args:
    n: int
    max_delay: int = 10

    Returns:
    list of all the delays (float values)
    """
    delays = []  # This will store the delays returned
    tasks = []   # This array of function will store the task objects

    # Get all the coroutines (not running yet)
    # for 0 to 5 times or for 0 to 10
    for _ in range(n):
        task = task_wait_random(max_delay)
        # Save the task value
        tasks.append(task)

    # Process each task as it finishes
    for finished_task in asyncio.as_completed(tasks):
        # Wait for this specific one to finish
        result = await finished_task
        # Save the delay value
        delays.append(result)

    return delays
