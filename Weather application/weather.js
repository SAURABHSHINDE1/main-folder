

var button = document.getElementById('button');
button.addEventListener('click',()=>
{
    var city =document.getElementById('search').value;

    fetch(`https://api.weatherstack.com/current?access_key=0c613edffc50ce88bcc39d1088c5d509&query=${city}`)

// console.log(`https://api.weatherstack.com/current?access_key=d4591a368edb53b12b81938f218c595e&query=${city}`)
.then((response)=>
{
    return response.json();
})

.then((data)=>
{
    
    var leftdata= document.querySelector('.left-data');
    
    

    var div= document.createElement("div");
    div.className="img-div";
    leftdata.appendChild(div);

    var img = document.createElement("img");
    img.id="img1";
    img.src=data.current.weather_icons[0];
    div.appendChild(img);

    var temp = document.createElement('h1');
    temp.id="temp";
    temp.textContent =data.current.temperature +"ºc";
    leftdata.appendChild(temp);

    var day = document.createElement('h4');
    day.id="day";
    day.textContent= data.location.region+","+data.current.observation_time;
    leftdata.appendChild(day);

    var hr = document.createElement('hr');
    hr.id="hr";
    leftdata.appendChild(hr);

    var showimg = document.createElement('div');
    showimg.className="show-img";
    leftdata.appendChild(showimg);

   
 
}
)
    
})

