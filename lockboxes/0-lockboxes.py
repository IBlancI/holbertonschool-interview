#!/usr/bin/python3
""" method """


def canUnlockAll(boxes):
    """
    Checks if all the boxes can be opened.

    Args:
        boxes (list of lists): Each box contains keys.

    Returns:
        bool: True if all the boxes can be opened, otherwise False.
    """

    n = len(boxes)
    unlocked = set([0])
    queue = [0]

    while queue:
        current_box = queue.pop(0)

        for key in boxes[current_box]:
            if key < n and key not in unlocked:
                unlocked.add(key)
                queue.append(key)

    return len(unlocked) == n
