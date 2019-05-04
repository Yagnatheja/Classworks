//v is the vector
//location is the element at that location to remove

void removeVector(Vector * v,int location){
    if(v->current_size ==0){
	    return;
    }
    for(int i=0;i<v->max_size-1;i++){
        if(i >= location){
            v->data[i]=v->data[i+1];
        }
    }
    v->max_size=v->max_size-1;
    Data *new=malloc(sizeof(Data)* v->max_size);
   for(int i=0;i<v->max_size-2;i++){
	   new[i].value=-1;
   }
   v->current_size=v->current_size-1;
    memcpy(new,v->data,sizeof(Data)*v->current_size);
    free(v-> data);
    v->data=NULL;
    v->data=new;
    new =NULL;
}