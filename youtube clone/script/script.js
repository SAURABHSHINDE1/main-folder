var database1=[
    {
        videoposter:"../assets/eng.webp",
        profileimg:"../assets/eng profile.jpg",
        title:"Day 1 Basics of English",
        channelname:"Mass Study",
        views_date:"12M views• Streamed 1 Year ago "
    },

    {
        videoposter:"../assets/drage race.webp",
        profileimg:"../assets/dragerace profile.jpg",
        title:"Brabus 900 Rocket R v 900hp AMGs: DRAG RACE",
        channelname:"CarWoW",
        views_date:"3.6M Views 3 Weeks ago "
    },

    {
        videoposter:"../assets/hp720.webp",
        profileimg:"../assets/hp720 profile.jpg",
        title:"Hollywood Movie In Hindi-Boonie Bears Blast Into the Past ",
        channelname:"Ultra Kids Zone",
        views_date:"8.4M Views 1 Year ago"
    }
];

    


    var searchinput=document.createElement("search").value;
      
    var searchvideo=database1.filter( data=> data.title.includes(searchinput));

    


database1.forEach(
    database=>{
        
var secondcard=document.createElement("div");
secondcard.className="second-card";

var videoposter=document.createElement("div");
videoposter.className="videoposter";
secondcard.appendChild(videoposter);

var videoposterimg=document.createElement("img");
videoposterimg.src=database.videoposter;
videoposter.appendChild(videoposterimg);

var videoinfo=document.createElement("div");
videoinfo.className="videoinfo";
secondcard.appendChild(videoinfo);

var profile=document.createElement("div");
profile.className="profile1";
videoinfo.appendChild(profile);

var profileimg=document.createElement("div");
profileimg.className="profile1";
profile.appendChild(profileimg);

var profileimgg=document.createElement("img");
profileimgg.src=database.profileimg;
profileimgg.style.height="50%";
profileimgg.style.marginTop="5px";
profileimgg.style.borderRadius="50%";
profileimg.appendChild(profileimgg);

var title=document.createElement("div");
title.className="title";
videoinfo.appendChild(title);

var titleh3=document.createElement("h3");
titleh3.textContent=database.title;
title.appendChild(titleh3);

var titlep=document.createElement("p");
titlep.textContent=database.channelname;
title.appendChild(titlep);

var views=document.createElement("p");
views.className="views";
views.textContent=database.views_date;
title.appendChild(views);



var menu=document.createElement("div");
menu.className="menu";
 videoinfo.appendChild(menu);

 var icon=document.createElement("i");
 icon.className="ri-more-2-fill";
menu.appendChild(icon);

var playlist=document.getElementById("playlist1");
playlist.appendChild(secondcard);

    }
)


    