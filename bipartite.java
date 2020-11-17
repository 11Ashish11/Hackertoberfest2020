
import java.util.*;

public class bipartite
{

    private int v;
    private int marked[];
    private String res="Yes";
    public bipartite(ungraph g,int v)
    {
        marked=new int[v];
        for(int i=0;i<v;i++)
        marked[i]=-1;
        this.v=v;
        Queue<Integer>q=new LinkedList<>();
        q.add(0);
        marked[0]=0;
        boolean ans=true;
        int color;
        int level=0;
        while(ans)
        {
            int s=q.size();
            if(s==0)
            break;
            level++;
            while(s>0)
            {
                int d=q.poll();
                for(int i:g.adj(d))
                {
                    if(marked[i]==-1)
                    {
                        marked[i]=level%2;
                        q.add(i);
                    }
                    else if(marked[i]!=level%2)
                    {
                        ans=false;
                        res="NO";
                        break;
                    }
                }
                s--;
            }
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int v=sc.nextInt();
        ungraph g= new ungraph(v);
        while(true)
        {
            System.out.println("enter the vertices :");
            int n1=sc.nextInt();
            if(n1<0)break;
            int n2=sc.nextInt();
            g.connect(n1,n2);
        }
        bipartite bp=new bipartite(g,v);
        System.out.println(bp.res);
    }
}