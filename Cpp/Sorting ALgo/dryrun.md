```markdown
# 🌈 Sorting Algorithms Visual Guide  
> *"Turning chaos into order, one swap at a time."*  

Welcome, traveler of arrays 👋  
This is your **visual & fun journey** through the world of sorting algorithms —  
each one fighting to bring peace to your list 🕊️  

---

## 🫧 Bubble Sort — *“The Fizzy One”*  

**Concept:**  
Compare adjacent elements — swap if needed.  
Big elements rise to the top, like bubbles in soda 🥤  

**Optimization:**  
If no swaps occur in a pass, the array is already sorted — easy exit 🏁  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`  

```

Initial: [5, 2, 8, 1]



#### 🌀 PASS 1  
Compare pairs → Swap if left > right  
```

[5, 2, 8, 1]
↑  ↑
Swap → [2, 5, 8, 1]

[2, 5, 8, 1]
↑  ↑
No swap → [2, 5, 8, 1]

[2, 5, 8, 1]
↑  ↑
Swap → [2, 5, 1, 8]

```
**Result after Pass 1:** `[2, 5, 1, 8]` 🫧  

#### 🔁 PASS 2  
```

[2, 5, 1, 8]
↑  ↑
No swap

[2, 5, 1, 8]
↑  ↑
Swap → [2, 1, 5, 8]

```
**Result after Pass 2:** `[2, 1, 5, 8]`

#### 🔁 PASS 3  
```

[2, 1, 5, 8]
↑  ↑
Swap → [1, 2, 5, 8]

```
🎉 **Sorted!** `[1, 2, 5, 8]`

🧠 *Time: O(n²)* | *Space: O(1)* | *Stable: Yes*

---

## 🧩 Selection Sort — *“The Pick-Me Kid”*  

**Concept:**  
Find the smallest element and move it to the front.  
Rinse & repeat until sorted 🧼  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`  

```

PASS 1:
[5, 2, 8, 1]
^         ^
Find min (1) → swap with 5 → [1, 2, 8, 5]

PASS 2:
[1, 2, 8, 5]
^     ^
Find min (2) → stays → [1, 2, 8, 5]

PASS 3:
[1, 2, 8, 5]
^  ^
Find min (5) → swap with 8 → [1, 2, 5, 8]

```

🎉 **Sorted:** `[1, 2, 5, 8]`

🧠 *Time: O(n²)* | *Space: O(1)* | *Stable: No*

---

## ✍️ Insertion Sort — *“The Polite One”*  

**Concept:**  
Pick the next element, insert it where it belongs among sorted ones.  
Like sorting cards in your hand 🃏  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`

```

Start: [5 | 2, 8, 1]

Insert 2 → shift 5 → [2, 5 | 8, 1]

Insert 8 → already bigger → [2, 5, 8 | 1]

Insert 1 → shift 8 → [2, 5, 8, 8]
shift 5 → [2, 5, 5, 8]
shift 2 → [2, 2, 5, 8]
place 1 → [1, 2, 5, 8]

```

🎉 **Sorted:** `[1, 2, 5, 8]`

🧠 *Time: O(n²)* | *Space: O(1)* | *Stable: Yes*

---

## 🧬 Merge Sort — *“The Split Personality”*  

**Concept:**  
Divide the array into halves until single elements remain,  
then merge them back in order. 🧩  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`

```

Split: [5, 2, 8, 1]
→ [5, 2] + [8, 1]
→ [5] [2] [8] [1]

Merge left: [5] + [2] → [2, 5]
Merge right: [8] + [1] → [1, 8]

Merge all:
[2, 5] + [1, 8]
Compare 2 vs 1 → [1]
Compare 2 vs 8 → [1, 2]
Compare 5 vs 8 → [1, 2, 5, 8]

```

🎉 **Sorted:** `[1, 2, 5, 8]`

🧠 *Time: O(n log n)* | *Space: O(n)* | *Stable: Yes*

---

## ⚡ Quick Sort — *“The Speed Demon”*  

**Concept:**  
Pick a pivot → send smaller ones left, bigger ones right → repeat recursively 🌀  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`

```

Pivot = 5
Partition → [2, 1] | 5 | [8]

Sort left [2, 1]:
Pivot = 2 → [1] | 2 | []
→ [1, 2]

Right [8] → sorted

Combine → [1, 2] + [5] + [8]

```

🎉 **Sorted:** `[1, 2, 5, 8]`

🧠 *Time: O(n log n)* | *Space: O(log n)* | *Stable: No*

---

## 🧠 Summary Table

| Algorithm | Best Case | Worst Case | Average | Stable | Space |
|------------|------------|-------------|----------|---------|--------|
| 🫧 Bubble Sort | O(n) | O(n²) | O(n²) | ✅ | O(1) |
| 🧩 Selection Sort | O(n²) | O(n²) | O(n²) | ❌ | O(1) |
| ✍️ Insertion Sort | O(n) | O(n²) | O(n²) | ✅ | O(1) |
| 🧬 Merge Sort | O(n log n) | O(n log n) | O(n log n) | ✅ | O(n) |
| ⚡ Quick Sort | O(n log n) | O(n²) | O(n log n) | ❌ | O(log n) |

---

💡 **Pro Tip:**  
If you ever feel lost while sorting — remember:  
Even life is just about comparing your priorities and swapping what’s wrong 😌  

---

✨ *Made with caffeine, chaos, and clean code.*  
```

---


```markdown
# 🌈 Sorting Algorithms Visual Guide  
> *"Turning chaos into order, one swap at a time."*  

Welcome to the **Sorting Arena** 🏟️  
Here, five legendary algorithms battle it out to sort your arrays —  
some slow but steady 🐢, others blazingly fast ⚡  

Sit back, sip some chai ☕, and watch them perform ✨  

---

## 🫧 Bubble Sort — *“The Fizzy One”*

**Concept:**  
Compare adjacent elements, swap if out of order.  
Larger ones float to the top like bubbles in soda 🥤  

**Optimization:**  
If no swaps in a pass → stop early! (Sorted already, genius 😎)

---

### 🎯 Dry Run — `[5, 2, 8, 1]`

```

Initial → [5, 2, 8, 1]

```

#### 🌀 PASS 1
```

[5, 2, 8, 1]
↑  ↑
💥 5 > 2 → swap → [2, 5, 8, 1]

[2, 5, 8, 1]
↑  ↑
👌 5 < 8 → no swap

[2, 5, 8, 1]
↑  ↑
💥 8 > 1 → swap → [2, 5, 1, 8]

```
✅ End of Pass 1 → [2, 5, 1, 8]

#### 🔁 PASS 2
```

[2, 5, 1, 8]
↑  ↑
👌 2 < 5 → no swap

[2, 5, 1, 8]
↑  ↑
💥 5 > 1 → swap → [2, 1, 5, 8]

```
✅ End of Pass 2 → [2, 1, 5, 8]

#### 🔁 PASS 3
```

[2, 1, 5, 8]
↑  ↑
💥 2 > 1 → swap → [1, 2, 5, 8]

```
🎉 **Sorted!** `[1, 2, 5, 8]`

🧠 *O(n²)* | *Stable ✅* | *Space O(1)*  

---

## 🧩 Selection Sort — *“The Pick-Me Kid”*

**Concept:**  
Find the smallest element each pass and move it to the front.  
Methodical, a bit slow… but determined 🦥  

---

### 🎯 Dry Run — `[5, 2, 8, 1]`
```

PASS 1:
[5, 2, 8, 1]
^         ^
🔎 find min (1)
↔️ swap → [1, 2, 8, 5]

PASS 2:
[1, 2, 8, 5]
^     ^
🔎 min = 2 → already in place

PASS 3:
[1, 2, 8, 5]
^  ^
🔎 min = 5 → swap → [1, 2, 5, 8]

```
🎉 **Sorted!** `[1, 2, 5, 8]`  
🧠 *O(n²)* | *Not Stable ❌* | *Space O(1)*  

---

## ✍️ Insertion Sort — *“The Gentleman Sort”*

**Concept:**  
Takes one element and slides it into the right spot among sorted ones —  
like politely fitting into a queue 🤵  

---

### 🎯 Dry Run — `[5, 2, 8, 1]`
```

Start: [5 | 2, 8, 1]
Insert 2 → shift 5 ⏩ → [2, 5 | 8, 1]

Insert 8 → already in place ✅ → [2, 5, 8 | 1]

Insert 1 →
shift 8 ⏩ [2, 5, 8, 8]
shift 5 ⏩ [2, 5, 5, 8]
shift 2 ⏩ [2, 2, 5, 8]
place 1 → [1, 2, 5, 8]

```
🎉 **Sorted!** `[1, 2, 5, 8]`  
🧠 *O(n²)* | *Stable ✅* | *Space O(1)*  

---

## 🧬 Merge Sort — *“The Split Personality”*

**Concept:**  
Divide the array into halves → sort each half → merge them back.  
Recursive and chill 🧘‍♂️  

---

### 🎯 Dry Run — `[5, 2, 8, 1]`

```

Split 🔪
[5, 2, 8, 1]
→ [5, 2] + [8, 1]
→ [5] [2] [8] [1]

Merge 🔗
[5] + [2] → [2, 5]
[8] + [1] → [1, 8]

Final Merge 🧩
[2, 5] + [1, 8]
→ Compare 2 vs 1 → [1]
→ Compare 2 vs 8 → [1, 2]
→ Compare 5 vs 8 → [1, 2, 5, 8]

```

🎉 **Sorted!** `[1, 2, 5, 8]`  
🧠 *O(n log n)* | *Stable ✅* | *Space O(n)*  

---

## ⚡ Quick Sort — *“The Speed Demon”*

**Concept:**  
Pick a pivot → send smaller left, larger right → recurse till done.  
Efficient and dramatic 💅  

---

### 🎯 Dry Run — `[5, 2, 8, 1]`
```

Pivot = 5 🎯
Partition:
⟪ smaller ⟫ [2, 1] | 5 | [8] ⟪ larger ⟫

Left side:
Pivot = 2
→ [1] | 2 | []

Combine everything 💥
[1, 2] + [5] + [8] → [1, 2, 5, 8]

```
🎉 **Sorted!** `[1, 2, 5, 8]`  
🧠 *O(n log n)* avg | *Not Stable ❌* | *Space O(log n)*  

---

## 📊 Summary Table

| Algorithm | Best Case | Worst Case | Average | Stable | Space |
|------------|------------|-------------|----------|---------|--------|
| 🫧 Bubble | O(n) | O(n²) | O(n²) | ✅ | O(1) |
| 🧩 Selection | O(n²) | O(n²) | O(n²) | ❌ | O(1) |
| ✍️ Insertion | O(n) | O(n²) | O(n²) | ✅ | O(1) |
| 🧬 Merge | O(n log n) | O(n log n) | O(n log n) | ✅ | O(n) |
| ⚡ Quick | O(n log n) | O(n²) | O(n log n) | ❌ | O(log n) |

---

💡 **Pro Tip:**  
Sorting is just like life —  
keep comparing, keep swapping, and eventually… you’ll find your order 😌  

---

✨ *Made with caffeine, chaos & clean code.*  
> 🧠 Repo by Ustad — because sorting should be fun, not traumatic.
```

---

