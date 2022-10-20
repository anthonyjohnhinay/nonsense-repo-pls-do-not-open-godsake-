def getmy_frames(num):
    val = [0] * 100
    total = 0
    for x in num:
        val[x] += 1
    for i in val:
        total += i // 2
    return total // 2

n = int(input())
a = list(map(int, input().split()))
print(getmy_frames(a))
