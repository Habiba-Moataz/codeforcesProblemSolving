n = int(input(''))
a_string = input('')
a_list = a_string.split()

b_string = input('')
b_list = b_string.split()

c_string = input('')
c_list = c_string.split()

# convert each item to int type
a=0
b=0
c=0
for i in range(n):
    # convert each item to int type
    a_list[i] = int(a_list[i])
    a = a+a_list[i]
    
# convert each item to int type
for i in range(n-1):
    # convert each item to int type
    b_list[i] = int(b_list[i])
    b = b+b_list[i]
    
# convert each item to int type
for i in range(n-2):
    # convert each item to int type
    c_list[i] = int(c_list[i])
    c = c+c_list[i]

print(a-b)
print(b-c)
