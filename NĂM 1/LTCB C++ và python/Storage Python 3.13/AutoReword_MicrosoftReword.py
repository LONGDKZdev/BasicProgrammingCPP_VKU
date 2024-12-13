from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Cấu hình WebDriver
driver = webdriver.Chrome(executable_path="path/to/chromedriver")  # Đặt đường dẫn tới ChromeDriver

# Đăng nhập vào Microsoft Rewards
driver.get("https://rewards.bing.com/")
time.sleep(10)  # Chờ để bạn đăng nhập thủ công

# Danh sách các nhiệm vụ
tasks = [
    "https://rewards.bing.com/task1",
    "https://rewards.bing.com/task2",
    # Thay bằng các URL thực tế của nhiệm vụ
]

# Tự động hoàn thành các nhiệm vụ
for task in tasks:
    driver.get(task)
    time.sleep(5)  # Chờ để nhiệm vụ được ghi nhận

# Đóng trình duyệt
driver.quit()
