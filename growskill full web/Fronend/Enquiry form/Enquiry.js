
// Hide secondDiv initially when the page loads
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

 



function getdat(){
    var name = document.getElementById('fullname').value;
    var Email = document.getElementById('Email').value;
    var pNO = document.getElementById('pNO').value;
    var add = document.getElementById('add').value;
    var sub = document.getElementById('sub').value;

    // data ={
    //     name: name,
    //     Email: Email,
    //     phoneNo: pNO,
    //     address: add,
    //     subject: sub
    // }
    console.log(data);

    // fetch('https://your-api-endpoint.com/submit', {
    //     method: 'POST',
    //     headers: {
    //         'Content-Type': 'application/json'
    //     },
    //     body: JSON.stringify(data)
    // })
   
}

var button = document.getElementById('Submit').addEventListener('click', getdat())