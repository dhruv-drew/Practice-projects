var tl = gsap.timeline();


tl.from("nav img, nav h4, nav button",{
    y:-100,
    duration:1,
    delay:0.5,
    opacity:0,
    stagger: 0.2,
})

tl.from(".main-text h1",{
    y:300,
    // delay:1,
    duration: 1,
    opacity:0,
    stagger: 0.4,
})

tl.from(".img1",{
    x: -300,
    opacity:0,
    duration: 0.4,
})
tl.from(".img2",{
    x: 300,
    opacity:0,
    duration: 0.4,
})