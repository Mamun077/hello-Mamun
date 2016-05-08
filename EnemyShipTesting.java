/**
 * Created by ASUS on 5/10/2016.
 */
import java.util.Scanner;
public class EnemyShipTesting {

    public static void doStuffEnemy(AbstractClass E){
        E.displayEnemyShip();
        E.followHeroShip();
        E.enemyShipShoots();
    }

    public static void main(String[] args){
        AbstractClass E = null;
        String s ="";
        Scanner scn = new Scanner(System.in);
        System.out.println("what type of enemy do u want? r/u/b");
        if(scn.hasNextLine()){
            s = scn.nextLine();
        }
        EnemyShipFactory e = new EnemyShipFactory();
        E = e.makeEnemy(s);
        if(E!=null){
            doStuffEnemy(E);
        }

    }

}

