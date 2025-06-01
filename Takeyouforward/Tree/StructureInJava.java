class TreeStructure{
    public int data;
    public TreeStructure left;
    public TreeStructure right;



    public TreeStructure(int val){
        data = val;
    }
}
public class StructureInJava{
    public static void main(String args[]){
        TreeStructure root = new TreeStructure(1);
        root.left = new TreeStructure(2);
        root.right = new TreeStructure(3);
        root.left.right = new TreeStructure(4);
        root.left.left = new TreeStructure(5);
    }
}