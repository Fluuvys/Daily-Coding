# Dãy đơn điệu
# Nhập và một số nguyên dương n, tiếp theo là n số nguyên dương lần lượt là các phần tử của một dãy số a. Hãy kiểm tra xem dãy a có phải là dãy đơn điệu hay không, trả về "YES" nếu có, "NO" nếu không.

# Một dãy đơn điệu khi nó là dãy số tăng (a[i] > a[i-1]), hoặc dãy số giảm (a[i] < a[i-1]).

# Ví dụ 1

# Đầu vào:

# 5
# 1 2 3 4 5 
# Đầu ra:

# YES
# Giải thích:

# Với a = [1, 2, 3, 4, 5] thì kết quả mong muốn là YES. Vì các giá trị đã cho đang tăng dần.

# Ví dụ 2

# Đầu vào:

# 4
# 5 3 1 -4
# Đầu ra:

# YES
# Giải thích:

# Với a = [5, 3, 1, -4] thì kết quả mong muốn là YES. Vì các giá trị đã cho đang giảm dần.

# Ví dụ 3

# Đầu vào:

# 5
# 1 2 4 3 -2
# Đầu ra:

# NO
# Giải thích:

# Với a = [1, 2, 4, 3, -2 ] thì kết quả mong muốn là NO. Vì trong chuỗi này có không tăng dần và không giảm dần.




def is_monotonic(a:list):
  increasing = True
  decreasing = True
  for i in range(len(a)-1):
    if a[i+1]>=a[i]:
      decreasing = False
    if a[i+1]<=a[i]:
      increasing = False
  if increasing == True or decreasing == True:
    return True
  else: return False

if is_monotonic(a):
  print("YES")
else: print("NO")
  