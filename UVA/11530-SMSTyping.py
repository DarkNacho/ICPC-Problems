n = int(input())
l = [1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4]
for p in range(n):
    case = 0
    line = input().split()
    for word in line:
        for char in word:
            case += (l[ord(char) - ord('a')])
    print("Case #%d: %d" % (p +1 , case + len(line) -1))
    