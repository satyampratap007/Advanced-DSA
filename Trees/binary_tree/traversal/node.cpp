struct node{
    node* next;
    char data;
    node(char data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
