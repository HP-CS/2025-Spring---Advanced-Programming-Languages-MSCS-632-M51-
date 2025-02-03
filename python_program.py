def calculate_sum(arr):
    total = 0  # Initialize total to 0
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)

arr = [1, 2, 3, 4]
print("Original array:", arr)

arr.append(5)  # Dynamically adding an element
print("Updated array:", arr)
