```markdown
```
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
```

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
---
---

---

## 🧩 Selection Sort — *“The Pick-Me Kid”*  

**Concept:**  
Find the smallest element and move it to the front.  
Rinse & repeat until sorted 🧼  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`  

#### 🌀 PASS 1

```

---------[5, 2, 8, 1]
          ↑        ↑
Find min (1) → swap with 5 → [1, 2, 8, 5]

```

#### 🌀 PASS 2:
```

------[1, 2, 8, 5]
          ↑     
Find min (2) → stays → [1, 2, 8, 5]

```

#### 🌀 PASS 3:

```

---[1, 2, 8, 5]
          ↑  ↑
Find min (5) → swap with 8 → [1, 2, 5, 8]

```


🎉 **Sorted:** `[1, 2, 5, 8]`

🧠 *Time: O(n²)* | *Space: O(1)* | *Stable: No*


---
---
---
---
## ✍️ Insertion Sort — *“The Polite One”*  

**Concept:**  
Pick the next element, insert it where it belongs among sorted ones.  
Like sorting cards in your hand 🃏  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`




#### 🌀 Pass 1

```
Start: [5 | 2, 8, 1]
            ^ 
            Key

Insert 2 → shift 5 → [2, 5 | 8, 1]

```

#### 🌀 Pass 2

```
[5, 2 | 8, 1]
        ↑ 
        Key

Insert 8 → already bigger → [2, 5, 8 | 1]

```
#### 🌀 Pass 3
```
[5, 2, 8 | 1]
           ↑ 
           Key

Insert 1 → shift 8 → [2, 5, 8, 8]

shift 5 → [2, 5, 5, 8]
shift 2 → [2, 2, 5, 8]
place 1 → [1, 2, 5, 8]

```


🎉 **Sorted:** `[1, 2, 5, 8]`

🧠 *Time: O(n²)* | *Space: O(1)* | *Stable: Yes*

---
---
---
---
## 🧬 Merge Sort — *“The Split Personality”*  

**Concept:**  
Divide the array into halves until single elements remain,  
then merge them back in order. 🧩  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`

**Call:** `mergeSortp(arr, 0, 3)`

---

#### 🔪 SPLIT (Top level)
```

Start: [5, 2, 8, 1]   (l=0, r=3)
m = 0 + (3-0)/2 = 1
Split → left:  [5, 2]   (l=0, m=1)
        right: [8, 1]   (m+1=2, r=3)

```



#### 🌀 PASS 1 — sort left half `[5, 2]`
**Call:** `mergeSortp(arr, 0, 1)` → `m = 0`

Split into `[5]` and `[2]` (each single element, base case).

**Now merge left:** `merge(arr, 0, 0, 1)`

```
L = [5]     (n1 = 1)
R = [2]     (n2 = 1)
i=0, j=0, k=0

Compare L[0]=5  vs  R[0]=2
        ↑            ↑
Since 2 < 5 → arr[0] = 2  (place R[j]), j->1, k->1

Now j == n2 (R exhausted). Copy remaining L:
arr[1] = L[0] = 5, i->1, k->2

After merge -> [2, 5, 8, 1]
```

**Visual (merge step):**
```
Before merge: [5, 2, 8, 1]
              ↑  ↑
L=[5]  R=[2]
Compare 5 & 2 → place 2 → [2, 5, 8, 1]
```

✅ **Result after PASS 1 (left sorted):** `[2, 5, 8, 1]`

---

#### 🌀 PASS 2 — sort right half `[8, 1]`
**Call:** `mergeSortp(arr, 2, 3)` → `m = 2`

Split into `[8]` and `[1]`.

**Now merge right:** `merge(arr, 2, 2, 3)`

```
L = [8]     (n1 = 1)
R = [1]     (n2 = 1)
i=0, j=0, k=2

Compare L[0]=8  vs  R[0]=1
           ↑           ↑
1 < 8 → arr[2] = 1  (place R[j]), j->1, k->3

R exhausted. Copy remaining L:
arr[3] = L[0] = 8, i->1, k->4

After merge -> [2, 5, 1, 8]
```

**Visual (merge step):**
```
Before merge: [2, 5, 8, 1]
                 ↑  ↑
L=[8]  R=[1]
Compare 8 & 1 → place 1 → [2, 5, 1, 8]
```

✅ **Result after PASS 2 (right sorted):** `[2, 5, 1, 8]`  
*(Indices 2..3 now sorted → [1,8])*

---

#### 🌀 PASS 3 — final merge: `[2,5]` and `[1,8]`
**Call:** `merge(arr, 0, 1, 3)`  

```
Initial: arr = [2, 5, 1, 8]
         L = [2, 5]
         R = [1, 8]
         i=0, j=0, k=0
```

1️⃣ Compare `L[0]=2` vs `R[0]=1`  
```
1 < 2 → arr[0] = 1
arr => [1, 5, 1, 8]
```

2️⃣ Compare `L[0]=2` vs `R[1]=8`  
```
2 <= 8 → arr[1] = 2
arr => [1, 2, 1, 8]
```

3️⃣ Compare `L[1]=5` vs `R[1]=8`  
```
5 <= 8 → arr[2] = 5
arr => [1, 2, 5, 8]
```

4️⃣ Copy remaining R element (8) → done  
```
arr => [1, 2, 5, 8]
```

**Visual Summary:**
```
Merging: L=[2,5]  R=[1,8]
Step1: place 1 → [1, 5, 1, 8]
Step2: place 2 → [1, 2, 1, 8]
Step3: place 5 → [1, 2, 5, 8]
Step4: place 8 → [1, 2, 5, 8]
```
---
✅ **Final Sorted Array:** `[1, 2, 5, 8]`



🧠 *Time: O(n log n)* | *Space: O(n)* | *Stable: yes*
---

## ⚡ Quick Sort — *“The Speed Demon”*  

**Concept:**  
Pick a pivot → send smaller ones left, bigger ones right → repeat recursively 🌀  

---
---
---
---
# 🎯 QuickSort — *"The Pivot Party"*  
**Concept:**  
Pick a pivot, partition the array so smaller elements go left and larger go right,  
then recursively sort each side. No merge needed—it happens in place! 🎪  

---

### 🎯 Dry Run — Array `[5, 2, 8, 1]`

**Call:** `quickSort(arr, 0, 3)`

---

#### 🎲 PARTITION 1 — Partition entire array (low=0, high=3)

```
Start: [5, 2, 8, 1]
pivot = arr[3] = 1  (always pick last element)
i = -1  (boundary of "smaller than pivot" zone)
```

**Scanning through array:**

```
j=0: Is arr[0]=5 < pivot(1)? NO ❌ → skip
     [5, 2, 8, 1]
      j

j=1: Is arr[1]=2 < pivot(1)? NO ❌ → skip
     [5, 2, 8, 1]
         j

j=2: Is arr[2]=8 < pivot(1)? NO ❌ → skip
     [5, 2, 8, 1]
            j
```

**No elements smaller than pivot! Now place pivot:**

```
Place pivot: swap arr[i+1=0] with arr[high=3]
Before: [5, 2, 8, 1]
         ↑        ↑
After:  [1, 2, 8, 5]
         ↑ pivot now at index 0
```

**Visual:**
```
[5, 2, 8, 1] → pivot=1
 ↓           ↑
[1, 2, 8, 5]  ← pivot in position!
 ✓ nothing smaller | everything else to the right
```

✅ **After Partition 1:** `[1, 2, 8, 5]`  
Pivot at index 0. Now recursively sort:
- Left: `quickSort(arr, 0, -1)` → **invalid (base case)**, returns immediately
- Right: `quickSort(arr, 1, 3)` → `[2, 8, 5]`

---

#### 🎲 PARTITION 2 — Sort right part `[2, 8, 5]` (low=1, high=3)

```
Subarray: [2, 8, 5]  (indices 1-3)
pivot = arr[3] = 5
i = 0  (one before low)
```

**Scanning:**

```
j=1: Is arr[1]=2 < pivot(5)? YES ✓ → i=1, swap arr[1] with arr[1]
     [1, 2, 8, 5]
        i,j

j=2: Is arr[2]=8 < pivot(5)? NO ❌ → skip
     [1, 2, 8, 5]
        i  j
```

**Place pivot:**

```
Place pivot: swap arr[i+1=2] with arr[high=3]
Before: [1, 2, 8, 5]
            ↑  ↑
After:  [1, 2, 5, 8]
            ↑ pivot at index 2
```

**Visual:**
```
[1, 2, 8, 5] → pivot=5
    ↑  ↓  ↑
[1, 2, 5, 8]  ← pivot in position!
    ✓ 2 is smaller | 8 is larger
```

✅ **After Partition 2:** `[1, 2, 5, 8]`  
Pivot at index 2. Recursively sort:
- Left: `quickSort(arr, 1, 1)` → **single element (base case)**, returns
- Right: `quickSort(arr, 3, 3)` → **single element (base case)**, returns

---

## 📊 Complete Execution Summary

```
Initial:      [5, 2, 8, 1]
              
Partition 1:  [1, 2, 8, 5]  ← pivot=1 at index 0
              ✓ | sort right →
              
Partition 2:  [1, 2, 5, 8]  ← pivot=5 at index 2
              ✓  ✓ | ✓
              
Final Sorted: [1, 2, 5, 8] ✓✓✓✓
```

---

## 🎭 Visual Step-by-Step

### **Pass 1:**
```
[5, 2, 8, 1]  pivot=1
 ↓           ↑ swap
[1, 2, 8, 5]  ← 1 finds its home at index 0
```

### **Pass 2:**
```
[1, 2, 8, 5]  pivot=5
    ↑  ↓  ↑ swap indices 2 & 3
[1, 2, 5, 8]  ← 5 finds its home at index 2
```

### **Pass 3:**
```
[1, 2, 5, 8]  ← All elements in position!
 ✓ ✓ ✓ ✓
```

---

## 🎪 How Partitioning Works (The Magic!)

Think of `i` as a **bouncer** guarding the "smaller than pivot" club:

```
[5, 2, 8, 1]  pivot=1, i=-1
 j→              ← j scans everyone

"Is 5 smaller than 1?" NO → not allowed in
"Is 2 smaller than 1?" NO → not allowed in  
"Is 8 smaller than 1?" NO → not allowed in

Nobody qualified! Pivot goes to front.
```

```
[1, 2, 8, 5]  pivot=5, i=0
    j→           ← j scans

"Is 2 smaller than 5?" YES → i++, let 2 in! (already there)
"Is 8 smaller than 5?" NO → bounced

Pivot slides between them.
```

---

## 🔑 Key Points

| Feature | Details |
|---------|---------|
| **Pivot Choice** | Last element `arr[high]` |
| **Partitioning** | Rearrange so `smaller < pivot < larger` |
| **In-Place** | No extra arrays needed! |
| **Recursion** | Sort left of pivot, then right of pivot |
| **Base Case** | `low >= high` (0 or 1 element) |

---

## ⚡ Complexity

🧠 **Time:**  
- Average: O(n log n)  
- Worst: O(n²) (when pivot is always smallest/largest)

💾 **Space:** O(log n) (recursion stack only)

🎯 **Stable:** No (equal elements may swap positions)
---

✅ **Final Sorted Array:** `[1, 2, 5, 8]`  
🎉 *Sorted in place with just 2 partitions!*
🧠 *Time: O(n log n)* | *Space: O(log n)* | *Stable: No*

---

## 🧠 Summary Table

| Algorithm | Best Case | Worst Case | Average | Stable | Space |
|------------|------------|-------------|----------|---------|--------|
|  Bubble Sort | O(n) | O(n²) | O(n²) | ✅ | O(1) |
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


---

