def getMinimumCost(k, c):
    c.sort()
    friend_cost = [[] for _ in range(k)]
    while c:
        for i in range(k):
            if c:
                friend_cost[i].append((len(friend_cost[i])+1) * c.pop())
            else:
                break
    
    return sum([sum(cost) for cost in friend_cost])
