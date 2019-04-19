n = int(input())
l = [1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4]
lengh = len(l)
for p in range(n):
    case = 0
    line = input()
    for char in line:
        i = ord(char) - ord('a')
        if 0<= i < lengh:
                case += l[i]
        else:
                case +=1
    print("Case #%d: %d" % (p +1 , case))
    