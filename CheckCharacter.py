# A program to check if the a character is a Capital Letter, Small Letter,vowel,consonant, Digit or special Character .

ch = input("Enter a character: ") #character input

vowel = 'aeiou'
consonant = 'bcdfghjklmnpqrstvwxyz'

# Check Special Character
if not ch.isalnum():
	print("Special Charcter")
else:
	# Check digit
	if ch.isdigit():
		print("Digit")
	#Check Capital
	elif ch.upper()==ch:
		print("Capital letter")
	else:
		print("Small letter")
	# Check vowel
	if ch in vowel:
		print("Vowel")
	#Check consonant
	elif ch in consonant:
		print("Consonant")
