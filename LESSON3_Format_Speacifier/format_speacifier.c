#include <stdio.h>
#include <stdbool.h>

int main (){

    // Format specifier - bu printf funksiyasida ekranga chiqarilayotgan qiymatning turini aniqlash uchun ishlatiladi.
    // Har bir ma'lumot turi uchun o'ziga xos belgisi bor:
    // %d  → int (butun son)
    // %f  → float (o'nlik son)
    // %lf → double (katta o'nlik son)
    // %c  → char (bitta belgi)
    // %s  → string (char massiv, matn)
    // %u  → unsigned int (manfiy bo'lmagan butun son)
    // %s (ternary orqali) → bool (mantiqiy qiymatni matn ko‘rinishida chiqarish: "YES" yoki "NO")
    // Format specifier'lar doim "" ichida yoziladi va ularning o'rnini printf funksiyasida verguldan keyingi qiymatlar egallaydi.

    int age = 18 ;
    float height = 1.70;
    double balance = 23000.00;
    char grade = 'A';
    char name [] = "Saidkarim ";
    bool isStudent = true ;

    printf ("AGE       : %d years \n", age);
    printf ("Height    : %.2f metres\n", height);
    printf ("Balance   : %.2lf sums\n", balance);
    printf ("Grade     : %c \n", grade);
    printf ("Name      : %s \n", name);
    printf ("Is STUDENT: %s\n", isStudent ? "YES" : "NO");

    return 0; 
}
