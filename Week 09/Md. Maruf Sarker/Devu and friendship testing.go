// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/CFRTEST
// Language: cpp / go / c / python
// Date: 2023-05-18
// Difficulty Rating: 1061

package main

import (
	"fmt"
	"sort"
)

func main() {
	var t int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		var n int
		fmt.Scan(&n)

		var arr [101]int
		for j := 0; j < n; j++ {
			var temp int
			fmt.Scan(&temp)
			arr[temp]++
		}

		sort.Ints(arr[:])
		var count int = 0
		for j := 0; j < 101; j++ {
			if arr[j] > 0 {
				count++
			}
		}
		fmt.Println(count)
	}
}