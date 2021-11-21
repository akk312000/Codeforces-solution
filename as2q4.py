print("enter the range ")
a=int(input())
b=int(input())
for i in range(a,b+1):
	no=i
	sum=0
	while (no>=1):
		rem=(no%10)
		sum+=(rem*rem*rem)
		no=int(no/10)
	
	if(sum==i):
		print(i," is armstrong no",)
	
