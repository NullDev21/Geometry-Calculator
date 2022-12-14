#include <stdio.h>
#include <math.h>

int main() {


    //Switch
    int scelta1;
    int triangolo;
    int cerchio;
    int quadrato;
    int rettangolo;

    //triangolo
    float areatriangolo;
    float altezzatriangolo;
    float basetriangolo;

    //rettangolo
    float arearettangolo;
    float altezzarettangolo;
    float baserettangolo;

    //cerchio
    float raggio;
    float areacerchio;
    float diametro;

    //quadrato
    float lato;
    float areaquadrato;

    //tools
    float pause;
    
    start:
    printf("  /$$$$$$                                                /$$                                /$$$$$$            /$$                     /$$             /$$                        \n"
           " /$$__  $$                                              | $$                               /$$__  $$          | $$                    | $$            | $$                        \n"
           "| $$  \\__/  /$$$$$$   /$$$$$$  /$$$$$$/$$$$   /$$$$$$  /$$$$$$    /$$$$$$  /$$   /$$      | $$  \\__/  /$$$$$$ | $$  /$$$$$$$ /$$   /$$| $$  /$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$ \n"
           "| $$ /$$$$ /$$__  $$ /$$__  $$| $$_  $$_  $$ /$$__  $$|_  $$_/   /$$__  $$| $$  | $$      | $$       |____  $$| $$ /$$_____/| $$  | $$| $$ |____  $$|_  $$_/   /$$__  $$ /$$__  $$\n"
           "| $$|_  $$| $$$$$$$$| $$  \\ $$| $$ \\ $$ \\ $$| $$$$$$$$  | $$    | $$  \\__/| $$  | $$      | $$        /$$$$$$$| $$| $$      | $$  | $$| $$  /$$$$$$$  | $$    | $$  \\ $$| $$  \\__/\n"
           "| $$  \\ $$| $$_____/| $$  | $$| $$ | $$ | $$| $$_____/  | $$ /$$| $$      | $$  | $$      | $$    $$ /$$__  $$| $$| $$      | $$  | $$| $$ /$$__  $$  | $$ /$$| $$  | $$| $$      \n"
           "|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$ | $$ | $$|  $$$$$$$  |  $$$$/| $$      |  $$$$$$$      |  $$$$$$/|  $$$$$$$| $$|  $$$$$$$|  $$$$$$/| $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$      \n"
           " \\______/  \\_______/ \\______/ |__/ |__/ |__/ \\_______/   \\___/  |__/       \\____  $$       \\______/  \\_______/|__/ \\_______/ \\______/ |__/ \\_______/   \\___/   \\______/ |__/      \n"
           "                                                                           /$$  | $$                                                                                              \n"
           "                                                                          |  $$$$$$/                                                                                              \n"
           "                                                                           \\______/                                                                                              \n");


    printf("\nSeleziona figuara geometrica : "
           "\n[1] Triangolo"
           "\n[2] Cerchio"
           "\n[3] Quadrato"
           "\n[4] Rettangolo"
           "\n\nInserisci qui : ");

    scanf("%d", &scelta1);



    switch (scelta1) {

        case 1:

            printf("\nCosa vuoi calcolare del Triangolo?"
                   "\n[1] Area"
                   "\n[2] Base"
                   "\n[3] Altezza\n"
                   "\nInseresci qui: ");

            scanf("%d", &triangolo);



            switch (triangolo) {
                case 1:

                    // calcolo area del triangolo

                    printf("\nhai selezionato la opzione 1!"
                           "\n Altezza : ");
                    scanf("%f", &altezzatriangolo);

                    printf("Base : ");
                    scanf("%f", &basetriangolo);

                    areatriangolo = (altezzatriangolo * basetriangolo)/2;
                    printf("L'area del triangolo e' : %.2f", areatriangolo);



                    
                    scanf("%d", &pause);


                    break;
                case 2:

                    // calcolo Base del triangolo

                    printf("\nhai selezionato la opzione 2!"
                           "\n Area : ");
                    scanf("%f", &areatriangolo);

                    printf("Altezza : ");
                    scanf("%f", &altezzatriangolo);

                    basetriangolo = areatriangolo/altezzatriangolo;
                    printf("La base del triangolo e' : %.2f", basetriangolo);


                    scanf("%d", &pause);
                    break;
                case 3:
                    // calcolo Altezza del triangolo

                    printf("\nhai selezionato la opzione 2!"
                           "\n Area : ");
                    scanf("%f", &areatriangolo);

                    printf("Base : ");
                    scanf("%f", &basetriangolo);

                    altezzatriangolo = areatriangolo/basetriangolo;
                    printf("L'altezza  del triangolo e' : %.2f", altezzatriangolo);


                    scanf("%d", &pause);
                    break;

            }

            break;


        case 2:

            printf("\nCosa vuoi calcolare del cerchio?"
                   "\n[1] Area"
                   "\n[2] Diametro"
                   "\n[3] Raggio\n"
                   "\nInseresci qui: ");


            scanf("%d", &cerchio);
            switch (cerchio) {
                case 1:
                    // calcolo Area del cerchio

                    printf("\nhai selezionato la opzione 1!"
                           "\n Raggio : ");
                    scanf("%f", &raggio);

                    areacerchio = raggio*raggio/2;
                    printf("L'area del cerchio e' : %.2f", areacerchio);


                    scanf("%d", &pause);

                    break;

                case 2:
                    // calcolo Diametro del cerchio

                    printf("\nhai selezionato la opzione 1!"
                           "\n Raggio : ");
                    scanf("%f", &raggio);

                    diametro = raggio*2;
                    printf("L'area del cerchio e' : %.2f", diametro);


                    scanf("%d", &pause);
                    break;
                case 3:

                    // calcolo Raggio del cerchio

                    printf("\nhai selezionato la opzione 1!"
                           "\n Diametro : ");
                    scanf("%f", &diametro);

                    raggio = diametro/2;
                    printf("L'area del cerchio e' : %.2f", raggio);


                    scanf("%d", &pause);
                    break;
            }
            break;


        case 3:

            printf("\nCosa vuoi calcolare del quadrato?"
                   "\n[1] Area"
                   "\n[2] Lato");
            scanf("%d", &quadrato);

            switch (quadrato) {
                case 1:

                    // calcolo Area del quadrato

                    printf("\nhai selezionato la opzione 3!"
                           "\n Lato : ");
                    scanf("%f", &lato);

                    areaquadrato = lato*lato;
                    printf("L'area del cerchio e' : %.2f", areaquadrato);


                    scanf("%d", &pause);
                    break;

                case 2:

                    // calcolo Lato del quadrato
                    printf("\nhai selezionato la opzione 3!"
                           "\n Area : ");
                    scanf("%f", &areaquadrato);

                    lato = sqrt(areaquadrato);
                    printf("il lato del cerchio e' : %.2", lato);


                    scanf("%d", &pause);
                    break;

            }


            break;
        case 4:

            printf("\nCosa vuoi calcolare del Rettangolo?"
                   "\n[1] Area"
                   "\n[2] Base"
                   "\n[3] Altezza\n"
                   "\nInseresci qui: ");

            scanf("%d", &rettangolo);
            switch (rettangolo) {
                case 1:

                    //calcolo area rettangolo
                    printf("\nhai selezionato la opzione 4!"
                           "\nBase : ");
                    scanf("%f", &baserettangolo);

                    printf("Altezza : ");
                    scanf("%f", &altezzarettangolo);

                    arearettangolo = baserettangolo*altezzarettangolo;
                    printf("L'area del cerchio e' : %.2f", altezzarettangolo);

                    scanf("%d", &pause);
                    break;

                case 2:

                    //calcolo Base rettangolo
                    printf("\nhai selezionato la opzione 4!"
                           "\nArea : ");
                    scanf("%f", &arearettangolo);

                    printf("Altezza : ");
                    scanf("%f", &altezzarettangolo);

                    baserettangolo = arearettangolo/altezzarettangolo;
                    printf("L'area del cerchio e' : %.2f", baserettangolo);


                    scanf("%d", &pause);
                    break;
                case 3:
                    //calcolo Altezza rettangolo
                    printf("\nhai selezionato la opzione 4!"
                           "\nArea : ");
                    scanf("%f", &arearettangolo);

                    printf("Base : ");
                    scanf("%f", &baserettangolo);

                    altezzatriangolo = arearettangolo/baserettangolo;
                    printf("L'area del cerchio e' : %.2f", baserettangolo);


                    scanf("%d", &pause);
                    break;
            }

            break;


    }
}
