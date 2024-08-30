



var videos=[
    {
    videoposter:"videoposter.jpg",
    profileimg:"javascript/imgs/channels4_profile (1).jpg",
    title:"",
    viwes: '',
    channel:"",
    menu:""
},

{
    videoposter:"videoposter.jpg",
    profileimg:"javascript/imgs/channels4_profile (2).jpg",
    title:"",
    viwes: '',
    channel:"",
    menu:""
},

{
    videoposter:"videoposter.jpg",
    profileimg:"javascript/imgs/channels4_profile (3).jpg",
    title:"",
    viwes: '',
    channel:"",
    menu:""
},

{
    videoposter:"videoposter.jpg",
    profileimg:"javascript/imgs/channels4_profile (4).jpg",
    title:"",
    viwes: '',
    channel:"",
    menu:""
},

{
    videoposter:"videoposter.jpg",
    profileimg:"javascript/imgs/(5).jpg",
    title:"",
    viwes: '',
    channel:"",
    menu:""
}
]


videos.forEach(
    video => 
        {
            var card=document.createElement("div");
card.className="card";

var videoposter=document.createElement("div");
videoposter.className="videoposter";

var videoinfo=document.createElement("div");
videoinfo.className="videoinfo";


card.appendChild(videoposter);
card.appendChild(videoinfo);



var posterimg=document.createElement("img");
posterimg.src=video.videoposter;


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
       }
)



var student=[
    {
        name:"saurabh",
        Rollno: 1,
        marathi:90,
        english:80,
        math:95
    },
    {
        name:"rohit",
        Rollno: 2,
        marathi:92,
        english:80,
        math:94
    },
    {
        name:"abhishek",
        Rollno: 3,
        marathi:90,
        english:76,
        math:96
    },
    {
        name:"dipak",
        Rollno: 4,
        marathi:80,
        english:80,
        math:90
    },
    {
        name:"sahil",
        Rollno: 5,
        marathi:59,
        english:80,
        math:95
    }
]



student.forEach(
    student => 
    {
        var row=document.createElement("tr");

var head=document.createElement("th");
head.textContent=student.name;

var head1=document.createElement("th");
head1.textContent=student.Rollno;

var head2=document.createElement("th");
head2.textContent=student.marathi;

var head3=document.createElement("th");
head3.textContent=student.english;

var head4=document.createElement("th");
head4.textContent=student.math;

row.appendChild(head);

row.appendChild(head1);

row.appendChild(head2);

row.appendChild(head3);

row.appendChild(head4);

document.getElementById("table").appendChild(row);
    })