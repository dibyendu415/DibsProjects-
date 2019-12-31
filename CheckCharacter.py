# A program to check if the a character is a Capital Letter, Small Letter,vowel,consonant, Digit or special Character .

ch = input("Enter a character: ") #character input
ascii=ord(ch)
if 65<=ascii<=90:
	print("Capital Lettar")
	if ch in ['A','E','I','O','U']:
		print("Vowel")
	else:
		print("Consonant")
		
elif 97<=ascii<=122:
	print("Small Letter")
	if ch in ['a','e','i','o','u']:
		print("Vowel")
	else:
		print("Consonant")
elif 48<=ascii<=57:
	print("Digit")
else:
	print("Special Character")
