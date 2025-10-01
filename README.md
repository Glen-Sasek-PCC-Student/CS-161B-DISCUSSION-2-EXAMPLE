# DISCUSSION 2

Ask the user for a word they remember. Longer words are best, and phrases are even better. The word may be a dog or cat you had years ago, or even a street you lived on. For this example I will use a street I lived on: Mower Street. Take the first word of the phrase and ignore the rest. So, just Mower in this case.

Pick a number you can remember, such as the year you graduated high school. For this example, I will use the year I graduated from college: 1980. Limit this to a 4 digit number. Use a char array, and make sure every character of the char array is a number.

Pick a symbol you will remember. Make sure it is readily available on your keyboard so you don't have to hunt for it. For this example I will use ^.

Assume all char arrays have 20 characters.

Hint: Make a new string, copy the first word to the new string. Then concatenate the 4 digit number. And then finally concatenate the character.&nbsp; Use C-string library functions whenever you can to manipulate the strings. Don't forget to add a null character at the end of the new string after you have finished copying the characters.


Ex: If the input is:

Mower Street
1991 
$


the output is:

Your strong password is: Mower1991$


Ex: If the input is:

Gayathri Iyer 
2024
&amp; 


the output is:

Your strong password is: Gayathri2024&amp;
