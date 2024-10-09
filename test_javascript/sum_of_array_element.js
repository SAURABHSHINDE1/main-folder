let arr=[1,2,3,4,5,6,7,8,9,10,11,12];

let add =arr.map( a=>
{
    add=0;
    for(let i=0;i<=arr.length;i++){
        add=add+arr[i];
    }
    return add
}
)

console.log(add);