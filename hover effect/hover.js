var clickdiv =document.querySelector("#hover");
var menu =document.querySelector(".drop-down");
var close =document.querySelector(".close");

clickdiv.addEventListener("click", function(){
    menu.style ="display:block";
});
close.addEventListener("click", function(){
    menu.style ="display:none";
});

