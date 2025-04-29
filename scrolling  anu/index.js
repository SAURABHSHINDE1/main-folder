gsap.to("#imges-div , #imges-div1 , #imges-div2", {
    transform:"translateY(-200%)",
    scrollTrigger:{
        trigger:"#section",
        scroller:"body",
        // markers:true,
        start:"top 30%",
        end:"top -120%",
        scrub:2,
        pin:true
    }
})



gsap.from("#des1 ,#des2 ,#des3", {
    transform:"translateY(-200%)",
    duration: 1,
    scrollTrigger:{
        trigger:"#section",
        scroller:"body",
        // markers:true,
        start:"top 30%",
        end:"top -120%",
        scrub:2,
    }
});



