//
//  main.c
//  LL
//
//  Created by Apple 1 on 12/04/19.
//  Copyright © 2019 3B1B. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LL.h"



int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    struct node *head = NULL;
    head = insertAtEnd(head, 1);  // 1
    head = insertAtEnd(head, 2);  // 1->2
    head = insertAtEnd(head, 3);  // 1->2->3
    head = insertAtEnd(head, 4);  // 1->2->3->4
    head = insertAtEnd(head, 5);  // 1->2->3->4->5
    print(head);
    
    head = insertAtPosition(head, 3, 9);  // 1->2->9->3->4->5
    print(head);
    
    head = insertAtBeginning(head, 7);  // 7->1->2->9->3->4->5
    print(head);
    
    head = deleteAtBeginning(head);  // 1->2->9->3->4->5
    print(head);
    
    head = deleteAtPosition(head, 3);  // 1->2->3->4->5
    print(head);
    
    head = deleteAtEnd(head);  // 1->2->3->4
    head = deleteAtEnd(head);  // 1->2->3
    head = deleteAtEnd(head);  // 1->2
    head = deleteAtEnd(head);  // 1
    head = deleteAtEnd(head);  // NULL
    print(head);
    
    
    
    
    
    
    
    return 0;
}





