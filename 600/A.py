import re

s = input().strip()
nums, others = [], []
for word in re.split(r'[;,]', s):
    if re.fullmatch(r'0|([1-9][0-9]*)', word):
        nums.append(word)
    else:
        others.append(word)

print('"{}"'.format(','.join(nums)) if nums else '-')
print('"{}"'.format(','.join(others)) if others else '-')
