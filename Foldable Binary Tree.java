boolean mirror(Node root1, Node root2) {
        if(root1 == null && root2 == null) {
            return true;
        }
        if(root1 == null || root2 == null) {
            return false;
        }
        
        return mirror(root1.left, root2.right) && mirror(root1.right, root2.left);
    }
    
    boolean IsFoldable(Node node) { 
		if(node == null) return true;

		return mirror(node.left, node.right);
	}
