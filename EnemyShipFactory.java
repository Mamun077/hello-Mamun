/**
 * Created by ASUS on 5/10/2016.
 */
public class EnemyShipFactory {

    public AbstractClass makeEnemy(String s){
        AbstractClass EnemyShip = null;
        if(s.equals("u")){
            EnemyShip = new UFOEnemyShip();

        }
        if(s.equals("r")){
            EnemyShip = new RocketEnemyShip();

        }
        if(s.equals("b")){
            EnemyShip = new BigUFOEnemyShip();
        }
        return EnemyShip;
    }
}
