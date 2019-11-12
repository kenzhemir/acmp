n = int(input())
a = input().split(" ")

threes = [x for x in a if int(x) % 2 == 1]
fours = [x for x in a if int(x) % 2 == 0]

print(" ".join(threes))
print(" ".join(fours))
if len(fours) >= len(threes):
    print("YES")
else:
    print("NO")
