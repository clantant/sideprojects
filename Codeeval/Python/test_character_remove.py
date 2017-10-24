#!/usr/local/bin/python3.6

import unittest
from character_remove import rem

class TestRemoveMethods(unittest.TestCase):

	@unittest.expectedFailure
	def test_failed_remove(self):
		results = rem('how are you, abc')
		self.assertNotEqual(results, "how re you")

	def test_success_remove(self):
		results = rem('hello world, def')
		self.assertEqual(results, "hllo worl")


if __name__ == '__main__':
	unittest.main()
