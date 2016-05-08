/**
 * Created by ASUS on 5/10/2016.
 */
public abstract class AbstractClass {
    private  String name;
    private double amtDamage;

    public void setName(String s){ name = s;}
    public void setDamage(double d){amtDamage = d;}

    public String getName(){
        return name;
    }
    public double getDamage(){
        return amtDamage;
    }

    public void followHeroShip(){
        System.out.println(getName()+"is following the hero ship");
    }
    public void displayEnemyShip(){
        System.out.println(getName()+"is on the screen");
    }
    public void enemyShipShoots(){
        System.out.println(getName()+" attacts and does "+getDamage()+" damages");
    }
}
