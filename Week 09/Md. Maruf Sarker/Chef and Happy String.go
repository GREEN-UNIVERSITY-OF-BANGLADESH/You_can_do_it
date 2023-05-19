// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/HAPPYSTR
// Language: cpp / go / c / python
// Date: 2023-05-17
// Difficulty Rating: 956

package main

import "fmt"

func isVowel(c byte) bool {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
}

func main() {
	var t int
	fmt.Scan(&t)

	for i := 1; i <= t; i++ {
		var s string
		fmt.Scan(&s)

		var ok bool
		for j := 0; j < len(s)-1; j++ {
			if(isVowel(s[i]) && isVowel(s[i + 1]) && isVowel(s[i + 2])){
				ok = true;
				break;
			}
		}

		if(ok){
			fmt.Println("Happy")
		} else {
			fmt.Println("Sad")
		}
	}
}