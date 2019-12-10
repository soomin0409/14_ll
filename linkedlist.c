typedef struct linknode{
	int data;
	
	void* next;
} ln_t;

static ln_t *list;

int creat_node(int value)
{
	ln_t *ptr;
	ln_t *ptrTrav;
	int cnt=0;
	
	ptr=(ln_t*)malloc(sizepf(ln_t));
	if(ptr == NULL)
	{
			return -1;
	}
	
	ptr->data =valne;
	ptr->next = NULL;
	if(list==NULL){
		list = ptr;
	}
	else
	{
		prtTrav = list;
		cnt++;
		while(ptrTrav->next != NULL)
		{
			ptrTrav = ptrTrav->next;
			cnt++;
		}
		prtrTrav->next =ptr;
	}
	return cnt;
	
}

