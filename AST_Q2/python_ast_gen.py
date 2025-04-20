from nltk.tree import *

text = "(((number int) ((sum int) ((a int) ((b int) (arr[11] int))))) ((:= number (3 10)) ((:= sum (0 10)) (:= b (20 10)))))"
tree = Tree.fromstring(text)
tree.pretty_print(unicodelines=True, nodedist=1)

