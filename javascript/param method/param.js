

document.getElementById('button').addEventListener('click', ()=>
{
    var name = 'saurabh';
    window.open(url=`index.html?name=${name}`)
    alert("clicked!!!!!!!")
})