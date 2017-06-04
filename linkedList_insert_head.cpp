struct listNode
{
  int value;
  struct listNode* next;
};

listNode* insert_at_head(listNode* head, int data)
{
  listNode *temp = new listNode;
  temp->next = head;
  temp->value = data;
  head = temp;
  return head;
}
