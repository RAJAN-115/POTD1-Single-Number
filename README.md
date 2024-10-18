
# 🔢 Single Number Problem (Using XOR)

## 📝 Problem
In an array, every number comes **twice**, except for one number that comes an **odd** number of times. We need to find that number.

---

## 📚 Concept

### 🔍 XOR Basics
- **XOR of a number with itself is 0**:  
  `a ^ a = 0`  
  Example: `5 ^ 5 = 0`

- **XOR of a number with 0 is the number itself**:  
  `a ^ 0 = a`  
  Example: `5 ^ 0 = 5`

### 💡 Key Idea:
- **Cancel Out**: When you XOR all the numbers in the array, the numbers that appear twice cancel out (become 0).
- **Odd Occurrence**: Only the number that appears an **odd number** of times will remain.

---

## 🚀 Steps to Solve

1. **Initialize** a variable:  
   `result = 0`
   
2. **XOR** each number in the array with `result`.

3. **Return** the value of `result`, which will be the number that appears an **odd number** of times.

---

## 🧮 Example

For the array:  
`arr[] = {1, 1, 2, 2, 2}`

- Step 1: Start with `result = 0`
- Step 2: XOR all elements one by one:
  - `result = 0 ^ 1 = 1`
  - `result = 1 ^ 1 = 0`  (1 and 1 cancel out)
  - `result = 0 ^ 2 = 2`
  - `result = 2 ^ 2 = 0`  (2 and 2 cancel out)
  - `result = 0 ^ 2 = 2`

🎯 **Answer**: The number that appears an odd number of times is `2`.

---

## 🧩 Formula:
- XOR all numbers in the array:
  `result = arr[0] ^ arr[1] ^ arr[2] ^ ... ^ arr[n-1]`
- The result will be the number that appears an odd number of times.

---

## 🕒 Time and Space Complexity:
- **Time Complexity**: O(n) → Traverse the array once.
- **Space Complexity**: O(1) → Only one extra variable is used.

---

## 🧠 Mnemonic:
- **"Same numbers vanish, odd man survives!"**

---

## 📊 Summary

- **XOR** helps us find the number that occurs an odd number of times.
- **All duplicates cancel out**.
- The result is the **odd one out**!
