//This program shows off nested switch cases
//Through these statements, we can create menus with multiple levels of options

#include <stdio.h>
#include <stdlib.h>


main()
{
    int c1, c2, c3;

    printf("Welcome to a simple Naruto character break-down!\n");
    printf("This menu will help you acquire some preliminary knowledge ");
    printf("of some Naruto characters, I hope you enjoy!\n");
    printf("1)Uzumaki Naruto\n");
    printf("2)Haruno Sakura\n");
    printf("3)Uchiha Sasuke\n");
    printf("4)Hatake Kakashi\n");
    printf("5)Hokages\n");
    printf("6)Akatsuki\n");
    printf("7)Tailed-Beasts\n");
    printf("8)Exit the program.\n");
    printf("\n");


    do
    {
        printf("Enter the option you wish to expand. (1 to 7)\n");
        printf("Or enter 8 to quit.\n");
        scanf(" %d", &c1);

        switch (c1) //This is the top menu
        {
            case(1) : printf("Uzumaki Naruto is the most unpreditable ninja ever.\n");
                      printf("His chakra is of Wind nature.\n");
                      printf("His specialty justus include: \n");
                      printf("Shadow Clone Jutsu\n");
                      printf("Rasengan\n");
                      printf("Rasen-Shuriken\n");
                      printf("Tailed-Beast Bomb\n");
                      printf("He can also summon some badass toads!\n");
                      printf("Ultimately, he inherited the sage powers from Asura ");
                      printf("and learned how to control the power of the tailed-beasts, ");
                      printf("including the Nine Tails inside him.\n");
                      printf("\n");
                      break;

            case(2) : printf("Haruno Sakura has a short temper and immense strength.\n");
                      printf("She is a medical ninja.\n");
                      printf("She doesn't really have specialty jutsu, however she is fast, smart, ");
                      printf("and can pretty much break anything with her fists./n");
                      printf("She can summon Healing Slugs to help her and comrades replenish chakra.\n");
                      printf("She is in love with Sasuke and will do anything to protect Naruto and Sasuke.\n");
                      printf("Whatever you do, do not piss her off...you will regret it.\n");
                      printf("\n");
                      break;

            case(3) : printf("Uchiha Sasuke is a cold-hearted and powerful ninja.\n");
                      printf("His chakra is of Lightning nature and Fire Nature.\n");
                      printf("Sasuke is also a wielder of the Sharingan and Mangekyo Sharingan powers.\n");
                      printf("His specialty jutsus include: \n");
                      printf("Fire Ball Justu\n");
                      printf("Chidori\n");
                      printf("Amaterasu\n");
                      printf("Kirin\n");
                      printf("He defeated Orochimaru, so he can now summon snakes for days!\n");
                      printf("He is ultimate rival/best friend of Naruto, and he inherited the Rinnegan from ");
                      printf("Indra.\n");
                      printf("He is motivated by the selflessness of his brother: Itachi.\n");
                      printf("\n");
                      break;

            case(4) : printf("Hatake Kakashi is a mysterious character.\n");
                      printf("He is not only a gifted ninja, but also suffered a past of betrayal, loss, and death.\n");
                      printf("He is known as the Copy-Ninja due to his left eye being a Sharingan.\n");
                      printf("This Sharingan was gifted to him by his friend Uchiha Obito before Obito passed away.\n");
                      printf("Kakashi is a Jonin, and he has mastered a lot of justus of all kinds of chakra natures.\n");
                      printf("His specialty justus include: \n");
                      printf("Chidori\n");
                      printf("Kamui\n");
                      printf("Copying other people\n");
                      printf("He is the teacher of Naruto, Sakura, and Sasuke when they were in the Ninja Academy./n");
                      printf("He even became the Hokage for a while!\n");
                      printf("\n");
                      break;

//-----------------HOKAGES------------------------------------------------------
            case(5) :
                {
                    printf("Here are a list of all the Hokages:\n");
                    printf("1)First Hokage\n");
                    printf("2)Second Hokage\n");
                    printf("3)Third Hokage\n");
                    printf("4)Fourth Hokage\n");
                    printf("5)Fifth Hokage\n");
                    printf("6)Sixth Hokage\n");
                    printf("7)Seventh Hokage\n");
                    printf("8)Go back.\n");
                    printf("9)Exit the program.\n");
                    printf("\n");

                    do
                    {
                        printf("Which Hokage would you like to know about? (1 - 7)\n");
                        printf("Or what would you like to do (8 -> Go back -or- 9 -> Quit)\n");
                        scanf(" %d", &c2);

                        switch (c2) //This is the Hokages
                        {
                            case(1) : printf("The first Hokage was: Hashirama Senju.\n");
                                      printf("He specialized in Wood Nature justus.\n");
                                      printf("He could also control the power of the tailed-beasts.\n");
                                      printf("\n");
                                      break;

                            case(2) : printf("The second Hokage was: Tobirama Senju.\n");
                                      printf("He is Hashirama's brother, and specialized in Space-Time ninjustu.\n");
                                      printf("He was able to master difficult techniques due to his speed and chakra manipulation.\n");
                                      printf("\n");
                                      break;

                            case(3) : printf("The third Hokage was: Hiruzen Sarutobi.\n");
                                      printf("He is known for his mastery in all forms of ninjutsu, earning him the nick name: ");
                                      printf("\"The Professor\"\n");
                                      printf("He is proficient in all 5 basic chakra natures, as well as Yin and Yang release.\n");
                                      printf("\n");
                                      break;

                            case(4) : printf("The fourth Hokage was: Minato Namikaze.\n");
                                      printf("He is Naruto's father, as well as being named: \"The Yellow Flash of The Leaf\"\n");
                                      printf("His nick name stems from his yellow hair and insane speed.\n");
                                      printf("He sealed half the nine-tails into Naruto and the other half into himself , saving the ");
                                      printf("Leaf Village from destruction.\n");
                                      printf("\n");
                                      break;

                            case(5) : printf("The fifth Hokage is: Tsunade.\n");
                                      printf("She is one of the legendary Sanin, and has tremendous medical knowledge and healing abilities.\n");
                                      printf("She became Sakura's master and is the master of the \"Strength of a Hundred Seal\", ");
                                      printf("allowing her chakra level to increase 100 fold.\n");
                                      printf("\n");
                                      break;

                            case(6) : printf("The sixth Hokage was: Danzo Shimura.\n");
                                      printf("He's an overall creepy guy who runs the Black Ops within the Leaf Village.\n");
                                      printf("His right arm is infused with Hashirama's DNA and a bunch of Sharingans to give himself ");
                                      printf("multiple lives.\n");
                                      printf("During his term, Danzo was killed by Sasuke, which led to Kakashi becoming Hokage.\n");
                                      printf("\n");
                                      break;

                            case(7) : printf("Lastly, the current Hokage, the seventh Hokage, is: Uzumaki Naruto.\n");
                                      printf("Becoming Hokage has been Naruto's dream since childhood, and he finally posses the strength ");
                                      printf("and maturity to be the Village's most powerful shinobi.\n");
                                      printf("\n");
                                      break;

                            case(8) : printf("Going back!\n");
                                      printf("\n");
                                      break;

                            case(9) : printf("Thanks for joining me!\n");
                                      exit(0);

                            default : printf("That's not a valid choice, please try again!\n");
                                      printf("\n");
                                      break;
                        }
                    } while(c2 != 8); //If c2 does equal 8, then we need to go to the outer switch-case
                    break;
                }


            case(6) : printf("Sorry, the Akatsuki is a secret organization, so I have limited information.\n");
                      printf("There have been multiple generations of the Akatsuki, and because of that, members come and go.\n");
                      printf("Although it is now a hostile organization, it used to be meant for good.\n");
                      printf("The organization was started by Yahiko, along with Nagato and Conan.\n");
                      printf("But, due to betrayal and Yahiko's death, Nagato took over as leader of the Akatsuki, naming himself \"Pain\"\n");
                      printf("Now the Akatsuki aims to steal the chakra of all 9 tailed beasts in an attempt to activate the infinite Tsukiyomi, ");
                      printf("a genjutsu that traps everyone on Earth in a dream forever.\n");
                      printf("Members included: Itachi of the Leaf, Sasori of the Sand, Orochimaru, and even Obito.\n");
                      printf("\n");
                      break;

//--------------------The Tailed Beasts----------------------------------------------
            case(7) :
                {
                    printf("The Tailed Beasts were born from the Sage of Six Paths dividing half of the Ten Tails' chakra into nine parts.\n");
                    printf("Tail Beasts often choose/are sealed within shinobi to exist with.\n");
                    printf("Shinobi with a Tail Beats inside them are called: Jinchuriki, and can utilize the Beast's power if it cooperates.\n");
                    printf("Here are the Tailed Beasts: \n");
                    printf("1)One Tail\n");
                    printf("2)Two Tails\n");
                    printf("3)Three Tails\n");
                    printf("4)Four Tails\n");
                    printf("5)Five Tails\n");
                    printf("6)Six Tails\n");
                    printf("7)Seven Tails\n");
                    printf("8)Eight Tails\n");
                    printf("9)Nine Tails\n");
                    printf("10)Go back.\n");
                    printf("11)Exit the Program.\n");
                    printf("\n");

                    do
                    {
                        printf("Which beast would you like to know about? (1 to 9)\n");
                        printf("Or what would you like to do? (10 -> Go back -or- 11 -> Quit)\n");
                        scanf(" %d", &c3);

                        switch(c3)
                        {
                            case(1) : printf("SHUKAKU\n");
                                      printf("This beast can utilize Wind, Earth, and Magnet release.\n");
                                      printf("It is also known for Sand Manipulation, as well as the ultimate physical defense and attack.\n");
                                      printf("It looks like a fat fox.\n");
                                      printf("Its Jinchuriki is Gaara.\n");
                                      printf("\n");
                                      break;

                            case(2) : printf("MATATABI\n");
                                      printf("This beast specializes in Fire release.\n");
                                      printf("It looks like a flaming cat.\n");
                                      printf("Its Jinchuriki is Yugito Nii.\n");
                                      printf("\n");
                                      break;

                            case(3) : printf("ISOBU\n");
                                      printf("This beast specializes in Water release.\n");
                                      printf("It is also known for swimming at immense speed, creating coral, and unleashing hallucinogenic mist.\n");
                                      printf("It looks like a sea turtle.\n");
                                      printf("Its Jinchuriki is Yagura, the 4th Mizukage.\n");
                                      printf("\n");
                                      break;

                            case(4) : printf("SON GOKU\n");
                                      printf("This beast specializes in Fire, Earth, and Lava release.\n");
                                      printf("It is also known for taijustu, creating volcanoes, and armour for itself out of molten rock.\n");
                                      printf("It looks like a monkey.\n");
                                      printf("Its Jinchuriki is Roshi.\n");
                                      printf("\n");
                                      break;

                            case(5) : printf("KOKUO\n");
                                      printf("This beast specializes in Water, Fire, and Boil release.\n");
                                      printf("It is knows for heating up its chakra to a boiling point and becoming extremely fast and strong.\n");
                                      printf("It looks like a deer.\n");
                                      printf("Its Jinchuriki is Han.\n");
                                      printf("\n");
                                      break;

                            case(6) : printf("SAIKEN\n");
                                      printf("This beast specializes in Water release.\n");
                                      printf("It is known for Soap Bubble jutsus, and secreting acidic alkali as well as adhesive goo.\n");
                                      printf("It looks like a slug.\n");
                                      printf("Its Jinchuriki is Utakata.\n");
                                      printf("\n");
                                      break;

                            case(7) : printf("CHOMEI\n");
                                      printf("This beast has no special chakra release, but it can create chakra threads to negate ninjustu.\n");
                                      printf("It is also known for flying, and emitting a blinding powder against its enemies.\n");
                                      printf("It looks like an armored beetle.\n");
                                      printf("Its Jichuriki is Fu.\n");
                                      printf("\n");
                                      break;

                            case(8) : printf("GYUKI\n");
                                      printf("This beast is known for having incredible power, speed, defense, and attack.\n");
                                      printf("It can create Super Charged Tail Beast Bombs that are much more destructive than the normal bomb.\n");
                                      printf("It looks a Minotaur but with Octopus tentacles instead of feet.\n");
                                      printf("Its Jichuriki is Bee.\n");
                                      printf("\n");
                                      break;

                            case(9) : printf("KURAMA\n");
                                      printf("This is the Tail Beast with the most amount of chakra, even though half of it died with Minato.\n");
                                      printf("Having an absurd amount of chakra, this beast defies all ninjustu normalities.\n");
                                      printf("It is fast, powerful, and extremely volatile, earning the name: \"Nine-tailed Demon Fox\"\n");
                                      printf("Its Jinchuriki is Naruto.\n");
                                      printf("\n");
                                      break;

                            case(10) : printf("Going back!\n");
                                    printf("\n");
                                       break;

                            case(11) : printf("Thanks for joining me!\n");
                                       exit(0);

                            default : printf("That is not a valid choice, please try again!\n");
                                      printf("\n");
                                      break;
                        }
                    } while(c3 != 10);
                    break;
                }

            case(8) : printf("Thanks for joining me!\n");
                      exit(0);

            default : printf("That's not a valid choice, try again please!\n");
                      printf("\n");
                      break;
        }
    } while(c1 > -10);

    return 0;
}
