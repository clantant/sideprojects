#!/usr/local/bin/python3.6

import unittest
import math

def bat_calc(input_string):
	temp = input_string.split(' ')
	l = temp[0]
	d = temp[1]
	n = temp[2]
	out = math.ceil(((float(l) - 12) / float(d))) - int(n)
	print(out)
	return out

class BatsTest(unittest.TestCase):
	
	def test_first_string(self):
		res = bat_calc('22 2 2 9 11')
		self.assertEqual(res, 3)
	
	def test_second_string(self):
		res = bat_calc('33 5 0')
		self.assertEqual(res, 5)

	def test_third_string(self):
		res = bat_calc('16 3 2 6 10')
		self.assertEqual(res, 0)

	#Failing test cases - 4 and 5
	def test_fourth_string(self):
		res = bat_calc('835 125 1 113')
		self.assertEqual(res, 5)

	def test_fifth_string(self):
		res = bat_calc('47 5 0')
		self.assertEqual(res, 8)

if __name__ == '__main__':
	unittest.main() 
