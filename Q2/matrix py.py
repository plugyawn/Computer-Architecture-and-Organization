N = 256;
m1 = [[10]*N]*N;
m2 = [[12]*N]*N;
# for d in m1:
#     print(d,"\n")
p = [[0]*N]*N;
sum = 0;


for i in range(N):
    for j in range(N):
        for k in range(N):
            sum += m1[i][k]*m2[k][j]
        p[i][j] = sum
        sum = 0

for d in p:
    print(d, "\n")
    

#define N 512 //Size of Square Matrix
# #define val1 10 //Values in the first Matrix
# #define val2 12 //Values in the next Matrix
# bool doneOnce = false;
# int arrayMult(int m1[N][N], int m2[N][N], int i, int j){
#     static int product[N][N];
#     int sum = 0;
#     if (!doneOnce){
#     for (int i =0; i<N; i++){
#         for (int j=0;j<N;j++){
#             for(int k=0;k<N;k++){
#                 sum += m1[i][k]*m2[k][j];
#             }
#             product[i][j] = sum;
#             sum = 0;
#         }
#     }
#     }
#     doneOnce = true;
#     return (product[i][j]);
# }

# int main() {
#     int m1[N][N], m2[N][N], mult[N][N];
#     for (int i=0;i<N; i++){
#         for(int j=0; j<N; j++){
#             m1[i][j] = val1;
#             m2[i][j] = val2;
#         }
#     }
    
#     for (int x = 0; x <N; x++){
#         for (int y= 0; y<N; y++){
#             mult[x][y] = arrayMult(m1,m2,x,y);
#             cout<<mult[x][y]<<" ";
#         }
#         cout<<endl<<endl;
#     }
# }