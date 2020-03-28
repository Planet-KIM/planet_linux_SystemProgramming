int findChar(char *str, char ch){
	int j, found = 0;

	for(j=0 ; *str!=0 ; str++){
	       if(*str == ch){
			found = 1;
	 		break;
	       }
		else{
			j++;
		}
	if(found == 1){return j;}
	else{return -1;}
	}
}

