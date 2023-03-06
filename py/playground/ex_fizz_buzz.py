s = input().split()
m=int(s[-1])
num_word_pair={}
for i in range(len(s)-1):
    num,word=s[i].split(":")
    num=int(num)
    num_word_pair[num]=word
num_word_pair=dict(sorted(num_word_pair.items()))
answer=""
for k,v in num_word_pair.items():
    if m%k==0:
        answer+=v
if answer=="":
    print(m)
else:
    print(answer)