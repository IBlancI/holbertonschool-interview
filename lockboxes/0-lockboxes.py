#!/usr/bin/python3

def canUnlockAll(boxes):
    """
    Determines if all boxes can be opened.
    
    Args:
        boxes: List of lists where each sublist contains keys
              to open other boxes.
    
    Returns:
        True if all boxes can be opened, False otherwise.
    """
    if not boxes:
        return False
    
    n = len(boxes)
    opened = [False] * n
    opened[0] = True  # First box is always unlocked
    keys = set(boxes[0])  # Set of available keys
    
    while True:
        new_keys = set()
        # Iterate through all available keys
        for key in keys:
            if key < n and not opened[key]:
                opened[key] = True
                # Add newly found keys
                new_keys.update(boxes[key])
        
        # If no new keys were found, stop
        if not new_keys:
            break
        
        # Update the set of available keys
        keys.update(new_keys)
    
    # Check if all boxes have been opened
    return all(opened) 