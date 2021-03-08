# coding: utf-8
from math import inf

def akd(a):
  ans = inf
  for i in range(0,len(a)):
    if a[i] < ans:
      ans=a[i]
  return ans

def boobi(a):
  j = 0
  for i in range(1,len(a)):
    if a[i] < a[j]:
      j = i
  return a[j]

if __name__ == '__main__':
  input()
  ll = [*map(int, input().split(" "))]
  print(min(ll))
  print(akd(ll))
  print(boobi(ll))
