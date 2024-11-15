
    function toggleDiv() {
        const secondDiv = document.getElementById('secondDiv');
        if (secondDiv.style.display === '' || secondDiv.style.display === 'none')
             {
            secondDiv.style.display = 'flex'; 
        } else {
            secondDiv.style.display = 'none'; 
        }
    }


// top salons 

const array =[
    {
        images:"",
    },
    {
        images:"",
    },
    {
        images:"",
    }


];

     var mainsection = document.getElementById('main1-sec');

array.forEach( img =>{

    var salon_card = document.createElement('div');
    salon_card.className = 'near-by-salon-card';
    mainsection.appendChild(salon_card);
    
    var salon_img = document.createElement('img');
    salon_img.src = img.images;

});


   