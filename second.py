a = [1,2,3,4,5]
b = [6,7,8,9,0]
n = []
for i in range(5):
	if i%2==0:
		n.append(b[i])
	else:
		n.append(a[i])

print(n)