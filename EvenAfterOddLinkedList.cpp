Node *evenAfterOdd(Node *head)
{
    if(head==NULL){
        return head;
    }
    Node *oddh=NULL;
	Node *oddt=NULL;
    Node *evenh=NULL;
    Node *event=NULL;
    while(head!=NULL){
        if(head->data %2!=0) {
            if(oddh==NULL && oddt==NULL){
                oddh=head;
                oddt=head;
            }
            else{
                oddt->next=head;
                oddt=head;
            }
            head=head->next;
        }
        else{
            if(evenh==NULL && event==NULL){
                evenh=head;
                event=head;
            }
            else{
                event->next=head;
                event=head;
            }
            head=head->next;
        }
        }
    if(oddh==NULL && oddt==NULL){
        event->next=NULL;
        return evenh;
    }
    else if(event==NULL && event==NULL){
        oddt->next=NULL;
        return oddh;
    }
    else{
    oddt->next=NULL;
    event->next=NULL;
    oddt->next=evenh;
    return oddh;
    }
}
