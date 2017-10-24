#!/usr/local/bin/python3.6

import sys

def rem(inputs):
	temp = inputs.split(',')
	source = temp[0]
	remove = temp[1].lstrip()
	for char in remove:
		source = source.replace(char, '')
	print(source)
	return source

if __name__ == '__main__':
	with open(sys.argv[1], 'r') as test_cases:
		for test in test_cases:
			rem(test)
