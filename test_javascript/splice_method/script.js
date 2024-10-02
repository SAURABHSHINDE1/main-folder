var array=["nitin","saurabh","rohit","dipak","sahil","pratik","kiran","shubham","roshan","sakshi"];

array.splice(4,0,"manish");

console.log(array);

var temp=array.splice(6,1);

console.log(array);

var array2=["nitin","saurabh","rohit","dipak","sahil","kiran","shubham","roshan","sakshi"];

array2.push(temp);

console.log(array2);



 
