func minPartitions(n string) int {
    ans := 0
	for i := 0; i < len(n); i++ {
		digit := int(n[i] - '0')
		if digit > ans {
			ans = digit
		}
	}
	return ans
}