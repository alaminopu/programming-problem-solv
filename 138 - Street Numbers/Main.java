public class Main{
	public static int[] R={6,8, 35,49, 204,288, 1189,1681, 6930,9800, 40391,
	    57121, 235416,332928, 1372105,1940449, 7997214,11309768, 46611179,65918161};
	
	public static void main(String[] args){
		int i;
		for(i=0; i<20; i=i+2){
			System.out.printf("%10d%10d\n",R[i],R[i+1]);
		}
	}
	
}