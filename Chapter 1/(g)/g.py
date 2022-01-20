num = int(input('Enter the num(<5 digits)'))
sum = 0

for i in range(0, 5):
    sum = sum+(num % 10)
    num = int(num/10)

print('Sum of all digits is ', sum)
