# Số Narcissistic
# Nhập vào một số nguyên dương n là số lượng phần tử của một dãy a, và n số nguyên lần lượt là các phần tử trong dãy này. Hãy in lần lượt các số Narcissistic có trong dãy a ra màn hình, sau mỗi phần tử có đúng một khoảng trắng. Nếu không có phần tử nào thỏa mãn thì in "NO".

# Biết số Narcissistic là số được tạo thành bởi tổng của từng chữ số mũ n bằng chính nó.

# (Số 153 là số Narcissistic có 3 chữ số vì 153 = 1^3 + 3^3 + 5^3). Biết rằng dãy sẽ có ít nhất một số nguyên tố.

# Ví dụ 1

# Đầu vào:

# 3
# 153 370 407 
# Đầu ra:

# 153 370 407 
 

# Ví dụ 2

# Đầu vào:

# 3
# 151 374 409 
# Đầu ra:

# NO



n = int(input())
a=[int(x) for x in input().split()]

def find_n(a:list):
  final = []
  for val in a:
    cur_num = str(val)
    length = len(cur_num)
    ans = 0 
    for i in range(length):
      ans+= int(cur_num[i])**length
    if ans == val:
      final.append(val)
  if final == []:
    return "NO"
  return final

answer = find_n(a)
if answer == "NO":
  print("NO")
else:
  for val in answer:
    print(val, end = " ")

    