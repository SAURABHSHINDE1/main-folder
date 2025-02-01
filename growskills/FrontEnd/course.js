async function data ()
{
    var response =await fetch(`http://localhost:3000/course`) 
    var data = await response.json();

    console.log(data);

    data.forEach(element => {
        var cousercard = document.createElement('div');
        cousercard.className="course-card";

        var image = document.createElement('div');
        image.className="img-div";
        cousercard.appendChild(image);

        var description = document.createElement('div');
        description.className="lower-div";
        cousercard.appendChild(description);

        var h2 = document.createElement("h2");
        h2.innerText=`Course Name ${element.course_name}`
    });
    
}

data();