
    function toggleDiv() {
        const secondDiv = document.getElementById('secondDiv');
        if (secondDiv.style.display === '' || secondDiv.style.display === 'none')
             {
            secondDiv.style.display = 'flex'; 
        } else {
            secondDiv.style.display = 'none'; 
        }
    }
