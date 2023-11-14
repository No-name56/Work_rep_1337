const body = document.querySelector('body');
const btn = document.querySelector('.btn');

//to save the dark mode use the object "local storage".

//function that stores the value true if the dark mode is activated or false if it's not.
function store(value){
  localStorage.setItem('darkmode', value);
}

//function that indicates if the "darkmode" property exists. It loads the page as we had left it.
function load(){
  const darkmode = localStorage.getItem('darkmode');

  //if the dark mode was never activated
  if(!darkmode){
    store(false);
  } else if( darkmode == 'true'){ //if the dark mode is activated
    body.classList.add('darkmode');
  }
}


load();

btn.addEventListener('click', () => {
  body.classList.toggle('darkmode');
  //save true or false
  store(body.classList.contains('darkmode'));
})