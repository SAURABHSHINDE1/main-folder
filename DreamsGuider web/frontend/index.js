// gsap.to("#imges-div , #imges-div1 , #imges-div2", {
//     transform:"translateY(-200%)",
//     duration: 10,
//     scrollTrigger:{
//         trigger:"#page3",
//         scroller:"body",
//         // markers:true,
//         start:"top -10%",
//         end:"top -140%",
//         scrub:2,
//         pin:true
//     }
// })



// gsap.from("#des1 ,#des2 ,#des3", {
//     transform:"translateY(-200%)",
//     duration: 10,
//     opcitiy:0,
//     scrollTrigger:{
//         trigger:"#page3",
//         scroller:"body",
//         // markers:true,
//         start:"top -10%",
//         end:"top -140%",
//         scrub:2,
//     }
// });

// gsap.to(".move_elem",{
//     transform:"translateY(550%)",
//     duration:1,
//     scrollTrigger:{
//         trigger:"#page3",
//         scroller:"body",
//         // markers:true,
//         start:"top 0%",
//         end:"top -120%",
//         scrub:2,
//     }

// })

gsap.to("#imges-div , #imges-div1 , #imges-div2", {
    transform: "translateY(-200%)",
    duration: 40,
    ease: "power1.inOut",
    scrollTrigger: {
        trigger: "#page3",
        scroller: "body",
        start: "top -10%",
        end: "top -200%", // Extended for smoother animation
        scrub: 5, // Slower effect
        pin: true
    }
});

gsap.from("#des1 ,#des2 ,#des3", {
    transform: "translateY(-200%)",
    duration:40,
    ease: "power1.inOut",
    scrollTrigger: {
        trigger: "#page3",
        scroller: "body",
        start: "top -10%",
        end: "top -200%", // Same timing
        scrub: 5
    }
});

gsap.to(".move_elem", {
    transform: "translateY(550%)",
    duration:40,
    ease: "power1.inOut",
    scrollTrigger: {
        trigger: "#page3",
        scroller: "body",
        start: "top 0%",
        end: "top -200%", // Aligned with others
        scrub: 5
    }
});


var tl = gsap.timeline()

tl.from(".button-div",{
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
const mediaQuery = window.matchMedia("(max-width:481px)");

// Function to handle changes
function handleScreenChange(e) {
    if (e.matches) {
        console.log("Screen width is 481px or less");
        let index = 0;

        function updateSlider() {
            document.querySelector(".slider").style.transform = `translateX(${-index * 333}px)`;
        }

        var bt1= document.getElementById("bt1").addEventListener('click',()=>{
            if (index > 0) {
                index--;
                updateSlider();
            
            }
        })

        var bt2 =document.getElementById('bt2').addEventListener('click',()=>{
            if (index < 2) {
                index++;
                updateSlider();
            }
        
        })
        
       
        
       
        
    } else {
        // console.log("Screen width is greater than 768px");
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



        
    }
}

// Add event listener
mediaQuery.addEventListener("change", handleScreenChange);

// Call function initially
handleScreenChange(mediaQuery);


var index = 0;

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



const divs = document.querySelectorAll('.studies');

divs.forEach(div => {
    div.addEventListener('click', () => {
        // Remove existing arrows from all divs
        document.querySelectorAll('.div-name-arrow img#arrow').forEach(arrow => {
            arrow.style.display = 'none';
        });

        // Reset background color for all divs
        divs.forEach(d => {
            d.style.backgroundColor = '';
            d.style.color = 'white';
        });

        // Set background color of the clicked div
        div.style.backgroundColor = '#ffffff5b';
        div.style.color = 'black';
        div.style.border = "none";

        // Find the arrow inside the clicked div and show it
        let arrow = div.querySelector('.div-name-arrow img#arrow');
        if (arrow) {
            arrow.style.display = 'block';
        }
    });
});






document.addEventListener('DOMContentLoaded', () => {
    // Hide all clicked divs first
    document.querySelectorAll('[class$="-clicked-div"]').forEach(div => {
        div.style.display = "none";
    });

    // Show the Frontend-clicked-div initially
    let frontendDiv = document.querySelector('.Frontend-clicked-div');
    if (frontendDiv) {
        frontendDiv.style.display = "block";
    }
});

// Ensure we have the correct section
var page9 = document.getElementById('page9');

if (page9) {
    page9.addEventListener('click', (e) => {
        let studiesDiv = e.target.closest('.studies');

        if (studiesDiv) {
            // Hide all other clicked divs before showing the selected one
            document.querySelectorAll('[class$="-clicked-div"]').forEach(div => {
                div.style.display = "none";
            });

            // Find the clicked div inside the selected .studies div
            let clickedDiv = studiesDiv.querySelector('[class$="-clicked-div"]');
            if (clickedDiv) {
                clickedDiv.style.display = "block";
            }
        }
    });
}




const mediaQuery2 = window.matchMedia("(min-width: 481px) and (max-width: 750px)");

// Function to handle changes
function handleScreenChange2(f) {
    if (f.matches) {
        console.log("Screen width is between 481px and 750px");
        let index = 0;

        function updateSlider() {
            document.querySelector(".slider").style.transform = `translateX(${-index * 720}px)`;
        }

        document.getElementById("bt1").addEventListener("click", () => {
            if (index > 0) {
                index--;
                updateSlider();
            }
        });

        document.getElementById("bt2").addEventListener("click", () => {
            if (index < 2) {
                index++;
                updateSlider();
            }
        });

    } else {
        // console.log("Screen width is outside the 481px - 750px range");
        // gsap.to(".features-div", {
        //     transform: "translateY(-650%)",
        //     scrollTrigger: {
        //         trigger: "#page6",
        //         scroller: "body",
        //         start: "top 0%",
        //         end: "top -120%",
        //         scrub: 2,
        //         pin: true
        //     }
        // });
    }
}

// Add event listener for screen size changes
mediaQuery2.addEventListener("change", handleScreenChange2);

// Initial check
handleScreenChange2(mediaQuery2);
