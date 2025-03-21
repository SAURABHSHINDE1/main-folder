// 1. push()
// Adds one or more elements to the end of an array and returns the new length.

const array =[1,2];
console.log("original Array:-"+ array);
array.push(3,4);
console.log("After push Array:-"+ array);

// 2. pop()
// Removes the last element from an array and returns it.
let arr =[1,2,3,4,5];
console.log("original Array" + arr);
var poped = arr.pop();
console.log("After pop Array" + arr);
console.log(poped);

// 3. unshift()
// Adds one or more elements to the beginning of an array and returns the new length.
let array2 =[2,3,4];
console.log("original Array:-" + array2);
array2.unshift(0,1);
console.log("After unsfit the Array:-" +array2);

// 4. shift()
// Removes the first element from an array and returns it.
let array3 =[1,2,3,4,5];
console.log("original array:-" + array3);
array3.shift();
console.log("After shift the array:-" + array3);


// 5. concat()
// Merges two or more arrays into a new array without modifying the original arrays.
let arr1 =[1,2,3];
let arr2 =[4,5,6];
console.log("original Array:-" + arr1,arr2);
var concated = arr1.concat(arr2);
console.log("After concated:-" + concated);
