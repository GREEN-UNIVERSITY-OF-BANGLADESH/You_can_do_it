// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/PAIREQ
// Language: cpp / go / c / python
// Date: 2023-05-17
// Difficulty Rating: 928

package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for i := 1; i <= t; i++ {
		var n int
		fmt.Scan(&n)

		var arr []int
		for i := 0; i < n; i++ {
			var x int
			fmt.Scan(&x)
			arr = append(arr, x)
		}

		// count frequency of each element
		var freq = make(map[int]int)
		for i := 0; i < n; i++ {
			freq[arr[i]]++
		}

		// find the maximum frequency
		var maxFreq int
		for _, v := range freq {
			if v > maxFreq {
				maxFreq = v
			}
		}

		fmt.Println(n - maxFreq)
	}
}