const students = [
    {
      name: "Alice Johnson",
      profileImage: "https://randomuser.me/api/portraits/women/1.jpg",
      qualification: "Bachelor of Science",
      age: 22,
      birthDate: "2002-03-15"
    },
    {
      name: "Bob Smith",
      profileImage: "https://randomuser.me/api/portraits/men/2.jpg",
      qualification: "Master of Arts",
      age: 24,
      birthDate: "2000-07-09"
    },
    {
      name: "Charlie Brown",
      profileImage: "https://randomuser.me/api/portraits/men/3.jpg",
      qualification: "Bachelor of Engineering",
      age: 23,
      birthDate: "2001-11-19"
    },
    {
      name: "Daisy Miller",
      profileImage: "https://randomuser.me/api/portraits/women/4.jpg",
      qualification: "Doctor of Medicine",
      age: 27,
      birthDate: "1997-05-30"
    },
    {
      name: "Ethan Wilson",
      profileImage: "https://randomuser.me/api/portraits/men/5.jpg",
      qualification: "Bachelor of Commerce",
      age: 21,
      birthDate: "2003-09-12"
    },
    {
      name: "Fiona Clarke",
      profileImage: "https://randomuser.me/api/portraits/women/6.jpg",
      qualification: "Bachelor of Science",
      age: 20,
      birthDate: "2004-01-22"
    },
    {
      name: "George Lewis",
      profileImage: "https://randomuser.me/api/portraits/men/7.jpg",
      qualification: "Master of Arts",
      age: 23,
      birthDate: "2001-08-16"
    },
    {
      name: "Hannah Scott",
      profileImage: "https://randomuser.me/api/portraits/women/8.jpg",
      qualification: "Bachelor of Engineering",
      age: 25,
      birthDate: "1999-04-25"
    },
    {
      name: "Ian Robinson",
      profileImage: "https://randomuser.me/api/portraits/men/9.jpg",
      qualification: "Doctor of Medicine",
      age: 28,
      birthDate: "1996-11-02"
    },
    {
      name: "Julia Turner",
      profileImage: "https://randomuser.me/api/portraits/women/10.jpg",
      qualification: "Bachelor of Commerce",
      age: 19,
      birthDate: "2005-06-18"
    },
    {
      name: "Kevin Young",
      profileImage: "https://randomuser.me/api/portraits/men/11.jpg",
      qualification: "Bachelor of Science",
      age: 21,
      birthDate: "2003-02-09"
    },
    {
      name: "Lily Green",
      profileImage: "https://randomuser.me/api/portraits/women/12.jpg",
      qualification: "Master of Arts",
      age: 24,
      birthDate: "2000-07-29"
    },
    {
      name: "Michael Harris",
      profileImage: "https://randomuser.me/api/portraits/men/13.jpg",
      qualification: "Bachelor of Engineering",
      age: 22,
      birthDate: "2002-10-13"
    },
    {
      name: "Nora Adams",
      profileImage: "https://randomuser.me/api/portraits/women/14.jpg",
      qualification: "Doctor of Medicine",
      age: 26,
      birthDate: "1998-03-05"
    },
    {
      name: "Oliver Baker",
      profileImage: "https://randomuser.me/api/portraits/men/15.jpg",
      qualification: "Bachelor of Commerce",
      age: 23,
      birthDate: "2001-09-08"
    },
    {
      name: "Paula Diaz",
      profileImage: "https://randomuser.me/api/portraits/women/16.jpg",
      qualification: "Bachelor of Science",
      age: 20,
      birthDate: "2004-12-20"
    },
    {
      name: "Quentin Miller",
      profileImage: "https://randomuser.me/api/portraits/men/17.jpg",
      qualification: "Master of Arts",
      age: 24,
      birthDate: "2000-06-30"
    },
    {
      name: "Rachel Clark",
      profileImage: "https://randomuser.me/api/portraits/women/18.jpg",
      qualification: "Bachelor of Engineering",
      age: 21,
      birthDate: "2003-03-01"
    },
    {
      name: "Samuel Young",
      profileImage: "https://randomuser.me/api/portraits/men/19.jpg",
      qualification: "Doctor of Medicine",
      age: 27,
      birthDate: "1997-05-14"
    },
    {
      name: "Tara Brown",
      profileImage: "https://randomuser.me/api/portraits/women/20.jpg",
      qualification: "Bachelor of Commerce",
      age: 22,
      birthDate: "2002-10-21"
    },
    {
      name: "Uma Patel",
      profileImage: "https://randomuser.me/api/portraits/women/21.jpg",
      qualification: "Bachelor of Science",
      age: 21,
      birthDate: "2003-01-07"
    },
    {
      name: "Victor Jones",
      profileImage: "https://randomuser.me/api/portraits/men/22.jpg",
      qualification: "Master of Arts",
      age: 23,
      birthDate: "2001-08-10"
    },
    {
      name: "Wendy Lee",
      profileImage: "https://randomuser.me/api/portraits/women/23.jpg",
      qualification: "Bachelor of Engineering",
      age: 24,
      birthDate: "2000-04-17"
    },
    {
      name: "Xander King",
      profileImage: "https://randomuser.me/api/portraits/men/24.jpg",
      qualification: "Doctor of Medicine",
      age: 29,
      birthDate: "1995-02-19"
    },
  ]



students.forEach( data=>{

    let saurabh=document.getElementById("saur");

    var idcard=document.createElement("div");
    idcard.className="id-card";
    saurabh.appendChild(idcard);

    var header=document.createElement("div");
    header.className="header";
    idcard.appendChild(header);

    var headreheading=document.createElement("h1");
    headreheading.textContent="Student Id Card";
    header.appendChild(headreheading);

    var line=document.createElement("hr");
    idcard.appendChild(line);

    var profile=document.createElement("div");
    profile.className="profile";
    idcard.appendChild(profile);

    var profileImage=document.createElement("div");
    profileImage.className="profileimg";
    profile.appendChild(profileImage);

    var img=document.createElement("img");
    img.src=data.profileImage;
    profileImage.appendChild(img);

    var info=document.createElement("div");
    info.className="information";
    idcard.appendChild(info);

    var infoheading=document.createElement("h1");
    infoheading.textContent=data.name;
    info.appendChild(infoheading);

    var qualification=document.createElement("h2");
    qualification.textContent = `Qualification:- ${data.qualification}`;
    info.appendChild(qualification);

    var age=document.createElement("h3");
    age.textContent = `Age:- ${data.age}`;
    info.appendChild(age);
    
    var birthdate=document.createElement("h4");
    birthdate.textContent = `Birth Date:- ${data.birthDate}`;
    info.appendChild(birthdate);
})
    
     