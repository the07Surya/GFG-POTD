def IsFoldable(root):
    # code here
    if not root:
        return True
    
    return is_mirror(root.left, root.right)


def is_mirror(l_node, r_node):
    if (l_node is None) and (r_node is None):
        return True
    
    if (l_node is None) or (r_node is None):
        return False
    
    return is_mirror(l_node.left, r_node.right) and is_mirror(l_node.right, r_node.left)
