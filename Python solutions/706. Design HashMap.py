class MyHashMap:

    def __init__(self):
        self.HashMap = [-1] * 1000007        

    def put(self, key: int, value: int) -> None:
        self.HashMap[key] = value

    def get(self, key: int) -> int:
        return self.HashMap[key]

    def remove(self, key: int) -> None:
        self.HashMap[key] = -1


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)