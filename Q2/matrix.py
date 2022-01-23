N = 512;

def init(N, val):
  return [[val]*N]*N;
  # for d in m1:
  #     print(d,"\n")

def prod():  
  sum =0.00;
  m1 = [[10]*N]*N
  m2 = [[12]*N]*N
  p = [[0.000]*N]*N;
  for i in range(N):
      for j in range(N):
          for k in range(N):
              sum += m1[i][k]*m2[k][j]
          p[i][j] = sum
          sum = 0.00
  return p

ma = init(N, 10.50)
mb = init(N, 12.50)
p = prod()
#for d in p:
#    print(d, "\n")
