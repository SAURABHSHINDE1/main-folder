const array=['saurabh', 'aditya','abhishek','rohit'];

console.log(array.splice(2,5));

var unshift = array.unshift(1,2);
console.log(unshift)
console.log(array)


var shift = array.shift();
console.log(shift)
console.log(array)



let result = array.reduce((accumulator, currentValue) =>
     {
    return accumulator + currentValue;
}, 0);

console.log(result);

var spliced = array.slice( )
console.log(spliced)
