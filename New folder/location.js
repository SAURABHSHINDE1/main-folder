const button = document.getElementById('get_location');
function get_location(position){
    console.log(position);
}

function failedtogetloction()
{
    console.log ("there is a problem");
}

button.addEventListener('click', async ()=>{
     const result=navigator.geolocation.getCurrentPosition(get_location,failedtogetloction);
});