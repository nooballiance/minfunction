def main():
  from struct import unpack
  from os import urandom
  from env import SIZE
# function spits out 8 byte integer
  n = SIZE
  print(n)
  print([unpack("@q", i)[0] for i in [urandom(8) for _ in range(n)]])

if __name__ == '__main__':
  main()
