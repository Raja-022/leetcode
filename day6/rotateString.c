bool rotateString(char * s, char * goal){
    if(strlen(s)!=strlen(goal)) return false;
    char t[strlen(s)*2+1];
    strcpy(t,s);
    strcat(t,s);
    return strstr(t,goal)?true:false;
}
