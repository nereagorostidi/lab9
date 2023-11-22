
Node *Read(const char *filename){

    Node *p_first;
    Node *p_node, *p_aux;

    size_t *info;

    FILE *fp;
    fp=filename;

    filename = fopen(fp, "rb");

    if(fp=NULL){
        perror("No se pudo abrir el fichero modo lectura");
        exit(EXIT_FAILURE);
    }
    
    do{
        //reservando memoria para el nodo 
        p_node=malloc(sizeof(Node);
        //leyendo nodo actual 
        info = fread(p_node , sizeof(Node), 1, fp); 
        //en el nodo auxiliar guardamos la direccion que tenia el nodo siguiente en el disco
        p_aux= p_node->next;
        //en el nodo leido cambiamos su siguiente a nulo 
        p_node->next=0;
        //añadimos el nodo leido a la lista en memoria 
        p_first=Add(p_first, p_node);

    } 
    while(p_aux!=NULL);  //seguimos leyendo del disco mientras el nodo auxiliar no sea nulo 

}

