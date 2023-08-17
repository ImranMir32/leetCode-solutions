/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var doubleIt = function (head) {
  if (head === null) return head;

  let dummy = new ListNode();
  let current = dummy;
  let carry = 0;

  let prev = null;
  let temp = head;

  while (temp !== null) {
    let nextTemp = temp.next;
    temp.next = prev;

    prev = temp;
    temp = nextTemp;
  }

  while (prev !== null) {
    let sum = carry;
    sum += prev.val + prev.val;
    prev = prev.next;

    carry = Math.floor(sum / 10);
    current.next = new ListNode(sum % 10);
    current = current.next;
  }

  if (carry > 0) {
    current.next = new ListNode(carry);
  }

  prev = null;
  temp = dummy.next;

  while (temp !== null) {
    let nextTemp = temp.next;
    temp.next = prev;

    prev = temp;
    temp = nextTemp;
  }

  return prev;
};
