

public Boolean findAuthorInLibrary(String author){

        for (int i = 0; i < library.length ;i ++) {

            if(library[i].getAuthor().equals(author)) {

                return true;

            }            

        }

        return false;
