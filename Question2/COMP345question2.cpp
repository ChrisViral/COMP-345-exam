#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

struct Node
{
	int data;
	Node* next;
};

class List
{
public:
	List()
	{
		head = nullptr;
		tail = nullptr;
	}

	//Copy constructor
	List(const List& list)
	{
		//Clearing previous memory
		head = nullptr;
		tail = nullptr;

		//Loop through the other list and add all nodes as new nodes
		for (Node* n = list.head; n != nullptr; n = n->next)
		{
			createnode(n->data);
		}
	}

	void createnode(int value)
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = nullptr;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			temp = nullptr;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void display() const
	{
		Node* temp = new Node;
		temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}

	void insert_start(int value)
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void insert_position(int pos, int value) const
	{
		Node* pre = new Node;
		Node* cur = new Node;
		Node* temp = new Node;
		cur = head;
		for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}

	void delete_first()
	{
		Node* temp = new Node;
		temp = head;
		head = head->next;
		delete temp;
	}

	void delete_last()
	{
		Node* current = new Node;
		Node* previous = new Node;
		current = head;
		while (current->next != nullptr)
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = nullptr;
		delete current;
	}

	void delete_position(int pos) const
	{
		Node* current = new Node;
		Node* previous = new Node;
		current = head;
		for (int i = 1; i < pos; i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		delete current;
	}

	//Assignment operator
     const List& operator=(List& list);

private:
	Node* head;
	Node* tail;

	//Output stream operator
	friend ostream& operator<<(ostream& out, const List& list)
	{
		//Output all nodes data
		for (Node* n = list.head; n != nullptr; n = n->next)
		{
			out << n->data << '\t';
		}
		//Output an endline and return
		out << endl;
		return out;
	}

	//Input stream operator
	friend istream& operator>>(istream& in, List& list)
	{
		//Add the inputted value at the end of the node and return
		int i;
		in >> i;
		list.createnode(i);
		return in;
	}

	//Addition operator
	friend const List operator+(const List& a, const List& b)
	{
		//Create new resulting list
		List result;

		//Add all nodes a pair at a time
		for (Node* l = a.head, *r = b.head; l != nullptr && r != nullptr; l = l->next, r = r->next)
		{
			result.createnode(l->data + r->data);
		}

		//Return result as a copy
		return result;
	}
};

//Assignment operator
const List& List::operator=(List& list)
{
	//Check for equal reference
	if (&list != this)
	{
		//Delete previous references
		delete head;
		delete tail;

		//Create new references
		head = new Node(*list.head);
		tail = new Node(*list.tail);
	}

	//Return reference
	return *this;
}

int main()
{
	List obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);

	cout << "\n--------------------------------------------------\n";
	cout << "---------------Displaying All nodes---------------";
	cout << "\n--------------------------------------------------\n";
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Inserting At End-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.createnode(55);
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "----------------Inserting At Start----------------";
	cout << "\n--------------------------------------------------\n";
	obj.insert_start(50);
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "-------------Inserting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.insert_position(5, 60);
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "----------------Deleting At Start-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_first();
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Deleting At End-------------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Deleting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_position(4);
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using answer code-----------------";
	cout << "\n--------------------------------------------------\n";

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using copy constructor-----------------";
	cout << "\n--------------------------------------------------\n";
	List obj1(obj);
	cout << obj1 << endl;

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using assignment operator-----------------";
	cout << "\n--------------------------------------------------\n";
	List obj2;
	obj2 = obj1;
	cout << obj1 << endl;

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using stream input------------------";
	cout << "\n--------------------------------------------------\n";
	cin >> obj1 >> obj1;
	cout << obj1 << endl;

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using operator+------------------";
	cout << "\n--------------------------------------------------\n";
	List obj3, obj4;
	obj3.createnode(1);
	obj3.createnode(2);
	obj3.createnode(3);
	obj3.createnode(3);
	obj4.createnode(4);
	obj4.createnode(5);
	obj4.createnode(6);
	cout << "obj3 List: " << endl << obj3 << endl;
	cout << "obj4 List: " << endl << obj4 << endl;
	cout << "obj3 + obj4: " << endl << obj3 + obj4 << endl;

	system("PAUSE");
	return 0;
}
