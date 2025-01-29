#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
};

node* constructarr2LL(vector<int>& arr) {
    int n = arr.size();
    node* head = new node(arr[0], nullptr);
    node* mover = head;
    for (int i = 1; i < n; i++) {
        node* temp = new node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to find the length of a linked list
int length(node* head) {
    int len = 0;
    while (head != nullptr) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to find the intersection point of two linked lists
node* intersection(node* head1, node* head2) {
    if (head1 == nullptr || head2 == nullptr)
        return nullptr;

    int len1 = length(head1);
    int len2 = length(head2);

    node* p1 = head1;
    node* p2 = head2;

    // Traverse longer list by the difference in lengths
    while (len1 > len2) {
        p1 = p1->next;
        len1--;
    }

    while (len2 > len1) {
        p2 = p2->next;
        len2--;
    }

    // Traverse both lists simultaneously until they intersect
    while (p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;
    }

    // At this point, p1 and p2 either point to the intersection node or are nullptr (no intersection)
    return p1;
}

//printing the LL
void print(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Constructing two linked lists
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4};

    // Creating intersecting node
    node* intersectionNode = new node(10, nullptr);

    // Linking both lists to the intersection node
    node* head1 = constructarr2LL(arr1);
    node* head2 = constructarr2LL(arr2);

    node* temp1 = head1;
    while (temp1->next != nullptr)
        temp1 = temp1->next;
    temp1->next = intersectionNode;

    node* temp2 = head2;
    while (temp2->next != nullptr)
        temp2 = temp2->next;
    temp2->next = intersectionNode;

    cout << "Linked List 1: ";
    print(head1);
    cout << "Linked List 2: ";
    print(head2);

    node* intersect = intersection(head1, head2);
    if (intersect != nullptr)
        cout << "Intersection at node with data: " << intersect->data << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}
