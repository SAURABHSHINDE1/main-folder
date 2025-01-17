
var b1 =document.getElementById("fst");
var b2 =document.getElementById("sec");
var b3=document.getElementById("thr");






b1.addEventListener('click', ()=>{
    var name ="saurabh";
    window.open(url=`./index2.html?name=${name}`)
})

b2.addEventListener('click', ()=>{
    var name1 ="rohit";
    window.open(url=`./index2.html?name=${name1}`)
})

b3.addEventListener('click', ()=>{
    var name2 ="abhishek";
    window.open(url=`./index2.html?name=${name2}`)
})

