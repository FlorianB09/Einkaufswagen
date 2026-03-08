#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MWST 0.20         

struct Produkte {           // Produkt hat Namen und Preis
    char Name[18];
    float Preis;
};

void gui(struct Produkte p[], int anzahl) {             // Zeigt Produkte und Preise als Tabelle

    printf("+----------------------+---------+\n");
    printf("| Produkt              |  Preis  |\n");
    printf("+----------------------+---------+\n");

    for (int i = 0; i < anzahl; i++) {                                          // Macht automatisch eine neue Zeile, falls ein Produkt dazu kommt
        printf("| %d %-18s | %6.2f  |\n", i + 1, p[i].Name, p[i].Preis);        
    }

    printf("+----------------------+---------+\n");
}

int main() {

    int Auswahl = 0;                            // Was man haben will 
    float Gesamt = 0;                           // Gesamtpreis

    struct Produkte p[6] = {                    // Die Produkte, die man auswählen kann 
        {"Mounds Bar", 2.30},
        {"Milch", 1.50},
        {"Eier 10stk", 5.00},
        {"Schwarzbrot", 5.40},
        {"Butter 250g", 2.70},
        {"Schinken 100g", 7.80},
    };

    gui(p, 6);                                  // Zeigt die Produkte in der Tabelle an 

    char eingabe[20];

    for (int exit = 0; exit < 1;){             // Programm läuft bis "0" gedrückt wird
    
    printf("Bitte gewuenschte Produkte auswaehlen (0 um abzubrechen): ");
    scanf("%d", &Auswahl);                                                              // Hier gibst du das gewünschte Produkt ein
    switch(Auswahl)                                                     // Je nachdem was man eingegeben hat, wird das Produkt ausgewählt und gespeichert
    {case 1: 
        Gesamt = Gesamt + p[0].Preis * (1 + MWST);                                   // Gesamtpreis wird berechnet (Netto)
        system("cls");                                                  // Bildschirm wird freigemacht wenn man was ausgewählt hat
        gui(p, 6);
        printf("Sie haben Mounds Bar gewaehlt. Gesamtsumme: %.2f\n", Gesamt);
        break;
    case 2: 
        Gesamt = Gesamt + p[1].Preis * (1 + MWST);
        system("cls"); 
        gui(p, 6);
        printf("Sie haben Milch gewaehlt. Gesamtsumme: %.2f\n", Gesamt);
        break;
    case 3: 
        Gesamt = Gesamt + p[2].Preis * (1 + MWST);
        system("cls"); 
        gui(p, 6);
        printf("Sie haben Eier gewaehlt. Gesamtsumme: %.2f\n", Gesamt);
        break;
    case 4: 
        Gesamt = Gesamt + p[3].Preis * (1 + MWST);
        system("cls"); 
        gui(p, 6);
        printf("Sie haben Schwarzbrot gewaehlt. Gesamtsumme: %.2f\n", Gesamt);
        break;
    case 5: 
        Gesamt = Gesamt + p[4].Preis * (1 + MWST);
        system("cls"); 
        gui(p, 6);
        printf("Sie haben Butter gewaehlt. Gesamtsumme: %.2f\n", Gesamt);
        break;
    case 6: 
        Gesamt = Gesamt + p[5].Preis * (1 + MWST);
        system("cls"); 
        gui(p, 6);
        printf("Sie haben Schinken gewaehlt. Gesamtsumme: %.2f\n", Gesamt);
        break;
    case 0:
        exit = 1; 
        break;
    default: printf("Keine Valide auswahl!\n ");
    }        
}
    return 0;
}