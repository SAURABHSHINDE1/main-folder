fetch('https://jsonplaceholder.typicode.com/todos')

.then((response) =>
{
    return response.json();
})

.then((data) =>
{
    console.log(data);

    data.forEach(elem => {
        var body = document.getElementById("card-container")
        var card = document.createElement('div');
        card.className = 'card';
        

        var content = document.createElement('h2');
        content.textContent = `UserId:${elem.id}`;
        card.appendChild(content);

        var title = document.createElement('p');
        title.textContent = `Title:${elem.title}`;
        card.appendChild(title);

        var status = document.createElement('p');
        status.textContent =`complete status:${elem.completed}`;
        card.appendChild(status);

        body.appendChild(card);
    });

  
  

    function truedata(data)
    {
        var body = document.getElementById("card-container")
        body.innerHTML ="";
        var truedata = data.filter(elem => elem.completed === true);
        console.log(truedata);
        truedata.forEach(elem => {
            var body = document.getElementById("card-container")
            var card = document.createElement('div');
            card.className = 'card';
            
    
            var content = document.createElement('h2');
            content.textContent = `UserId:${elem.id}`;
            card.appendChild(content);
    
            var title = document.createElement('p');
            title.textContent = `Title:${elem.title}`;
            card.appendChild(title);
    
            var status = document.createElement('p');
            status.textContent =`complete status:${elem.completed}`;
            card.appendChild(status);
    
            body.appendChild(card);
        });
    }
   

   function falsedata(data) {
    var body = document.getElementById("card-container")
        body.innerHTML ="";
        var truedata = data.filter(elem => elem.completed === false);
        console.log(truedata);

        truedata.forEach(elem => {
            var body = document.getElementById("card-container")
            var card = document.createElement('div');
            card.className = 'card';
            
    
            var content = document.createElement('h2');
            content.textContent = `UserId:${elem.id}`;
            card.appendChild(content);
    
            var title = document.createElement('p');
            title.textContent = `Title:${elem.title}`;
            card.appendChild(title);
    
            var status = document.createElement('p');
            status.textContent =`complete status:${elem.completed}`;
            card.appendChild(status);
    
            body.appendChild(card);
        });
   }


   var check1= document.getElementById("check1");
   var check2= document.getElementById("check2");

// while(check1.checked)
// {
//     truedata(data);
// }

// while(check2.checked)
// {
//     falsedata(data);
// }

   check1.addEventListener("click", ()=>{
    if(check1.checked){
        truedata(data);
    }
   })

   check2.addEventListener("click", ()=>{
    if(check2.checked){
        falsedata(data);
    }
   })

   
})