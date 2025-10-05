
public class search{
    //untuk string
    // static void sorting(String[] index,String key){
    //     for(int i=0; i < index.length;i++){
    //         if(index[i].equals(key)){
    //             System.out.println("Data "+key+" ditemukan pada index ke-"+i);
    //             break;
    //         }
    //     }
    // }
    //untuk integer
    static void search(int[] index,int key){
        for(int i=0; i < index.length;i++){
            if(index[i] == key){
                System.out.println("Data "+key+" ditemukan pada index ke-"+i);
                break;
            }
        }
    }
    public static void main(String[] args) {
        String[] A = {"Aku","Kamu","Dia","Mereka"};
        int[] B = {2,3,4,5};
        int key = 2;
        search(B,key);
    }
}