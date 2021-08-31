#!/usr/bin/env python3

import unittest

import colors

# Test Case

class ColorsTestCase(unittest.TestCase):

    def test_00_count_colors(self):
        self.assertEqual(
            colors.count_colors([0, 1, 2]), 
            [1, 1, 1]
        )
        self.assertEqual(
            colors.count_colors([0, 1, 2, 0, 1, 1]), 
            [2, 3, 1]
        )
    
    def test_01_expand_counts(self):
        self.assertEqual(
            colors.expand_counts([1, 1, 1]),
            [0, 1, 2]
        )
        self.assertEqual(
            colors.expand_counts([2, 3, 1]),
            [0, 0, 1, 1, 1, 2]
        )

# Main execution

if __name__ == '__main__':
    unittest.main()
