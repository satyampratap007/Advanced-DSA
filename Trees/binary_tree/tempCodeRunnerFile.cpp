reverse(node * head){
    vector <char> temp;
    node * curr1 = head;
    while (curr1 != NULL)
    {
        temp.push_back(curr1->data);
        curr1 = curr1->next;
    }
    node * curr2 = head;
    while (curr2 != NULL)
    {