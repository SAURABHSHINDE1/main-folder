document.addEventListener('DOMContentLoaded', () => {
    var secondDiv = document.querySelector('.hidden-acc-div');
    secondDiv.style.display = 'none';
});

var user = document.querySelector('.ri-user-3-line').addEventListener('click', (e) => {
    var secondDiv = document.querySelector('.hidden-acc-div');
    if (secondDiv.style.display === 'none' || secondDiv.style.display === '') {
        secondDiv.style.display = 'flex';
    } else {
        secondDiv.style.display = 'none';
    }
});

document.body.addEventListener('click', (e) => {
    var secondDiv = document.querySelector('.hidden-acc-div');
    if (e.target.className !== 'ri-user-3-line') {
        secondDiv.style.display = 'none';
    }
});


 function fetchResults() {
    const params = new URLSearchParams(window.location.search);
    const searchTerm = params.get("q");
    // const id = params.get("q");

    var h = document.getElementById("h2");
    h.textContent = `Search Results for"${searchTerm}"`;

    var p = document.getElementById("p");
    p.textContent = `No results found for "${searchTerm}".`;

    async function course()
    {
        try{

        var response = await fetch(`http://localhost:3000/course/${searchTerm}`);
        var data = await response.json();
        console.log(data); 
        data.forEach(element => {
            var id = document.getElementById("p").style.display="none";
    
            var coursecontainer = document.querySelector('.course-container');
    
            var coursecard = document.createElement("div");
            coursecard.className="coursecard";
            coursecontainer.appendChild(coursecard);
    
            var image = document.createElement("div");
            image.className="image";
            coursecard.appendChild(image);
    
            var img = document.createElement("img");
            img.src=element.image;
            image.appendChild(img);
    
            var discription = document.createElement("div");
            discription.className="discription";
            coursecard.appendChild(discription);
    
            var p1 = document.createElement("p");
            p1.innerText=`Rs${element.price}`;
            discription.appendChild(p1);
    
            var name = document.createElement("h2");
            name.innerText=element.course_name;
            discription.appendChild(name);
    
            var button = document.createElement("button");
            button.id="buynow";
            button.textContent="Buy Now"
            discription.appendChild(button);
        });
       
        }
        catch(err)
        {
            console.log(err);
        }
        
    }

    window.addEventListener('DOMContentLoaded',course());
   
}
fetchResults();

