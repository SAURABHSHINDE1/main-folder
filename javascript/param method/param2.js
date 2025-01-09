
var permas = new URLSearchParams(window.location.search);
var studentid = permas.get('name');
console.log(studentid);

var h2= document.getElementById('h2');
h2.textContent=studentid;