# Phần tử cực trị
# Yêu cầu bài tập
# Trong toán học, phần tử cực trị (đỉnh) là các phần tử có giá trị không nhỏ hơn các lân cận của nó. Cho một mảng arr[] gồm các giá trị số nguyên, hãy viết chương trình in ra chỉ số của các phần tử đỉnh trong mảng. Mỗi chỉ số cách nhau bởi duy nhất một dấu cách.

# Yêu cầu tham số
# Đầu vào trên hai dòng, dòng đầu tiên là số lượng phần tử n của mảng số nguyên arr[]. Dòng thứ hai là các số nguyên tương ứng của mảng phân tách nhau bởi một dấu cách.
# 1
# ≤
# n
# ≤
# 10
# 5
#  , mỗi phần tử là một số nguyên arr[i] nằm trong khoảng  
# [
# −
# 10
# 4
# ,
# 10
# 4
# ]
 
# Đầu ra trên một dòng in ra chỉ số i của các phần tử cực trị trong mảng (0 \leq i \leq n-1), mỗi chỉ số cách nhau bởi duy nhất một dấu cách.
# Ví dụ
# Đầu vào 1:

# 4
# 5 10 20 15
# Đầu ra 1:

# 2 
# Giải thích:

# Phần tử 20 có 2 lân cận là 10 và 15, cả hai giá trị này đều nhỏ hơn 20. Vì vậy chỉ số in ra màn hình là "2 ".

n = int(input("enter amount of numbers: "))
a = list(map(int, input().split()))

def find_max(a:list):
  index = []
  if a[0]>=a[1]:
    index.append(0)
  for i in range(1,len(a)-1):
    if a[i]>=a[i-1] and a[i]>=a[i+1]:
      index.append(i)
  if a[len(a)-1]>=a[len(a)-2]:
    index.append(len(a)-1)

      
  return index

if n == 1:
  print(0, end = " ")
else:
  for val in find_max(a):
    print(val, end = ' ')
  
      
      
    