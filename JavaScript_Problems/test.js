// var romanToInt = function (s) {
//   let x = s.split('')
//   let sum = 0

//   for (let i = 0; i < x.length; i++) {
//     switch (x[i]) {
//       case 'I':
//         sum += 1
//         break
//       case 'V':
//         sum += 5
//         break
//       case 'X':
//         sum += 10
//         break
//       case 'L':
//         sum += 50
//         break
//       case 'C':
//         sum += 100
//         break
//       case 'D':
//         sum += 500
//         break
//       case 'M':
//         sum += 1000
//         break
//     }
//   }
//   return sum
// }

// console.log(romanToInt('III')) // 3
// console.log(romanToInt('LVIII')) // 58
// console.log(romanToInt('MCMXCIV')) // 1994

// /*
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
//  */

// var mergeTwoLists = function (list1, list2) {
//   let flist = []

//   for (let i = 0; i < list1.length; i++) flist.push(list1[i])

//   for (let j = 0; j < list2.length; j++) flist.push(list2[j])
//   flist = flist.sort()
//   return flist
// }
// console.log(mergeTwoLists([1, 2, 4], [1, 3, 4]))
// console.log(mergeTwoLists([], []))
// console.log(mergeTwoLists([], [0]))

// var removeElement = function (nums, val) {
//   let result = nums
//   for (let i = 0; i < result.length; i++) {
//     if (result[i] === val) result[i] = '_'
//   }
//   return result.sort()
// }

// console.log(removeElement([2, 4, 2, 3, 2], 3))

let isPalindrome = function (x) {
  let pram = x.toString().split('')

  for (let i = 0; i < Math.ceil(pram.length / 2); i++) {
    if (pram[i] !== pram[pram.length - 1 - i]) return false
  }

  return true
}

console.log(isPalindrome(1234554321)) // => 9
console.log(isPalindrome(-121))
console.log(isPalindrome(121))
console.log(isPalindrome(121121))
console.log(isPalindrome(12))
console.log(isPalindrome(10001))
