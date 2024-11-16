/**
 * This program displays a greeting from the author.
 * @version 1.30 2014-02-27
 * @author Cay Horstmann
*/

/*
 * Ouput: 
Welcome to Core Java
=
=
=
=
=
=
=
=
=
=
=
=
=
=
=
=
=
=
=
=
*/

public class Welcome
{
    public static void main(String[] args)
    {
        String greeting = "Welcome to Core Java";
        System.out.println(greeting);
        for(int i = 0; i < greeting.length(); i++)
            System.out.println("=");
        System.out.println();
    }
}

