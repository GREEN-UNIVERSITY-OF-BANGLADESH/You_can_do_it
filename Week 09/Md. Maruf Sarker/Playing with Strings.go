// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/PLAYSTR?tab=submissions
// Language: cpp / go / c / python
// Date: 2023-05-18
// Difficulty Rating: 1108

package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		var n int
		fmt.Scan(&n)

		var s1, s2 string
		fmt.Scan(&s1)
		fmt.Scan(&s2)

		var c1, c2 int
		for j := 0; j < n; j++ {
			if s1[j] == '1' {
				c1++
			}
			if s2[j] == '1' {
				c2++
			}
		}

		if c1 == c2 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}