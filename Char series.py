input_string = "COMPUTERSCIENCE"

frequency_table = {}

for char in input_string: 
    frequency_table[char] = frequency_table.get(char, 0) + 1

# Show Output
print ("Character frequency table for '{}' is :\n {}".format(input_string, str(frequency_table)))
