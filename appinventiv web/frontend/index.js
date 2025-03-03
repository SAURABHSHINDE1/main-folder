gsap.to("#imges-div , #imges-div1 , #imges-div2", {
    transform:"translateY(-200%)",
    scrollTrigger:{
        trigger:"#page3",
        scroller:"body",
        // markers:true,
        start:"top 0%",
        end:"top -120%",
        scrub:2,
        pin:true
    }
})



gsap.from("#des1 ,#des2 ,#des3", {
    transform:"translateY(-200%)",
    duration: 1,
    opcitiy:0,
    scrollTrigger:{
        trigger:"#page3",
        scroller:"body",
        // markers:true,
        start:"top 0%",
        end:"top -120%",
        scrub:2,
    }
});

gsap.to(".move_elem",{
    transform:"translateY(550%)",
    duration: 1,
    scrollTrigger:{
        trigger:"#page3",
        scroller:"body",
        // markers:true,
        start:"top 0%",
        end:"top -120%",
        scrub:2,
    }

})

var tl = gsap.timeline()

tl.from(".menus p, .button-div",{
    y:-100,
    opacity:0,
    duration:0.7,
    ease: "power2.inOut",
    stagger: 0.2
})

tl.from(".logo-div",{
    x:-20,
    opacity:0,
    duration:0.4,
    ease: "bounce.out",
    stagger: 0.2
})

tl.from("#h1 ,#para",{
    y:100,
    opacity:0,
    duration:0.4,
    ease: "power2.inOut",
    stagger: 0.2
})

tl.from("#button",{
    y:100,
    opacity:0,
    duration:0.4,
    ease: "power2.inOut",
    stagger: 0.2
})

gsap.to("#textfeel",{
    color:"#fff",
    scrollTrigger:{
        trigger:"#page1",
        scroller:"body",
        // markers:true,
        start:"top 100%",
        end:"top 10%",
        scrub:2,
        stagger:true,
    }

})


// gsap.to(".features-div",{
//     transform: "translateY(-650%)",
//     scrollTrigger:{
//         trigger:"#page6",
//         scroller:"body",
//         // markers:true,
//         start:"top 0%",
//         end:"top -120%",
//         scrub:2,
//         pin:true
//     }
// })

var menu = document.querySelector(".ri-menu-3-line");
var close = document.querySelector(".ri-close-line");

var tl = gsap.timeline()

tl.to("#full",{
    top:0,
    ease:"elastic.out(1,0.5)"
})

tl.from("#full h1",{
    y:100,
    opacity:0,
    ease:"power2.out",
    stagger:0.2
})

tl.pause()

menu.addEventListener("click", function(){
    tl.play()

})

close.addEventListener("click", function(){
    tl.reverse()
})


// Define a media query
const mediaQuery = window.matchMedia("(max-width: 768px)");

// Function to handle changes
function handleScreenChange(e) {
    if (e.matches) {
        console.log("Screen width is 768px or less");
        let index = 0;

        function updateSlider() {
            document.querySelector(".slider").style.transform = `translateX(${-index * 333}px)`;
        }

        var bt1= document.getElementById("bt1").addEventListener('click',()=>{
            if (index > 0) {
                index--;
                updateSlider();
                // function prevSlide() {
           
                // }
            }
        })

        var bt2 =document.getElementById('bt2').addEventListener('click',()=>{
            if (index < 2) {
                index++;
                updateSlider();
            }
            // function nextSlide() {
            
            // } 
        })
        
       
        
       
        
    } else {
        console.log("Screen width is greater than 768px");
        gsap.to(".features-div",{
            transform: "translateY(-650%)",
            scrollTrigger:{
                trigger:"#page6",
                scroller:"body",
                // markers:true,
                start:"top 0%",
                end:"top -120%",
                scrub:2,
                pin:true
            }
        })

        
    }
}

// Add event listener
mediaQuery.addEventListener("change", handleScreenChange);

// Call function initially
handleScreenChange(mediaQuery);


let index = 0;

function updateSlider() {
    document.querySelector(".slider").style.transform = `translateX(${-index * 800}px)`;
}

function prevSlide() {
    if (index > 0) {
        index--;
        updateSlider();
    }
}

function nextSlide() {
    if (index < 2) {
        index++;
        updateSlider();
    }
}






