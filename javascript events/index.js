document.body.addEventListener("mousemove",(e)=>{
   
    var dot = document.createElement("div");
    dot.className = "box";
    document.body.appendChild(dot);
    dot.style.top =e.clientY + "px";
    dot.style.left =e.clientX + "px";
    // console.log(e);
    // var item = e.target.parentElement;
    // if(e.target.className == "ri-close-line"){
    //     item.className ="line";
    // }

})