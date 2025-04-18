from nltk.tree import *

text = "( ( (x int) ( (y int) ( (z int) (binaryval int) ) ) ) ( (:= x (10 10)) ( (:= y (11 10)) ( (:= z (+ x y)) ( (print ""Sum = @"" z) ( (:= binaryval (1010 2)) (print ""Binary value = @"" binaryval) ) ) ) ) ) )"
tree = Tree.fromstring(text)
tree.pretty_print(unicodelines=True, nodedist=1)

