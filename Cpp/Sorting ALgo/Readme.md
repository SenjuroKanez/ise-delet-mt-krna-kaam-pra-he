```markdown
# 🌀 Sorting Algorithms Visual Guide  

Welcome to the **Sorting Algorithms Showdown** 🎭  
Each algorithm here fights chaos to bring order to your arrays —  
some gently, some brutally, and some like they have *O(n log n)* IQ 🧠  

---

## 🫧 Bubble Sort
**Concept:** Repeatedly compare adjacent elements and swap if they’re in the wrong order.  
Larger elements “bubble up” to the end like lazy air bubbles in soda 🥤.  

**Optimization:**  
If no swaps happen in a pass — boom, stop early! (Array’s already sorted 💅)

---

### 🎯 Dry Run with Array: `[5, 2, 8, 1]`  
Let’s trace every step (n = 4)

#### PASS 1 (j = 0)
`swapped = false` initially  
Inner loop: `i` goes from `0` to `n-j-2 = 2`

| i | Compare | Swap? | Array |
|---|----------|--------|-------|
| 0 | 5 > 2 | ✅ | [2, 5, 8, 1] |
| 1 | 5 > 8 | ❌ | [2, 5, 8, 1] |
| 2 | 8 > 1 | ✅ | [2, 5, 1, 8] |

**End of Pass 1:** [2, 5, 1, 8]  
Swaps happened → continue 😤

#### PASS 2 (j = 1)
| i | Compare | Swap? | Array |
|---|----------|--------|-------|
| 0 | 2 > 5 | ❌ | [2, 5, 1, 8] |
| 1 | 5 > 1 | ✅ | [2, 1, 5, 8] |

**End of Pass 2:** [2, 1, 5, 8]

#### PASS 3 (j = 2)
| i | Compare | Swap? | Array |
|---|----------|--------|-------|
| 0 | 2 > 1 | ✅ | [1, 2, 5, 8] |

**End of Pass 3:** [1, 2, 5, 8]  
Sorted 🎉 (and fizzing happily)

---

## 🧩 Selection Sort
**Concept:**  
Find the smallest element and move it to the front each pass — like picking the cutest kitten from a box 🐱  

---

### 🎯 Dry Run with Array: `[5, 2, 8, 1]`

#### PASS 1 (i = 0)
- Find minimum from index 0–3 → `1`
- Swap `arr[0]` with `arr[3]`
> [1, 2, 8, 5]

#### PASS 2 (i = 1)
- Find minimum from index 1–3 → `2`
- Swap `arr[1]` with `arr[1]` (no change)
> [1, 2, 8, 5]

#### PASS 3 (i = 2)
- Find minimum from index 2–3 → `5`
- Swap `arr[2]` with `arr[3]`
> [1, 2, 5, 8]

Sorted. Simple, predictable, but kinda slow 😴

---

## ✍️ Insertion Sort
**Concept:**  
Takes one element and *inserts it* into the correct position among sorted ones.  
Think of sorting cards in your hand — but with less caffeine ☕  

---

### 🎯 Dry Run with Array: `[5, 2, 8, 1]`

#### PASS 1 (i = 1)
Insert 2 into sorted part `[5]`  
→ Shift 5 → `[2, 5, 8, 1]`

#### PASS 2 (i = 2)
Insert 8 into `[2, 5]`  
→ No shift → `[2, 5, 8, 1]`

#### PASS 3 (i = 3)
Insert 1 into `[2, 5, 8]`  
→ Shift 8 → `[2, 5, 8, 8]`  
→ Shift 5 → `[2, 5, 5, 8]`  
→ Shift 2 → `[2, 2, 5, 8]`  
→ Place 1 → `[1, 2, 5, 8]`

Sorted and polite 🧤

---

## 🧬 Merge Sort
**Concept:**  
Divide, divide, divide — until each element stands alone.  
Then merge them like assembling a jigsaw puzzle 🔍  
*Stable, efficient, and a fan of recursion.*

---

### 🎯 Dry Run with `[5, 2, 8, 1]`

**Step 1: Split**
```

[5, 2, 8, 1]
→ [5, 2] and [8, 1]
→ [5] [2] [8] [1]

```

**Step 2: Merge**
```

[5] + [2] → [2, 5]
[8] + [1] → [1, 8]

```

**Step 3: Merge again**
```

[2, 5] + [1, 8]
→ Compare 2 & 1 → [1]
→ Compare 2 & 8 → [1, 2]
→ Compare 5 & 8 → [1, 2, 5, 8]

```

Final Array: `[1, 2, 5, 8]`  
Big brain sort. Quietly elite 🧠✨

---

## ⚡ Quick Sort
**Concept:**  
Pick a pivot → throw smaller ones to its left, bigger to the right.  
Then recursively sort both sides.  
Fast and furious when done right 🚗💨  

---

### 🎯 Dry Run with `[5, 2, 8, 1]`

**Pivot:** `5`  
Partition → `[2, 1] | 5 | [8]`

**Left side:** `[2, 1]`
- Pivot = 2 → `[1] | 2 | []` → `[1, 2]`

**Right side:** `[8]` (already sorted)

**Combine:**
```

[1, 2] + [5] + [8] = [1, 2, 5, 8]

```

Fast. Clean. A little dramatic 🔪

---

## 🧠 Summary Table

| Algorithm | Best Case | Worst Case | Average | Stable | Extra Space |
|------------|------------|-------------|----------|---------|--------------|
| Bubble Sort | O(n) | O(n²) | O(n²) | ✅ | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | ❌ | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | ✅ | O(1) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | ✅ | O(n) |
| Quick Sort | O(n log n) | O(n²) | O(n log n) | ❌ | O(log n) |

---

💡 **Pro Tip:**  
Don’t just memorize — *visualize* these.  
They’re not just code, they’re choreography 💃🧮

---
```

---

