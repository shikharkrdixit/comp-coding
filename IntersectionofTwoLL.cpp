int intersectPoint(Node* head1, Node* head2)
{
    int l1=0,l2=0;
    Node* ptr1=head1;
    Node* ptr2=head2;
    while(ptr1->next!=NULL){
        ptr1=ptr1->next;
        l1++;
    }
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
        l2++;
    }
    
    ptr1=head1,ptr2=head2;
    if(l1>l2){
        while(l1!=l2){
            ptr1=ptr1->next;
            l1--;
        }
    }else
    if(l2>l1){
        while(l2!=l1){
            ptr2=ptr2->next;
            l2--;
        }
    }
    while(ptr1!=NULL or ptr2!=NULL){
        if(ptr1->next==ptr2->next){
            return ptr1->next->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
