# Roman Numerals Conversion

Seven different symbols represent Roman numerals with the following values:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral follows these rules:

1. **If the value does not start with 4 or 9**:
   - Select the symbol of the maximal value that can be subtracted from the input.
   - Append that symbol to the result.
   - Subtract its value and convert the remainder to a Roman numeral.

2. **If the value starts with 4 or 9**:
   - Use the subtractive form representing one symbol subtracted from the following symbol.
   - Examples:
     - 4 is 1 (I) less than 5 (V): `IV`
     - 9 is 1 (I) less than 10 (X): `IX`
   - Only the following subtractive forms are used:
     - 4 → `IV`
     - 9 → `IX`
     - 40 → `XL`
     - 90 → `XC`
     - 400 → `CD`
     - 900 → `CM`

3. **Only powers of 10** (`I`, `X`, `C`, `M`) can be appended consecutively at most 3 times to represent multiples of 10.
   - Symbols like `V`, `L`, or `D` cannot be appended multiple times.
   - If you need to append a symbol 4 times, use the subtractive form.

---

## Examples

### Example 1:
**Input:** `num = 3749`  
**Output:** `"MMMDCCXLIX"`  

**Explanation:**
3000 = MMM → 1000 (M) + 1000 (M) + 1000 (M)
700 = DCC → 500 (D) + 100 (C) + 100 (C)
40 = XL → 10 (X) less than 50 (L)
9 = IX → 1 (I) less than 10 (X)
