s = input()
l=0
u=0
ns=""
for i in range(len(s)):
    if s[i].isupper():
        u+=1
    else:
        l+=1
if u>l:
    ns+= s.capitalize()
else:
    ns+= s.lower()
print(ns)
