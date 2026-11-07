int distanceTraveled(int mainTank, int additionalTank)
{
    int distance = 0;

    while (mainTank >= 5) {
        mainTank -= 5;          /* burn 5 litres from the main tank */
        distance += 50;         /* 5 litres * 10 km per litre       */

        if (additionalTank > 0) {
            additionalTank--;   /* transfer 1 litre to the main tank */
            mainTank++;
        }
    }

    distance += mainTank * 10;  /* burn what is left                 */
    return distance;
}
