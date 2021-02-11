#also known as next permutation problem
def biggerIsGreater(w):
    string = list(w)
    for i in range(len(w)-1, 0, -1):
        if string[i] > string[i-1]:
            pivot = string[i-1]
            head = list(string[:i-1])
            tail = list(string[i:])
            tail.reverse()
            for element in tail:
                if element > pivot:
                    tail[tail.index(element)] = pivot
                    tail.insert(0,element)
                    return "".join(head+tail) 
    return "no answer"
