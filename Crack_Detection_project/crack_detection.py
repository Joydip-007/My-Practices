import cv2
import numpy as np
import matplotlib.pyplot as plt
import os

script_dir = os.path.dirname(os.path.abspath(__file__))
image_path = os.path.join(script_dir, "crack.jpg")
image = cv2.imread(image_path)
if image is None:
    print("Error: crack.jpg not found! Make sure the image is in the same folder.")
    exit()

gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

blur = cv2.GaussianBlur(gray, (5, 5), 0)

edges = cv2.Canny(blur, 50, 150)

kernel = np.ones((3, 3), np.uint8)
dilated = cv2.dilate(edges, kernel, iterations=1)

crack_pixels = np.sum(edges > 0)
crack_length = crack_pixels * 0.1   

h, w = gray.shape
total_pixels = h * w
crack_percentage = (crack_pixels / total_pixels) * 100

if crack_percentage < 1:
    severity = "Low"
elif crack_percentage < 5:
    severity = "Moderate"
else:
    severity = "High"

print("===== Crack Detection Result =====")
print(f"Crack Pixels Detected: {crack_pixels}")
print(f"Estimated Crack Length: {crack_length:.2f} mm")
print(f"Cracked Surface: {crack_percentage:.2f}%")
print(f"Severity Level: {severity}")

plt.figure(figsize=(12, 6))

plt.subplot(1, 3, 1)
plt.title("Original Image")
plt.imshow(cv2.cvtColor(image, cv2.COLOR_BGR2RGB))
plt.axis("off")

plt.subplot(1, 3, 2)
plt.title("Binary Edge Detection")
plt.imshow(edges, cmap="gray")
plt.axis("off")

plt.subplot(1, 3, 3)
plt.title("Detected Crack (Highlighted)")
plt.imshow(dilated, cmap="gray")
plt.axis("off")

plt.show()
