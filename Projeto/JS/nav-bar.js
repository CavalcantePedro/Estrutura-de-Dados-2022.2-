const bt_nav = document.querySelectorAll('#bt_nav');

bt_nav.forEach((element,i) =>
{
    let nome_estrutura = document.querySelector('#nome_estrutura');
    element.addEventListener('click', (event) => 
    {
        switch(i){
            case 0:
                nome_estrutura.innerHTML = "Lista Sequencial"
                break;
            case 1:
                nome_estrutura.innerHTML = "Lista Encadeada"
                break;
            case 2:
                nome_estrutura.innerHTML = "Lista Duplamente Encadeada"
                break;
            case 3:
                nome_estrutura.innerHTML = "Pilha"
                break;
            case 4:
                nome_estrutura.innerHTML = "Pilha Encadeada"
                break;
            case 5:
                nome_estrutura.innerHTML = "Fila"
                break;
            case 6:
                nome_estrutura.innerHTML = "Fila Encadeada"
                break;
        }
    });
});