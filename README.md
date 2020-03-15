# Progtech-babyratio

Υλοποιήστε την κλάση rational για την αναπαράσταση των ρητών αριθμών. Η κλάση αυτή πρέπει να
υποστηρίζει τις εξής λειτουργίες:

class rational {

public:

rational (int n, int d);

rational add (rational r);

rational sub (rational r);

rational mul (rational r);

rational div (rational r);

void print ();

private:
    int nom, den; // nominator, denominator

    static int gcd (int a, int b);
 };

Γράψτε τον παραπάνω ορισμό της κλάσης σε ένα αρχείο επικεφαλίδας με όνομα babyratio.hpp. Στη
συνέχεια, γράψτε τα παρακάτω σε ένα δεύτερο αρχείο με όνομα babyratio.cpp και συμπληρώστε κα-
τάλληλα τις υλοποιήσεις των μεθόδων:

#ifndef CONTEST
#include ”babyratio.hpp”
#endif

using namespace std;

rational::rational (int n, int d) { ... }

rational rational::add (rational r) { ... }

Προσέξτε ότι οι αριθμητικές πράξεις δεν πρέπει να αλλάζουν το αντικείμενο για το οποίο καλούνται αλλά
πρέπει να επιστρέφουν το αποτέλεσμα ως ένα νέο αντικείμενο.

Σημείωση: οι γραμμές “#ifndef CONTEST” και “#endif” θα σας είναι απαραίτητες για να υποβάλετε
τη λύση σας στον grader. Κατά την υποβολή σας, θα σας χρειαστεί μόνο το αρχείο babyratio.cpp με
τις υλοποιήσεις των μεθόδων, χωρίς τη δήλωση της κλάσης.
