// Given a node prev_node, insert a new node after the given prev_node
void insertAfter(Node* prev_node, int new_data)
{

	// 1. Check if the given prev_node is NULL
	if (prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}

	// 2. Allocate new node
	Node* new_node = new Node();

	// 3. Put in the data
	new_node->data = new_data;

	// 4. Make next of new node as
	// next of prev_node
	new_node->next = prev_node->next;

	// 5. move the next of prev_node
	// as new_node
	prev_node->next = new_node;
}


