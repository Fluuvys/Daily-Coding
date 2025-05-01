# Cấp số cộng
# Yêu cầu bài tập
# Trong toán học, một cấp số cộng là một dãy số thoả mãn điều kiện: hai phần tử liên tiếp nhau sai khác nhau một hằng số. Tức là, hiệu của hai phần tử bất kỳ liên tiếp nhau là bằng nhau. Chẳng hạn, dãy số 3, 5, 7, 9, 11,... là một cấp số cộng với các phân tử liên tiếp sai khác nhau hằng số 2.

# Hằng số sai khác chung được gọi là công sai của cấp số cộng. Các phần tử của nó cũng được gọi là các số hạng.

# Hãy viết chương trình nhận đầu vào là một dãy số nguyên nhập vào từ bàn phím và thực hiện kiểm tra xem dãy số đã nhập vào có phải dạng cấp số cộng hay không.

# Định dạng đầu vào
# Trên hai dòng:

# Dòng đầu tiên là số n biểu thị số lượng phần tử của dãy số nguyên nhập vào
# Dòng thứ hai là các phần tử tương ứng của dãy số được phân tách nhau bởi một dấu cách
# Định dạng đầu ra
# Hiển thị là:

# YES
# Nếu chuỗi đã nhập vào có dạng cấp số cộng

# Hiển thị là:

# NO
# Nếu chuỗi nhập vào KHÔNG PHẢI dạng cấp số cộng.

# Ví dụ
# Đầu vào 1

# 4
# 1 4 7 10
# Đầu ra 1

# YES
# Đầu vào 2

# 5
# 20 15 5 0 10
# Đầu ra 2

# NO
#==============================================================================================================================================================================
n = int(input("enter amount of numbers: "))
a = list(map(int, input().split()))
def check(a:list):
    d1 = a[1]-a[0]
    for i in range(1,len(a)-1):
        d2 = a[i+1]-a[i]
        if d2 != d1:
            return "NO"
    return "YES"
    
if n == 1:
    print("YES")
else:
    ans = check(a)
    print(ans)

    

        