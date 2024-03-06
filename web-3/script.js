function curser (){
    var page1Content = document.querySelector(".page1-content");
var curser = document.querySelector(".curser");

page1Content.addEventListener("mousemove", function (dets) {
    gsap.to(curser, {

        x: dets.x,
        y: dets.y,

    })
})

page1Content.addEventListener("mouseenter",function(){
    gsap.to(curser,{
        scale:1,
        opacity:1
    })
})

page1Content.addEventListener("mouseleave",function(){
    gsap.to(curser,{
        scale:0,
        opacity:0
    })
})
}

curser();

var tl = gsap.timeline();

gsap.from(".ved,.nav-part1 h2, .nav-part1 h3, .page1-h1 span",{
    y:-300,
    duration: 1,
    delay:0.4,
    stagger:1,
    opacity:0,
})


function smoothScroll (){
    // Smooth scrolling using jQuery
$(document).ready(function(){
    // Add smooth scrolling to all links
    $("a").on('click', function(event) {
      // Make sure this.hash has a value before overriding default behavior
      if (this.hash !== "") {
        // Prevent default anchor click behavior
        event.preventDefault();
  
        // Store hash
        var hash = this.hash;
  
        // Using jQuery's animate() method to add smooth page scroll
        $('html, body').animate({
          scrollTop: $(hash).offset().top
        }, 800, function(){
     
          // Add hash (#) to URL when done scrolling (default click behavior)
          window.location.hash = hash;
        });
      } // End if
    });
  });
  
}

smoothScroll();


gsap.from(".spans2,.page2-r1",{
    y:30,
    opacity:0,
    duration:0.8,
    // delay:1,
    // stagger:0.2,
    scrollTrigger:{
        trigger:".page2",
        scroller: "body",
        // markers:true,
        scrub:true,
        start:"top 70%",
        end: "top 30%",
    }
})
gsap.from(".span",{
    y:30,
    opacity:0,
    duration:0.8,
    // delay:1,
    stagger:0.5,
    scrollTrigger:{
        trigger:".page2",
        scroller: "body",
        // markers:true,
        // scrub:true,
        start:"top 30%",
        end: "top 30%",
    }
})

