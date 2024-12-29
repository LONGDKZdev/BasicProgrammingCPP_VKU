# from selenium import webdriver
# from selenium.webdriver.common.by import By
# import time

# # Khởi tạo Edge WebDriver
# options = webdriver.EdgeOptions()
# driver = webdriver.Edge(options=options)

# try:
#    # Mở liên kết
#    url = "https://www.duolingo.com/lesson/unit/11/level/2"
#    driver.get(url)

#    # Đợi một chút để trang tải xong
#    time.sleep(3)

#    # Tìm và nhấn nút "Tiếp tục"
#     try:
#         continue_button = driver.find_element(By.XPATH, "//button[text()='TIẾP TỤC']")
#         continue_button.click()
#         print("Đã nhấn nút 'Tiếp tục'!")
#     except:
#             print("Không tìm thấy nút 'Tiếp tục'. Kiểm tra XPath hoặc ngôn ngữ trang web.")

#     while True:
#         try:
#             # Tìm đáp án dựa trên nội dung chữ (ví dụ "Two Tickets Please!")
#             answer_text = "Two Tickets Please!"  # Thay bằng nội dung đáp án bạn muốn chọn
#             answer_element = WebDriverWait(driver, 10).until(
#                 EC.presence_of_element_located((By.XPATH, f"//*[text()='{answer_text}']"))
#             )
#             answer_element.click()  # Nhấn vào đáp án
#             print(f"Đã chọn đáp án: {answer_text}")
#         except:
#             print("Không tìm thấy đáp án phù hợp.")
#             break

#         # Tìm nút "TIẾP TỤC" và nhấn
#         try:
#             continue_button = WebDriverWait(driver, 10).until(
#                 EC.element_to_be_clickable((By.XPATH, "//button[text()='TIẾP TỤC']"))
#             )
#             continue_button.click()
#             print("Đã nhấn nút 'TIẾP TỤC'.")
#         except:
#             print("Không thể nhấn nút 'TIẾP TỤC'. Kiểm tra trạng thái trang web.")
#             break

#     # Đợi thêm một chút trước khi kết thúc
#     time.sleep(55)
# finally:
#     # Đóng trình duyệt
#     driver.quit()
