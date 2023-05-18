// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/problems/DIGARR?tab=statement
// Language: cpp / go / c / python
// Date: 2023-05-18
// Difficulty Rating: 949

package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		var n int
		fmt.Scan(&n)
		var s string
		fmt.Scan(&s)

		var cnt int
		var sz int = len(s)

		for j := 0; j < sz; j++ {
			if s[j] == '0' || s[j] == '5' {
				cnt++
			}
		}

		if cnt >= 1 {
			fmt.Println("Yes")
		} else {
			fmt.Println("No")
		}
	}
}