gsap.to("#page2 h1",{
    transform:"translate(-146%)",
    scrollTrigger:{
        trigger:"#page2",
        scroller:"body",
        // markers:true,
        start:"top 90%",
        end:"top -100%",
        scrub:2,
        // pin:true
    }
})


var path =`M 10 100 Q 500 100 990 100`;

var finalpath =`M 10 100 Q 500 100 990 100`;

var strings = document.querySelector("#string");

strings.addEventListener("mousemove", function (dets){

    path =`M 10 100 Q ${dets.x} ${dets.y} 990 100`

    gsap.to("svg path", {
        attr:{ d:path },
        duration:0.2,
        ease:"power2.out"
    })
})

strings.addEventListener("mouseleave", function(){
    gsap.to("svg path",{
        attr:{ d:finalpath },
        duration:1.5,
        ease:"elastic.out(1,0.2)"
    })
})

var main = document.querySelector("#main")
var cursor = document.querySelector("#cursor")
var imageDiv = document.querySelector("#image")

main.addEventListener("mousemove", function (dets){
   gsap.to(cursor,{
    x:dets.x,
    y:dets.y,
    duration:1,
    ease:"power2.out"
   })
})  

imageDiv.addEventListener("mouseenter", function(){
     cursor.innerHTML = "View More"
    gsap.to(cursor,{
        scale:2,
        backgroundColor:"#ffffff7c"
    })
})

imageDiv.addEventListener("mouseleave", function(){
    cursor.innerHTML = ""
    gsap.to(cursor,{
        scale:1,
        backgroundColor:"#ffffff"
    })
})

var menu = document.querySelector(".ri-menu-3-fill");
var close = document.querySelector(".ri-close-line");

var tl = gsap.timeline()

tl.to("#full",{
    right:0,
    ease:"elastic.out(1,0.5)"
})

tl.from("#full h1",{
    x:100,
    opacity:0,
    ease:"power2.out",
    stagger:0.3
})

tl.pause()

menu.addEventListener("click", function(){
   tl.play()
})

close.addEventListener("click", function(){
    tl.reverse()
})


function breakTheText(){
    var h3 = document.querySelector("h3")
    var h1Text = h3.textContent

    var splittedText = h1Text.split("")
    var halfval = splittedText.length/2

    var clutter =""

    splittedText.forEach(function(elem,idx){
       if(idx < halfval){
         clutter += `<span class="a">${elem}</span>`
       }
       else{
          clutter += `<span class="b">${elem}</span>`
       }
    })
    
    h3.innerHTML = clutter
}

breakTheText()

gsap.from("h3 .a",{
    y:70,
    opacity:0,
    duration:0.6,
    stagger:0.15,
    delay:0.5,
})

gsap.from("h3 .b",{
    y:70,
    opacity:0,
    duration:0.6,
    stagger:-0.15,
    delay:0.5, 
})

gsap.from("h3",{
    scrollTrigger:{
        trigger:"h3",
        scroller:"body",
        scrub:2,
    }
})


gsap.to("#box",{
    x:300,
    duration:3,
    delay:2,
})