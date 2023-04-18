/* When the user scrolls down, hide the navbar. When the user scrolls up, show the navbar */

var prevScrollpos = window.pageYOffset;
var emptyVar = document.body.scrollTop;
window.onscroll = function () {
    var currentScrollPos = window.pageYOffset;
    if (prevScrollpos > currentScrollPos) {
        // if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20)
        // Add this if you want it to disapear when you scroll all the way up
        document.getElementById("navbar").style.top = "0";
    }
    else {
        document.getElementById("navbar").style.top = "-55px";
    }
    prevScrollpos = currentScrollPos;
}
