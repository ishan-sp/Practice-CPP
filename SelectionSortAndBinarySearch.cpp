#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}



int key;
int binarySearch(int p[], int key, int top, int low){
    int mid = low + (top - low)/2;
    if (low > top) {
        cout << "Not found";
        return -1;
    }
    if (p[mid] == key) {
        return mid;
    }
    else if(p[mid] < key) {
        return binarySearch(p, key, top, mid+1);
    }
    else {
        return binarySearch(p, key, mid-1, low);
    }
}
int main() {
    //int a[] = {1,2,45,456,6,3,4,56,78,89,34,234,356,536,575};
    int a[] = { 285,  854,  766,  162,  343,  756,  505,  800,  968,  214,
  642,  159,  924,  328,  508,  225,  635,  354,  949,  189,
  343,  174,  692,  527,  682,  973,  679,  937,  218,  241,
  460,  858,  628,  219,  320,  835,  261,  330,  186,  460,
  788,  104,  509,  478,  707,  773,  703,  739,  977,  383,
  542,  383,  563,  731,  384,  110,  757,  527,  621,  538,
  830,  887,  190,  929,  632,  662,  539,  117,  841,  810,
  535,  835,  122,  365,  225,  255,  468,  252,  401,  498,
  661,  238,  228,  508,  758,  451,  295,  502,  602,  717,
  799,  636,  151,  442,  175,  750,  305,  129,  460,  185,
  349,  529,  509,  264,  290,  206,  966,  218,  131,  878,
  463,  241,  936,  943,  551,  139,  163,  173,  782,  365,
  464,  785,  660,  522,  889,  509,  471,  885,  839,  358,
  370,  414,  280,  789,  387,  979,  729,  389,  586,  587,
  891,  593,  647,  144,  389,  527,  843,  360,  586,  232,
  755,  557,  739,  468,  871,  723,  106,  860,  333,  768,
  222,  536,  967,  441,  112,  423,  399,  696,  473,  944,
  769,  899,  535,  450,  471,  569,  901,  748,  117,  682,
  963,  621,  879,  318,  224,  497,  723,  830,  202,  930,
  335,  317,  781,  426,  862,  197,  104,  667,  723,  238,
  155,  917,  673,  534,  366,  286,  241,  148,  448,  281,
  946,  943,  683,  968,  621,  678,  538,  801,  621,  731,
  243,  464,  202,  988,  633,  722,  818,  698,  190,  712,
  132,  550,  578,  948,  869,  430,  873,  110,  798,  768,
  786,  201,  477,  780,  972,  877,  946,  195,  101,  113,
  250,  227,  185,  183,  980,  461,  826,  990,  495,  973,
  535,  544,  253,  297,  932,  788,  292,  423,  356,  531,
  573,  271,  772,  521,  838,  501,  341,  317,  877,  463,
  303,  878,  369,  264,  914,  565,  683,  245,  550,  618,
  380,  328,  322,  546,  155,  148,  760,  422,  723,  190,
  593,  340,  362,  982,  901,  752,  914,  135,  967,  176,
  450,  746,  580,  504,  899,  257,  872,  582,  948,  190,
  530,  854,  529,  788,  579,  675,  623,  558,  414,  684,
  650,  307,  929,  163,  472,  442,  944,  511,  184,  944,
  762,  820,  890,  954,  761,  437,  174,  537,  437,  238,
  315,  243,  486,  647,  844,  487,  580,  877,  450,  746,
  787,  630,  338,  238,  246,  700,  114,  785,  958,  933,
  220,  116,  477,  439,  598,  819,  151,  703,  772,  417,
  685,  855,  713,  146,  772,  722,  685,  569,  330,  756,
  109,  479,  779,  777,  914,  354,  401,  754,  724,  531,
  455,  242,  990,  285,  811,  462,  309,  159,  233,  665,
  249,  136,  427,  933,  304,  489,  793,  313,  302,  320,
  615,  938,  975,  133,  648,  116,  320,  733,  694,  543,
  904,  335,  720,  982,  396,  942,  791,  231,  842,  702,
  986,  828,  710,  700,  516,  533,  327,  826,  267,  423,
  897,  320,  446,  949,  646,  503,  543,  510,  968,  345,
  481,  256,  383,  145,  580,  529,  214,  447,  387,  939,
  450,  427,  472,  361,  574,  681,  201,  919,  870,  246,
  405,  764,  642,  342,  687,  844,  607,  447,  538,  887,
  903,  575,  159,  678,  942,  123,  110,  767,  980,  789,
  665,  558,  529,  790,  285,  303,  564,  240,  259,  695,
  474,  646,  390,  303,  275,  523,  819,  308,  614,  794,
  726,  532,  541,  217,  336,  529,  347,  911,  790,  833,
  597,  214,  330,  690,  751,  853,  776,  147,  787,  671,
  430,  540,  999,  447,  453,  802,  899,  758,  214,  488,
  342,  300,  512,  211,  871,  677,  718,  970,  946,  860,
  755,  480,  624,  724,  786,  820,  951,  180,  580,  583,
  466,  882,  689,  215,  946,  845,  788,  800,  950,  559,
  974,  695,  232,  222,  810,  160,  940,  464,  744,  744,
  133,  978,  901,  308,  904,  103,  985,  504,  297,  487,
  310,  234,  983,  613,  282,  752,  480,  695,  367,  922,
  602,  207,  547, 999999};

    int size = sizeof(a)/4;
    selectionSort(a, size);
    cin >> key;
    int top = (sizeof(a)/4) - 1;
    int low = 0;
    int index = binarySearch(a, key, top, low);
    cout << index;

}