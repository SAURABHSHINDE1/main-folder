document.body.addEventListener("mousemove",(e)=>{
   
    var dot = document.createElement("div");
    dot.className = "box";
    document.body.appendChild(dot);
    dot.style.top =e.clientY + "px";
    dot.style.left =e.clientX + "px";
   
    // var item = e.target.parentElement;
    // if(e.target.className == "ri-close-line"){
    //     item.className ="line";
    // }

    setTimeout(() => {
       dot.style.display="none";
    }, 500);

})