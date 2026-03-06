int Count(string S) {
    // complete the function here
    int count=0;
    for(auto i:S){
        if(isalpha(i))count++;
    }
    return count;
}