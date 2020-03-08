// Two tortoises named A and B must run a race.A starts with an average speed of 720 feet per hour.Young B knows she runs faster than A, and furthermore has not finished her cabbage.

//                                                                                                                                           When she starts,
//     at last, she can see that A has a 70 feet lead but B's speed is 850 feet per hour. How long will it take B to catch A?

//                  More generally : given two speeds v1(A 's speed, integer > 0) and v2 (B' s speed, integer > 0) and
//                                   a lead g(integer > 0) how long will it take B to catch A
//     ?

//     The result will be an array[hour, min, sec] which is the time needed in hours,
//     minutes and seconds(round down to the nearest second) or a string in some languages.

//                                                                  If v1
//                                                                  >= v2 then return nil,
//     nothing, null, None or
// {
//         -1, -1, -1
// } for C++, C, Go, Nim, [] for Kotlin or "-1 -1 -1".

int *race(int v1, int v2, int g)
{
        int *res = malloc(3 * sizeof(int));
        res[0] = res[1] = res[2] = -1;
        if (v1 < v2)
        {
                long long tmp = 3600 * g / (v2 - v1);
                res[0] = tmp / 3600;
                res[1] = (tmp % 3600) / 60;
                res[2] = tmp % 60;
        }
        return res;
}