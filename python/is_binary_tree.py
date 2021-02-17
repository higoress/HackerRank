def resolve(node, min_key, max_key):
    if not node:
        return True
    if (node.data < min_key) or (node.data > max_key):
        return False
    
    return ( resolve(node.left, min_key, node.data-1) 
            and resolve(node.right, node.data+1, max_key) )

def check_binary_search_tree_(root):
    max_key = float("inf")
    min_key = float("-inf")
    return resolve(root, min_key, max_key)
