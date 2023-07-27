func findArray(pref []int) []int {
    ans := make([]int, len(pref))
	ans[0] = pref[0]
	for i := 1; i < len(pref); i++ {
        ans[i] = pref[i-1] ^ pref[i]
    }
	return ans
}