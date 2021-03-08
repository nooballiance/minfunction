from struct import unpack
from os import urandom

n = 1000000
print(n)
print([unpack("@q", i)[0] for i in [urandom(8) for _ in range(n)]])
