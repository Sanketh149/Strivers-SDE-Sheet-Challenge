Node<int>* sortTwoLists(Node<int>* h1, Node<int>* h2)

{

    if(h1==NULL){return h2;}

    if(h2==NULL){return h1;}

    if(h1->data <= h2->data)

    {

        h1->next = sortTwoLists(h1->next,h2);

        return h1;

    } else {

      h2->next = sortTwoLists(h1, h2->next);

      return h2;

    }

}