
var card=document.createElement("div");
card.className="card";

var videoposter=document.createElement("div");
videoposter.className="videoposter";

var videoinfo=document.createElement("div");
videoinfo.className="videoinfo";


card.appendChild(videoposter);
card.appendChild(videoinfo);



var posterimg=document.createElement("img");
posterimg.src="img.webp";


videoposter.appendChild(posterimg);

var playlist=document.getElementById("play");


playlist.appendChild(card);


var profile=document.createElement("div");
profile.className="profile";

var title=document.createElement("div");
title.className="title";

var discription=document.createElement("div");
discription.className="description";

videoinfo.appendChild(profile);
videoinfo.appendChild(title);
videoinfo.appendChild(discription);


let profileimg=document.createElement("img");
profileimg.src="profile.jpg";


profile.appendChild(profileimg);

var heding=document.createElement("h2");
heding.textContent="Select domains from over 500 domain extensions. For as low as INR 99/mo EXPERIMENT WITH NOMY  ";
title.appendChild(heding);


var titleinfo=document.createElement("p");
titleinfo.textContent="14K views • 4 hours ago";
title.appendChild(titleinfo);

var menu=document.createElement("i");
menu.className="ri-more-2-fill";
discription.appendChild(menu);