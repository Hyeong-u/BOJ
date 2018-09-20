def solution(n):
    bags = [0, -1, -1, 1, -1, 1]
    for i in range(6, n+1):
        three = bags[i-3]
        five = bags[i-5]
        if three != -1:
            three += 1
        if five != -1:
            five += 1
        if three == -1 and five == -1:
            bags.append(-1)
        elif three == -1:
            bags.append(five)
        elif five == -1:
            bags.append(three)
        elif three > five:
            bags.append(five)
        else:
            bags.append(three)
    return bags[n]


print(solution(int(input())))
