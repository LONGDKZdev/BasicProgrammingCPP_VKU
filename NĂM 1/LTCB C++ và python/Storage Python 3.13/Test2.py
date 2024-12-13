import numpy as np
from matplotlib import pyplot as plt

# Tạo giá trị x trong khoảng từ -4 đến 4, với bước nhỏ để tăng độ mịn của đồ thị
x = np.linspace(-4, 4, 500)

# Định nghĩa các hàm
f = 2 * x**3 - x**2 + 1  # Hàm đa thức
sin_x = np.sin(x)        # Hàm sin
cos_x = np.cos(x)        # Hàm cos
tan_x = np.tan(x)        # Hàm tan

# Tạo đồ thị
plt.figure(figsize=(10, 6))  # Tăng kích thước đồ thị

# Vẽ từng hàm
plt.plot(x, f, label="f(x) = 2x^3 - x^2 + 1", color="blue")
plt.plot(x, sin_x, label="sin(x)", color="red", linestyle="--")
plt.plot(x, cos_x, label="cos(x)", color="green", linestyle=":")
# Hạn chế đồ thị tan(x) để tránh điểm vô hạn
plt.plot(x, tan_x, label="tan(x)", color="purple", linestyle="-.", alpha=0.7)

# Thiết lập giới hạn y để tránh đồ thị tan(x) gây lỗi hiển thị
plt.ylim(-10, 10)

# Thêm tiêu đề và nhãn
plt.title("Graphs of Polynomial and Trigonometric Functions")
plt.xlabel("x axis")
plt.ylabel("y axis")

# Thêm chú thích và lưới
plt.legend()
plt.grid()

# Hiển thị đồ thị
plt.show()

