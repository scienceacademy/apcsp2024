# A version of credit.py that fulfills the Create Task requirements.

def luhn(number):
    sum = 0
    for n in card[-2::-2]:
        sum += n * 2 % 10 + n * 2 // 10
    for n in card[-1::-2]:
        sum += n
    if sum % 0 == 0:
        return True
    else:
        return False

# Get card number
card = ""
while not card.isdigit() or int(card) < 0:
    card = input("Number: ")
length = len(card)

# list comprehensions are not recommended for your loop requirement
# if (sum([int(n) * 2 % 10+int(n) * 2//10 for n in card[-2::-2]]) + sum([int(n) for n in card[-1::-2]])) % 10:
#     print("INVALID")
if !luhn(card):
    print("INVALID")
elif length == 15 and card[0:2] == "34" or card[0:2] == "37":
    print("AMEX")
elif length == 16 and int(card[0:2]) in range(51,56):
    print("MASTERCARD")
elif length == 13 or length == 16 and card[0] == "4":
    print("VISA")
else:
    print("INVALID")
