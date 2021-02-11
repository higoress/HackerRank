#identify cycles in a linked list
def has_cycle(head):
    taboo_list = list()
    temp = head
    while temp:
        if temp not in taboo_list:
            taboo_list.append(temp)
            temp = temp.next
        else:
            return 1
    return 0
