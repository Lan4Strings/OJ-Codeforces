str=input()
A=['A','E','I','O','U','Y']
K=[]
leng=len(str)

if(leng==0):
	print(1)
	exit(0)

for i in range(leng):
	if(str[i] in A):
		K.append(i)
K.append(leng)
lk=len(K)
if (lk==1):
	print(K[0]+1)
	exit(0)
minn=1
for i in range(1,lk):
	diff=K[i]-K[i-1]
	if(diff>minn):
		minn=diff
if (K[0]+1>minn):
	minn=K[0]+1
print(minn)