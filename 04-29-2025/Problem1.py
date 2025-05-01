# Xóa phần tử trong mảng
# Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. Tiếp theo nhập vào số nguyên là k (0 ≤ k < n).

# Hãy xóa phần tử có chỉ số k ở trong dãy đó. In mảng kết quả ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.

# Ví dụ 1

# Đầu vào:

# 4
# 1 2 3 4
# 1
# Đầu ra:

# 1 3 4
# Ví dụ 2

# Đầu vào:

# 3
# 1 2 3
# 2
# Đầu ra:

# 1 2 

#===================================================================================================================#

n = int(input("Enter n: "))

a = [x for x in input().split()]
k = int(input("Enter k: "))
a1 = a[:k]
a2 = a[k+1:]
new_a = a1+a2
for val in new_a:
  print(int(val), end = " ")