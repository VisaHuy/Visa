bool isSorted(std::vector<int>& array) {
    //your code here
    for(int i = 1; i < array.size(); i++){
        if(array[i - 1] > array[i]){
            return false;
        }
    }
    return true;
}