#week12-2.py �C�Xn�H�U���������
n =int(input('�п�J1�Ӽ�:'))
def isPrime(n):
  for i in range(2,n):  #�u��1�Mn�����㰣
    if n%i==0:
      return False
  return True
for i in range(2,n+1):
  if isPrime(i):print(i,end=' ')