#include <iostream>


using namespace std;
struct node {
    string data;
    node* next;
};

// Initialize a global pointer for head
node* head;



// This function require a node to add the new node after it in the linked list
/*void insert_node(node* prev_node, int new_data) {
    // check if the given prev node is NULL
    if (prev_node == NULL)
        return;
    // allocate new node and put it's data
    node* new_node = new node();
    new_node->data = new_data;
    // set the next of the new node to be the next of the prev node
    new_node->next = prev_node->next;
    // move the next of the prev node to be the new node
    prev_node->next = new_node;
}
*/


// This function require a node to delete the node after it in the linked list

void delete_end(int number) {
    // check if the linked list is empty
    if (head == NULL)
        return;
    // get the last node and the prev node of it in the linked list
    node* curr = head;
    node* prev = NULL;
    for(int i=0; i<number ; i++){
        prev = curr;
        curr = curr->next;
    }
    // check if the linked list has only one node
    if (prev == NULL) {
        // delete the node which selected
        delete(curr);
        head = NULL;
    }
    // otherwise the linked list has nodes more than one
    else {
        // jump the deleted node
        prev->next = curr->next;
        // delete the node which selected
        delete(curr);
    }
}



// This function prints the contents of the linked list
void print_linked_list() {
    // print the data nodes starting from head till reach the last node
    node* curr = head;
	while (curr != NULL) {
		cout << curr->data << ' ';
		curr = curr->next;
	}
}
void insert_end(string new_data) {
    // allocate new node and put it's data
    node* new_node = new node();
    new_node->data = new_data;
    // check if the linked list is empty
    if (head == NULL) {
        head = new_node;
    }
    // otherwise reach the end of the linked list
    else {
        // get the last node in the linked list
        node* curr = head;
        while (curr->next != NULL)
            curr = curr->next;
        // set the next of the last node to be the new node
        curr->next = new_node;
    }
}

void creat(){
while(1){
    cout<<"do you want to add(y,n)";
char answer;
cin>>answer;
if(answer=='y' || answer=='Y'){
        cout<<"add it";
        string words;
        cin>>words;
        insert_end(words);}

else if(answer=='n' || answer=='N'){
    break;
}

}}
void delToDo(){
  cout<<"\nEnter the no of the todo you want to remove\n";
  int number;
  cin>>number;
  delete_end(number-1);
}



int main()
{
    while(1){
    cout<<"\n1.See Your ToDo List";
    cout<<"\n2.Create Your ToDos";
    cout<<"\n3.Delete Your ToDos";
    cout<<"\n4.Update Your ToDos";
    cout<<"\n5.Exit";
        cout<<"\n\nEnter your choice..";
        int choice;
        cin>>choice;
        switch(choice){
      case 1:
          print_linked_list();
        break;
      case 2:
          creat();
        break;
      case 3:
          delToDo();
        break;
      case 4:
         creat();
         break;
      case 5:
        exit(0);
        }
    }
}
