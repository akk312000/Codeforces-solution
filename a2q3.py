print("enter no")
var=int(input())
no=var
sum=0
while (var>=1):
	rem=(var%10)
	sum+=(rem*rem*rem)
	var=int(var/10)
	
if(sum==no):
	print("the given no is armstrong no")
else :
	print("the given no is not armstrong no")

