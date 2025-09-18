


gsap.to(".box",{
    duration:3,
    x:400,
    // delay:3,
    scrollTrigger:{
        trigger:"#page2",
        scroller:"body",
        start:"top 80%",
        end:"bottom 50%",
        markers:true
    }
})