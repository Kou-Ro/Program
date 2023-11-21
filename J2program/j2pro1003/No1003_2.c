#include <stdio.h>

int main(void)
{
	char gene[] = "GGGACACACAAAAGAAAAAGGTTTTTTAAGATTTTTTGTGTGCGAGTAACTATGAGGAAGATTAACAGTTTTCCTCAGTTTAAGGTATACACTGAAATTGAGATTGAGATTCTCCTCTTTGCTATTCTGTAACTTTCCCTGGTTGTGACAATTGAATCAGTTTTATCTATTACCAATTACCATCAACATGGTATGTCTAGTGATCTTGGGACTCTTCTTCATCTGGTTTTTCCTAGAGCTCTGAATCTATTTTGTGAGAAGTTCATCCAAACGACCCAGTGTCTGAAAATACAAGAGGTTCCCCTTTCCGTCAAGTTTAAGGGGTTGTTTTGATTGTGTGTAGATTTTATAATCCTAGAGTGCCAAGGAGTTGCGTGTCATCATTAATTGGGAAGATCAAGGAAACAATTTGTTCCAATAATATCGTACATCTTGACTAAGTCGAACAAGGGGAAGTCGATATGGATCGTGGGACCAGAAGAATCTGGGTGTCGCAAAATCAAGGTGATACTGATTTAGATTATCATAAAATTTTGACAGCTGGCCTTACTGTTCAACAGGGAATTGTCAGGCAGAAAATAATTTCTGTATATCTTGTTGATAACTTGGAGGCTATGTGTCAATTGGTAATACAAGCCTTTGAGGCCGGAATTGATTTCCAAGAAAATGCCGACAGCTTCCTTCTGATGCTTTGCCTACATCATGCTTACCAAGGTGACTATAAATTGTTCTTGGAGAGCAATGCTGTACAGTATTTGGAAGGTCATGGATTCAAATTTGAGCTCCGGAAGAAGGACGGTGTCAATCGGCTCGAGGAATTGCTTCCTGCTGCAACGAGTGGAAAAAACATCAGGCGTACGTTGGCCGCACTGCCTGAAGAGGAGACTACAGAAGCAAATGCAGGGCAATTTCTCTCATTTGCGAGTTTGTTTCTTCCCAAACTGGTTGTGGGAGAGAAGGCTTGCTTGGAAAAAGTCCAGCGACAAATTCAGGTTCATGCAGAACAGGGTTTAATTCAATATCCCACTGCATGGCAATCAGTTGGACACATGATGGTAATCTTCAGATTGATGAGGACTAATTTCTTGATTAAATATTTACTGATCCACCAGGGTATGCATATGGTAGCTGGCCACGATGCCAATGATGCTGTCATTGCTAATTCAGTTGCTCAGGCTCGCTTTTCAGGACTCCTAATTGTCAAAACCGTTCTTGATCATATTCTGCAGAAAACCGACCAAGGAGTAAGACTTCACCCTTTGGCCCGAACAGCCAAAGTGCGTAATGAGGTTAATGCATTTAAGGCCGCCCTAAGCTCACTTGCTAAGCATGGGGAGTATGCCCCTTTTGCTCGCCTTCTCAATCTCTCGGGAGTTAACAACCTAGAACATGGTCTCTACCCACAGTTATCAGCAATTGCTCTTGGAGTTGCCACAGCACATGGTAGCACCCTTGCAGGAGTTAATGTTGGTGAGCAGTATCAGCAGCTTAGAGAGGCTGCCACTGAAGCTGAGAAGCAACTCCAACAATATGCTGAGTCCAGAGAACTCGACAGCCTAGGCCTAGACGATCAGGAAAGAAGAATACTAATGAACTTCCATCAGAAGAAAAATGAAATTAGTTTCCAGCAGACCAATGCAATGGTAACCCTTAGGAAAGAGCGACTGGCTAAATTAACAGAAGCTATAACGCTGGCCTCAAGACCTAACCTCGGGTCTAGACAAGACGACGACAATGAAATACCGTTCCCTGGGCCTATAAGCAACAACCCAGACCAAGATCATCTGGAGGATGATCCTAGAGACTCCAGAGACACTATCATTCCTAATAGTGCAATTGACCCCGAGGATGGTGATTTTGAAAATTACAATGGCTATCATGATGATGAAGTTGGGACGGCAGGTGACTTGGTCTTGTTCGATCTTGACGATCATGAGGATGACAATAAAGCTTTTGAGCTACAGGACAGCTCACCACAATCCCAAAGGGAAATAGAGAGAGAAAGATTAATTCATCCACCCCCAGGCAACAACAAGGACGACAATCGGGCCTCAGACAACAATCAACAATCAGCAGATTCTGAGGAACAAGAAGGTCAATACAACAGGCACCGAGGCCCAGAACGTACGACCGCCAATCGAAGACTCTCACCAGTGCACGAAGAGGACACCCCTATAGATCAAGGCGATGATGATCCCTCAAGCCCACCTCCGCTGGAATCTGATGATGACGATGCATCAAGTAGCCAACAAGATCCCGATTATACAGCTGTTGCCCCTCCTGCTCCTGTATACCGCAGTGCAGAAGCCCACGAGCCTCCCCACAAATCCTCGAACGAGCCAGCTGAAACATCACAATTGAATGAAGACCCTGATATCGGTCAATCAAAGTCTATGCAAAAATTAGGAGAGACATATCACCATCTGCTGAGAACTCAAGGTCCATTTGAAGCTATCAATTATTATCACATGATGAAGGATGAGCCGGTAATATTTAGCACTGATGATGGGAAGGAATACACCTACCCGGATTCACTTGAGGAAGCCTATCCTCCATGGCTCACCGAGAAAGAACGACTGGACAATGAAAATCGATACATTTACATAAATAATCAACAGTTCTTCTGGCCTGTCATGAGTCCCAGAGACAAATTTCTTGCAATCTTGCAGCACCATCAGTAACCACAGCACAAAGCGCGGTCCACTTCGTAAAGCTAAATACACTTAAAGCTTGACCGATTCATCTACAAAAACTAATCCATTATAACTTATTAGTGCTACTTTTCTATAAGTGATTCTCAATCTAAGGCCATTAAGAGTTTAAGCAATATACATATACACTTACACCGGTCTATCCAAGATGTGGCTCAATGTTCTTAATTTGAACATAGTCATAAGGGGATAAATAATACTTTATATTTCTGATTGTGGACTGACCCATTCTGCTTAAAATGCTTCGCCCATTAAAAATGTGATCTAATAGATAGCCCTGACTAGACCAATTAAGAAAAACATTTGATGAAGATTAAAACCTTCATCGCCAGTAAATGATTATATTGTCTGTAGGCAGGTGTTTACTCCACCTTAAAGTCGGAAATATCCTACCTTAGGACCATTGTTAAGAGGTGCATAGGCATTACCATCCTTGAGAACATGTATAATGATAAATTGAAGATATGTTCAGGCCCAGAAACAACTGGATGGATTTCTGAGCAACTAATGACAGGTAAGATTCCAGTAACTGATATATTCATTGATATTGATAACAAGCCAGATCAAATGGAAGTCCGGCTCAAACCATCATCAAGGAGCTCAACCAGAACTTGTACAAGTAGCAGTCAGACGGAGGTCAACTATGTACCTCTCCTTAAAAAGGTTGAGGATACATTAACTATGCTAGTGAGTGCAACCAGTCGTCAGAATGCTGCAATCGAGGCCCTTGAAAACCGCCTCAGCACACTTGAGAGTAGCTTAAAGCCAATCCAAGACATGGGTAAAGTGATTTCATCATTGAATCGCAGTTGTGCCGAAATGGTGGCAAAATATGATCTTCTAGTTATGACAACTGGACGGGCTACTTCAACCGCAGCTGCAGTAGATGCGTACTGGAAAGAGCACAAACAGCCACCACCAGGGCCAGCGTTGTATGAAGAGAATGCGCTTAAAGGAAAAATCGATGATCCAAACAGCTATGTACCAGATGCTGTGCAGGAGGCTTACAAGAACCTTGACAGTACATCGACCCTGACCGAGGAAAATTTTGGGAAACCTTATATATCTGCTAAAGATCTGAAGGAGATCATGTATGATCATCTACCTGGTTTTGGGACTGCCTTTCACCAACTTGTTCAAGTGATTTGTAAAATAGGAAAGGATAACAACCTCTTGGACACAATCCATGCTGAGTTCCAGGCAAGTCTAGCAGATGGTGACTCTCCCCAATGTGCACTCATACAGATAACCAAAAGAGTCCCAATCTTTCAGGATGTGCCGCCCCCGACAATCCACATTAGATCCCGTGGTGATATCCCACGAGCATGCCAAAAGAGTCTCCGACCAGCACCACCATCACCCAAAATTGATCGTGGTTGGGTTTGTTTGTTTAAGATGCAAGATGGTAAAACGCTTGGACTTAAGATCTAAGGATCAAGATTTATTTAACAAGGCAAGCCACAACCTTAGATAGAACCTCAGCCAGACTATTGAACTATTGACGCTGTTGATGATAATATATAATTAATGGTCATATTTGAATATGACAACATCTTGCTTCTTGTTTTGCCTTGTATCTCTTTGAGTTGGAAGATCATTCCAAACTTACAAACATGCACAAGATGTTATGGTTTAGCAAAGAATTGATAGGAGTACTGGTATATAATGTAAATATAACAAGTGATGAAGATTAAGAAAAACCAGTCGGTATTTTCCAGACTTGGCATTTCTTATCTTCATCTTCTAAAGTGAGATATTTTATCATCAAAAAATGAGACGCGGAGTGTTACCAACGGCTCCTCCAGCATATAATGATATTGCATACTCTATGAGCATACTCCCAACCCGACCAAGTGTCATAGTCAATGAGACCAAATCAGATGTACTGGCAGTGCCAGGAGCAGATGTTCCATCAAACTCCATGAGACCAGTGGCTGATGATAACATTGATCACTCAAGCCATACTCCAAGCGGAGTAGCTTCTGCCTTTATATTGGAAGCTAAAGTGAATGTAATTTCGGGAACAAAAGTCCTGATGAAGCAAATACCTATTTGGCTTCCACTGGGTGTAGCTGATCAGAAGATATACAGCTTTGATTCAACAACAGCCGCAATTATGTTGGCTTCCTACACAGTGACACACTTCGGGAAGATATCTAACCCGCTGGTACGTGTCAACAGGCTAGGCCCAGGAATACCCGATCATCCGCTACGACTCCTAAGGTTGGGCAATCAGGCATTCCTTCAAGAGTTTGTTCTTCCACCAGTCCAGCTTCCCCAGTATTTCACATTTGATCTAACAGCTCTAAAGCTCATCACTCAACCATTGCCAGCTGCAACCTGGACAGACGAAACTCCAGCAGGAGCAGTCAATGCTCTTCGTCCTGGGCTCTCACTCCATCCCAAGCTTCGTCCAATTCTTCTACCGGGGAAGATAGGAAAGAAAGGTCATGCTTCAGACTTAACATCACCTGACAAAATTCAAACAATCATGAATGCAATACCGGACCTCAAAATTGTCCCGATTGATCCAATCAAGAACATAGTTGGAATTGAGGTTCCAGAATTACTAGTTCAAAGGCTGACCGGCAAAAAACCACAACCCAAAAATGGCCAACCAATTATTCCAGTTCTTCTTCCGAAATATGTTGGACTTGATCCTATATCGCCAGGGGACTTAACTATGGTTATCACCCAGGATTGTGATTCATGCCACTCTCCAGCCAGCCATCCGTATCACATGGACAAGCAGGATAGTTACCAATAATTTAAATTCCATTCGAGCTATTATTCTGCTAGTAATTCCGACGGGATCAATAGACTAAAAATCTGATTGTATAGAATTATAAAAGAATCAAGCAGAGGCAACAGACTCACAGCTTACGCCTAGATGACTAATATTAAGGAGTTTTTTAATCTAATTTTCCAGTCTTAAGTAATAATCATTTCTTTTGTAATTAATTATGCATTTGTTAACTTATCGGTGCGAGATTTCCTTGAGAACCCGGCGGGGCTTCTACTATCTGTAGTAACCAGAAGAGAAGTTCAACCCAGTCAAAACTAAACCAAGCAATATTCTGAATGCTCTATAGTCTATTCTAATCAGAGGTATAACAATGGCTAAGATTTCAATGACTCGTTAACAATCGCTAGTAATTTTAATCTCCAGATTAAGAAAAAGATATACGATGAAGATTAAGGCGACAACGAGCCGAAACTTCATCTCTTTTAAAGATCTAACATTATCTGTTCCAAAGTCATACAAGGACACATTCAAATCAGGGATTGTAAGCTGCTATTTCTTACCTCCCCAAATCACCTATACAACATGGGGTCAGGATATCAACTTCTCCAATTGCCTCGGGAACGTTTTCGTAAAACTTCGTTCTTAGTATGGGTAATCATCCTCTTCCAGCGAGCAATCTCCATGCCGCTTGGTATAGTGACAAATAGCACTCTCAAAGCAACAGAAATTGATCAATTGGTTTGTCGGGACAAACTGTCATCAACCAGTCAGCTCAAGTCTGTGGGGCTGAATCTGGAAGGAAATGGAATTGCAACCGATGTCCCATCAGCAACAAAACGCTGGGGATTCCGTTCAGGTGTGCCTCCCAAGGTGGTCAGCTATGAAGCCGGAGAATGGGCAGAAAATTGCTACAATCTGGAGATCAAAAAGTCAGACGGAAGTGAGTGCCTCCCTCTCCCTCCCGACGGTGTACGGGGATTCCCTAGATGTCGCTATGTCCACAAAGTTCAAGGAACAGGTCCTTGTCCCGGTGACTTAGCTTTCCATAAAAATGGGGCTTTTTTCTTGTATGATAGATTGGCCTCAACTGTCATCTACCGTGGGACAACTTTTGCTGAAGGTGTCATAGCTTTTTTAATTCTGTCAGAGCCCAAGAAGCATTTTTGGAAGGCTACACCAGCTCATGAACCGGTGAACACAACAGATGATTCCACAAGCTACTACATGACCCTGACACTCAGCTACGAGATGTCAAATTTTGGAGGCGAGGAAAGTAACACCCTTTTTAAGGTAGACAACCACACATATGTGCAACTAGATCGTCCACACACTCCGCAGTTCCTTGTTCAGCTCAATGAAACACTTCGAAGAAATAATCGCCTTAGCAACAGTACAGGGAGATTGACTTGGACAGTGGATCCCAAAATTGAACCAGATGTTGGTGAGTGGGCCTTCTGGGAAACTAAAAAAACTTTTCCCAACAACTTCATGGAGAAAACTTGCATTTCCAAATTCTATCAACCCACACCAACAACTCCTCAGATCAGAGCCCGGCGGGAACTGTCCAAGGAAAAATTAGCTACCACCCACCCACCAACAACTCCGAGCTGGTTCCAACGGATTCCCCTCCAGTGGTTTCAGTGCTCACTGCAGGACGGACAGAGGAAATGTCGACCCAAGGTCTAACTAACGGAGAGACAATCACAGGTTTCACCGCGAACCCAATGACAACCACCATTGCCCCAAGTCCAACCATGACAAGCGAGGTTGATAACAATGTACCAAGTGAACAACCGAACAACACAGCATCCATTGAAGACTCCCCCCCATCGGCAAGCAACGAGACAATTGACCACTCCGAAATGAATTCGATCCAAGGCTCGAACAACTCCGCCCAGAGCCCACAGACCAAGGCCACGCCAGCGCCCACAGCATCCCCGATGACCCTGGACCCGCAAGAGACGGCCAACATCAGCAAACCAGGAACCAGCCCAGGAAGCGCAGCCGGACCAAGTCAGCCCGGACTCACTATAAATACAATAAGTAAGGTAGCTGATTCACTGAGTCCCACCAGGAAACAAAAGCGATCGGTTCGACAAAACACCGCTAATAAATGTAACCCAGATCTTCACTATTGGACAGCTGTTGATGAGGGGGCAGCAGCAGGATTGGCATGGATTCCATATTTTGGACCTGCAGCAGAAGGCATCTACATTGAGGGTGTAATGCATAATCAGAATGGGCTTATTTGCGGGCTACGTCAGCTAGCCAATGAAACTACCCAGGCTCTTCAATTATTTCTGCGGGCCACAACAGAACTGAGGACTTACTCACTTCTTAACAGAAAAGCTATTGATTTTCTTCTTCAACGATGGGGAGGTACCTGTCGAATCCTAGGACCATCTTGTTGCATTGAGCCACATGATTGGACAAAAAATATTACTGATGAAATTAACCAAATTAAACATGACTTTATTGACAATCCCCTACCAGACCACGGAGATGATCTTAATCTATGGACAGGTTGGAGACAATGGATCCCGGCTGGAATTGGGATTATTGGAGTTATAATTGCTATAATAGCCCTACTTTGTATATGTAAGATTTTGTGTTGATTTATTCTGAGATCTGAGAGAAAAAAATCTCAGGGTTACTCTAAGGAGAAATATTATTTTTAAAATTTACTTAAATGCTGACCACTTATCTTAAATGAGCAATTAATAATATGTTTTTCTGCTTCTTTGCTTGATTTACAATATGATATTTCTCTTAATAATGATTAATATATTAAGAAAAACTTATGACGAAGATTAAAGGGGAGGATCGTTAACGGGAAAATCTCCCATCTCGTTCGTCGAAGCCACGTTGGTGGTGCTTGCAGCTGAGAACAACTCCAGAGATTGTAGGTAGAAAGGACCAGCATTTATAGGTAGGGGTCAGAAAGCAACAATAGCCATAAAAGGAGAGCCTGACATTGCTATTTAATATCCTAGAACCTGATTTCTAGGTTCTAGTTGTACAATCCGGATGATGGAGCATTCAAGAGAACGGGGTAGATCTAGCAACATGCGACATAATAGCCGGGAACCATACGAAAATCCATCAAGGTCTCGCTCATTATCTCGGGACCCTAATCAGGTTGATCGTAGGCAGCCTCGAAGTGCATCCCAAATTCGTGTTCCGAATCTGTTCCATCGGAAAAAGACTGATGCACTCATAGTTCCTCCGGCTCCCAAAGATATATGCCCAACACTCAAAAAAGGATTCCTCTGCGATAGTAAATTTTGCAAAAAAGATCACCAATTGGATAGCTTAAATGATCATGAATTACTACTGCTAATTGCAAGAAGAACATGTGGAATTATCGAGAGCAATTCGCAGATTACATCCCCAAAAGATATGCGGTTAGCGAATCCAACAGCTGAAGACTTCTCACAAGGTAATAGTCCTAAATTAACACTTGCAGTCCTTCTTCAAATTGCTGAACATTGGGCAACCAGAGACCTAAGGCAAATTGAGGACTCTAAACTTAGAGCTCTTTTAACCCTTTGTGCCGTATTAACAAGGAAATTTTCTAAATCCCAACTGGGTCTTCTATGTGAGACCCACCTACGGCATGAGGGCCTCGGACAGGACCAAGCTGATTCTGTATTAGAGGTCTACCAAAGACTCCACAGTGATAAAGGAGGGAATTTTGAGGCTGCCCTGTGGCAACAATGGGACCGACAGTCGTTAATAATGTTCATCTCTGCTTTTCTCAACATTGCTCTCCAGACACCTTGTGAAAGTTCTAGTGTCGTAGTCTCAGGTCTTGCCACATTGTACCCAGCACAAGACAATTCTACACCGTCCGAGGCAACTAATGATACCACCTGGTCAAGTACAGTTGAATAGAAAACCACTGGAGCTATTTTTCCACGATTGCTCTCAGTCAATAAATTAATATAGATATAATACGACTTCGGTGTGCAATTGTCAAGGGTTCCATTTGGTAATAATGATTCTTAAAACAATCTACTATCGTAATTATCGATGGATCTACCCTATTTGACGGTACATGACTTGAATGTAATAAGGTAAGTTGGTATCTGAGGTATTTTGTCTAGAGTATACTCAAAATCGTATGTCTAGCAAATTATCAATAGCAAAGTTAAATTCTCCTAACCTCATATTTTGATCAAGTAATCATGATTTTATGGTAATTCTTTGCAGATTATCGGTTTAATCTTTATTAAGAAAAAATCATGATTGTAGACAATTTACTGGTAGTCCCTGGGTATCCAAGTTTATGAACAGAGCTAGAGAGAATTTGCTACTTCCGAGGTATAACTTTATTATTTGCTACTTCGAATGCCTAAAACCAGTAATGCAGGATGAAGATTAATTGCGGAGGAATCAGGAATTCAACTTTAGTTCCTTAAGGCCTCGTCTGAATCTTCATCAGTTAGTAAGTTCTTTTATAGAAGTCATTAGCTTCTAAGGTGATTATATTTTAGTATTAAATTTTGTTAATTGCTTGCTATAAAGTTGAAATGTCTAATGCTTAAATGAACATTTCTTTGAAGCTGACATACGAATACATCATATCATATGAAAACATCGCAATTAGAGCGTCCTTGAAGTCTGGCATTGACAGTCACCAGGCTGTTCTCAGTAGTCTGTCCTTGGAAGCTCTTGGGGAGACAAGAAGAGGTCCCAGAGAGTCCCAACAGGTTGGCATAAGGTCATTAACACCAGCATAGTCAGCTCGATCAAGACTGTAAGCGAGTCGATTGCAACTAAAAAGATTATTTCTTGTTGTTTAAACAAATTCCTTTTGTGTGAGACACCCTCAAGGCACAAGATGGCTAAAGCCACAGGCCGATACAATCTCGTGCCCCCAAAGAAAGATATGGAAAAGGGAGTGATTTTTAGTGATCTTTGTAATTTCTTGATTACTCAAACCCTGCAAGGTTGGAAGGTTTATTGGGCAGGAATTGAGTTTGATGTAAGTCAAAAAGGCATGGCTCTTCTGACAAGACTCAAAACAAATGACTTTGCTCCTGCCTGGGCGATGACAAGAAATCTCTTCCCACATCTGTTCCAAAACCCAAATTCGGTTATTCAATCTCCCATCTGGGCTTTGAGGGTGATTTTGGCAGCCGGATTGCAGGATCAGTTGTTAGACCATTCATTGGTTGAGCCATTGACAGGGGCTCTCGGTCTAATTTCTGATTGGCTCCTAACTACAACGTCAACACATTTCAATCTTCGTACTAGAAGCGTAAAGGACCAGCTTAGTCTTCGTATGTTATCTTTGATCAGGTCAAACATCTTGCAGTTCATCAACAAGCTTGACGCCCTGCATGTTGTCAATTACAATGGTTTACTCAGTAGTATTGAGATCGGGACTTCTACACACACAATCATTATAACTCGTACAAATATGGGTTTTCTCGTGGAAGTTCAGGAGCCTGACAAATCAGCTATGAATTCTAAGCGCCCAGGACCAGTCAAGTTCTCATTACTTCATGAGTCTGCCTTCAAACCTTTCACTCGTGTTCCACAATCTGGGATGCAATCATTAATAATGGAGTTCAACAGTTTGTTGGCAATTTAACAAGGTGATCTTAAAATAAGTACATGAATGAGAATTAGTTGTGGGTCTTACCTAGCATTGTTGAGTTAGCTATCTAATCTATTTTCACTAATTGCATTGAGCACTGCTAGTAGGTTTGCACCACGTTAAAGATTCAGAGTGTATGAATTGTGCAGATTTAAACTTGGGTTTTGCCTTATGCTTCACAGGTGGTCTTTTTAAAATGGAGATTATCAGCATTTCTTCAATGGGAGGAGTTAGCAATCAGAAATTGGAGATAAATGGACATCGGGATAGAACAATGCCTAACTATTGGGCGGCTTTCATTTTTAAATGTGTATATAACCAATCTTTTCCTATCTTTGCTTATATTGGTGTAACTTTACTTTAATAACATGTCAATGCTATACTGTTAAGAGAAGGTCTGAGGAAGATTAAGAAAAAGGTCTCGTGTTCACTTGGTTGCCGTCAAGTATCCTGTGGTTTTTTTCTACCTAACTTCCTCATGCCATATGGCTACCCAGCATACCCAGTACCCGGATGCACGTTTATCTTCACCTATAGTCCTGGATCAATGTGATTTGGTAACTCGAGCATGTGGGTTATATTCATCTTATTCTCTAAATCCTCAGCTAAGGCAATGTAAATTACCAAAACATATATATCGACTTAAGTTCGACACAATAGTATCCAAATTCCTAAGTGATACACCTGTAGCAACACTGCCGATAGACTATTTAGTACCAATTCTCCTGCGTTCCCTAACGGGGCACGGTGATAGGCCGTTGACCCCGACTTGTAATCAATTCCTTGATGGAATTATTAATTACACTCTTCATGATGCAGCCTTTCTTGATTACTATCTCAAGGCAACAGGTGCACAGGACCATTTGACAAACATTACAACTAGAGAGAAGCTTAAAAACGAAATTCTAAACAATGATTATGTCCATCAATTGTTCTTCTGGCATGACCTGTCTATTTTGGCTCGACGTGGGCGTCTGAATCGCGGGAACAACCGTTCAACCTGGTTTGTTCATGATGAATTCATTGATATTTTAGGATATGGCGATTATATTTTTTGGAAAATACCTTTATCATTATTACCAGTTACTATAGACGGGGTCCCACACGCGGCAACTGACTGGTATCAACCGACTCTTTTTAAAGAATCCATCCTAGGGCACAGCCAAATCCTATCTGTGTCGACAGCTGAAATACTAATTATGTGTAAAGATATTATCACCTGTAGGTTTAATACATCACTGATTGCATCCATTGCAAAATTAGAGGATGTAGATGTGTCTGATTATCCTGACCCGAGTGATATTCTTAAGATATACAATGCTGGAGACTATGTAATATCTATTCTTGGCTCAGAAGGTTATAAGATAATAAAGTACCTTGAACCACTTTGTTTGGCCAAAATCCAACTTTGCTCTAAATTCACAGAAAGAAAAGGTCGTTTCCTCACACAGATGCATTTATCAGTAATAAATGATCTTCGGGAGTTGATTTCTAACCGCAGGTTAAAGGACTATCAGCAAGAGAAGATTAGGGATTTTCACAAAATATTATTACAATTGCAATTATCTCCTCAACAGTTTTGTGAATTATTCTCTGTTCAAAAACATTGGGGGCATCCAATTTTACATAGTGAGAAAGCTATACAAAAAGTAAAACGGCATGCAACCATCCTTAAGGCTCTCAGACCTAATGTCATTTTTGAGACATATTGTGTATTCAAGTACAATATTGCCAAGCACTATTTCGACAGCCAAGGAACTTGGTACAGTGTAATCTCAGACAGGAATTTAACTCCAGGACTCAACTCCTTCATAAAACGTAATCACTTTCCTTCACTACCCATGATTAAGGATCTTCTATGGGAATTCTATCATCTTAATCACCCTCCGTTATTCTCTACAAAGGTGATTAGTGACTTAAGTATTTTCATCAAGGATAGGGCCACAGCTGTTGAACAGACATGTTGGGATGCAGTCTTTGAACCCAATGTGCTAGGTTACAATCCTCCAAACAAATTCTCCACTAAAAGGGTGCCGGAACAATTTCTAGAACAGGAGGATTTTTCAATCGAAAGTGTCCTGAATTATGCACAGGAATTACATTATTTATTACCACAGAATAGGAATTTTTCCTTTTCTCTTAAAGAAAAAGAATTAAATATTGGACGAACATTTGGTAAGCTACCATATCTCACACGGAATGTCCAAACTTTATGTGAGGCTCTGTTAGCAGATGGACTGGCTAAGGCCTTCCCCAGTAACATGATGGTAGTAACTGAACGTGAACAAAAAGAGAGCCTTCTTCATCAGGCATCATGGCACCACACCAGTGATGATTTTGGAGAGAATGCTACCGTTCGAGGGAGTAGTTTTGTAACTGATTTAGAGAAGTACAATCTTGCATTTCGCTATGAGTTCACTGCACCATTTATTGAGTACTGCAACCATTGCTATGGTGTGCGTAATGTCTTTAATTGGATGCATTATTTAATCCCGCAGTGTTACATGCATGTAAGTGATTATTATAATCCGCCTCACAATGTTAATCTTAGCAATCGAGAATATCCTCCTGAAGGCCCGAGTTCGTACCGAGGGCACTTAGGAGGCATAGAGGGATTACAACAAAAACTGTGGACGAGTATATCCTGTGCACAAATCTCCTTAGTGGAAATTAAAACTGGTTTTAAGTTACGATCAGCGGTCATGGGAGACAATCAGTGTATAACCGTATTGTCTGTTTTTCCACTTGAAACAGACCCTGAAGAGCAGGAGCAAAGCGCCGAAGACAATGCTGCAAGAGTAGCAGCAAGTCTTGCAAAAGTAACCAGTGCATGTGGGATCTTTCTTAAACCAGAAGAGACATTCGTACACTCAGGTTTCATTTATTTCGGAAAAAAACAATATCTCAATGGTGTACAATTACCGCAATCACTCAAAACAGCAGCAAGAATGGCGCCACTCTCTGATGCTATATTCGATGATCTACAAGGAACACTTGCCAGTATTGGAACTGCCTTCGAACGTGCTATATCGGAAACGCGACATATCCTCCCATGTCGTATTGTAGCAGCTTTCCATACGTATTTCGCCGTTCGGATTTTACAATATCACCATCTTGGATTTAATAAAGGCATCGATTTAGGGCAGTTGTCACTTAGTAAACCATTAGACTATGGGACTATTACTCTAACATTGGCGGTTCCACAAGTCCTTGGGGGATTGTCTTTTCTAAATCCAGAAAAGTGTTTTTATCGAAACTTCGGAGATCCTGTGACTTCTGGACTTTTCCAGCTACGGGTGTACCTAGAAATGGTTAACATGAAAGACCTATTTTATCCATTAATATCGAAAAATCCAGGAAATTGTAGTGCCATTGATTTTGTCTTAAATCCATCCGGATTAAATGTTCCAGGATCACAAGACTTGACATCCTTTTTGCGACAGATCGTTAGGCGTAGTATTACACTAACTGCAAGAAATAAGTTAATTAACACTCTCTTCCATGCCTCTGCTGATTTGGAAGATGAGATGGTTTGTAAATGGCTCCTTTCATCAAACCCTGTCATGAGTCGCTTTGCAGCGGATATTTTTTCCAGGACACCTAGTGGTAAACGTCTCCAAATATTAGGTTATCTTGAAGGGACCAGGACTCTATTGGCCTCCAAAATCATAAACAACAACAGTGAGACACCTGTACTTGATAAGCTGAGGAAGATCACCCTACAAAGATGGAATCTGTGGTTCAGTTATTTGGACCATTGTGACCAATTACTAGCAGATGCTCTACAGAAAATTAGTTGCACGGTGGATTTGGCCCAGATTTTGCGTGAGTATACATGGTCACACATCTTAGAGGGTAGACCATTGATCGGAGCGACATTACCATGTATGGTGGAGCAATTCAAAGTTAAGTGGCTAAGACAATATGAACCTTGTCCAGAATGCCTCAACAAAAAAGGCTCAAATGCTTATGTCTCAGTTGCAGTCAAAGATCAAGTGGTCAGTGCTTGGCCTAATACTTCTCGAATAAGTTGGACAATAGGGAGTGGTGTCCCCTATATAGGGTCAAGAACCGAGGATAAAATCGGACAGCCTGCAATCAAGCCGCGATGCCCTTCATCTGCCCTCAAGGAGGCTATAGAATTAGCATCAAGGCTCACTTGGGTTACACAAGGAAGTTCTAATAGTGAACAATTAATCCGGCCTTTCTTAGAAGCGAGAGTCAACCTTAGTGTCAGTGAAGTCCTGCAAATGACACCATCACATTATTCAGGAAATATTGTCCATCGATATAACGACCAATATAGCCCGCACTCATTTATGGCGAATCGCATGAGCAATACTGCGACCCGTCTCATAGTGTCAACTAATACACTTGGAGAATTTTCAGGTGGAGGGCAGGCCGCCAGGGATAGCAATATAATTTTCCAGAATGTTATAAATTTAGCAGTTGCCCTTTATGATATTAGATTCCGGAATACGAACACCTCTGATATAAGGCATAATAGGGCTCATCTTCACCTGACAGAGTGCTGTACTAAAGAGGTCCCGGCCCAGTATTTGACATATACAAGTGCACTCAATCTGGATTTAAGCCGTTATCGTGATAATGAACTAATATATGACTCAAATCCACTGAGGGGAGGATTGAACTGCAATTTAACAATGGATAGTCCTTTAGTGAAGGGTCCTAGGCTTAACATGATTGAAGATGATCTTCTCCGCTTTCCACACCTTTCTGGATGGGAGTTAGCGAAAACGGTGGTACAATCCATCATCTCAGACAATAGCAACTCATCAACAGATCCAATCAGTAGCGGAGAAACACGCTCTTTCACAACTCATTTTCTCACTTACCCTCAGATTGGCCTTCTTTACAGTTTCGGGGCAGTATTATGCTTTTATCTAGGCAATACTATCCTATGGACTAAAAAACTTGATTATGAACAGTTTCTATATTATTTGCATAACCAGCTGCACAACTTACCTCATCGAGCACTCCGTGTTTTTAAACCAACATTTAAGCATGCCAGTGTGATGTCCCGATTAATGGAAATTGATTCCAACTTCTCAATTTATATTGGCGGGACATCTGGAGATCGAGGGCTGTCTGATGCTGCTCGACTGTTTCTTCGGACAGCAATCGCGAGTTTTTTACAATTTCTTAAAAGCTGGATCATCGATCGCCAAAAGGCAATTCCTTTATGGATAGTATATCCGCTTGAAGGTCAACAGCCGGAATCCATCAATGAATTTCTACATAAAATTTTTGGTCTGCTCAAACAAGGCCCCAAAAATATTCCAAAGGAGGTCAGCATTCAAAATGATGGACATTTGGATTTGGCAGAAAATAATTATGTTTACAATAGTAAGAGCACTGCTAGTAATTTCTTCCATGCATCCTTAGCTTACTGGAGAAGTAGGAAATCTCGGAAAACTCAAGACCATAATGATTTCTCAAGAGGGGATGGAACACTTACAGAACCCGTGTGTAAGTTCTCAAGCAATCATCAGTCAGATGAAAAGTACTACAATGTGACATGTGGAAAGTCACCGAAGCCGCAAGAACGCAAAGACTTCTCGCAATACAGACTCAGCAATAACGGGCAAACAATGAGTAATCATCGTAAGAAAGGGAAGTTCCACAAGTGGAATCCCTGCAAAGTGTTAATGGAGAGTCAAAGGGGAACTGTTCTAAAAGAGGGTGACTACTTTCAAAACAATACTCCACCAACAGATGATGTATCAAGTCCTCACCGACTCATTCTACCATTTTTTAAATTGGGAAATCACAACCATGCACATGATCAAGATGCCCAAGAATTGATAAATCAAAATATTAAACAGTACCTACATCAGCTAAGGTCTATGTTGGACACCACTATATATTGTAGATTCACAGGGATTGTCTCATCCATGCATTACAAATTGGACGAAGTTCTTCTAGAATACAATAGTTTCGATTCAGCTATCACATTAGCTGAAGGTGAGGGGTCAGGGGCTCTATTACTTTTGCAGAAATATAGTACAAGGTTATTATTTTTGAACACATTGGCAACAGAACACAGTATAGAGTCAGAAGTTGTATCAGGTTTTTCTACTCCGAGAATGTTGTTACCAATAATGCAAAAGGTTCATGAAGGACAAGTCACTGTTATCTTAAATAATTCAGCAAGTCAGATAACTGACATAACTAGCTCAATGTGGTTAAGTAATCAAAAATATAATCTACCTTGTCAAGTTGAAATCATTACGATGGATGCTGAAACAACAGAGAACTTAAACAGGTCCCAACTCTACCGAGCAGTATATAACTTAATACTTGATCACATTGATCCGCAGTATCTCAAGGTGGTGGTACTCAAAGTATTTCTGAGTGATATAGAAGGAATATTATGGATTAATGATTACTTGGCTCCATTATTCGGGGCTGGTTACTTGATTAAACCGATTACATCAAGTGCCCGGTCAAGTGAATGGTACCTTTGCTTATCAAATTTGATATCTACTAACAGGAGATCGGCCCATCAGACTCACAAGGCATGTCTTGGTGTTATCAGAGATGCTTTGCAAGCACAAGTCCAGCGAGGCGTGTACTGGTTGAGTCACATCGCACAGTATGCTACAAAGAATCTCCATTGTGAATACATATGCCTTGGTTTCCCACCTCTAGAAAAGGTCCTATATCACAGGTATAATCTAGTTGATACTGGACTCGGTCCATTGTCGTCAGTTATTAGACATTTAACTAACCTCCAGGCAGAGATACGAGACTTAGTATTAGATTATACCCTGATGAGAGAGAGTCGCACTCAAACGTACCATTTTATTAAGACTGCAAAAGGCAGAATCACAAAGTTAGTCAATGACTTTCTGAAGTTTTCTTTAATTGTCCAGGCACTCAAAAATAATTCTTCTTGGTATACTGAGCTTAAAAAATTACCTGAGGTGATTAATGTGTGTAATCGATTTTATCATACTCACAGTTGCGAATGTCAGGAAAAATTCTTTGTCCAGACGCTTTATTTACAACGCCTACGCGATGCAGAAATCAAGCTAATTGAACGCCTTACCGGGTTAATGCGATTTTATCCAGAAGGGTTAATATATTCCAATCACACATAGGTACTAAATCATCATAGTATGAGGAATAAAATAATGATAATTCCTGACGACAGTTTTAGTTCCGATTCTAAGTATATCGGAAGAGAGTATGCCAATCTTAATTATTAAAGGTAACAAGCTATTAGTTATTACTTATTGATAAGAATAAACTTTATCATAGCGTAACACATCATAACTTTATAGCGATTTTGCATTTCTAATCCTAGTATTTATTAGAATGTACTATCAGAGAAATGACCCCAGTTCCTATCTTTAAATAATGATTGTGTGTATTAAATTATTAGTTTATTAGGTTTATGAGTTGGTTACACAGTGAGTATTAGTAATTGAGGATTATGTAGATAGGTAATCTAACACTGAATCACCCATCTGATGTCACCATATCCAAATATTGTGCTAGTCGCATTTAAACATGCTATCTTCAGTTAAGTAACATAGACTGAAAATGCTAAGAAGAGATTGGAGTAAAAGTATAAAATAAATTTAATTAAACTTCAAAGTGATTAAATGATAATGATCTTGGGAACTCGATATGACCTCAAGTCAAAAATAATGTCAATATAATTGTTTAGTAATATGAGTTATAATGTGAATTTTGATAACTAACTAGCTTTAGTAGTTAAGATCAAATGCAAACATTCTAAGAATGTTAAGCGCACACAAAAACATTATAAAAAACCAATTTTTTCCTTTTTGTGTGTCCCTTCTTCTTTTCGGACACACAAAAAGAAAGAAGAATTTTTAGGATCTTTTGTGTGCGAATAACTATGAGGAAGATTAATAATTTTCCTCTCATTGAAATTTATATCGGAATTTAAATTGAAATTGTTACTGTAATCACACCTGGTTTGTTTCAGAGCCACATCACAAAGATAGAGAACAACCTAGGTCTCCGAAGGGAGCAAGGGCATCAGTGTGCTCAGTTGAAAATCCCTTGTCAACACCTAGGTCTTATCACATCACAAGTTCCACCTCAGACTCTGCAGGGTGATCCAACAACCTTAATAGAAACATTATTGTTAAAGGACAGCATTAGTTCACAGTCAAACAAGCAAGATTGAGAATTAACCTTGGTTTTGAACTTGAACACTTAGGGGATTGAAGATTCAACAACCCTAAAGCTTGGGGTAAAACATTGGAAATAGTTAAAAGACAAATTGCTCGGAATCACAAAATTCCGAGTATGGATTCTCGTCCTCAGAAAATCTGGATGGCGCCGAGTCTCACTGAATCTGACATGGATTACCACAAGATCTTGACAGCAGGTCTGTCCGTTCAACAGGGGATTGTTCGGCAAAGAGTCATCCCAGTGTATCAAGTAAACAATCTTGAAGAAATTTGCCAACTTATCATACAGGCCTTTGAAGCAGGTGTTGATTTTCAAGAGAGTGCGGACAGTTTCCTTCTCATGCTTTGTCTTCATCATGCGTACCAGGGAGATTACAAACTTTTCTTGGAAAGTGGCGCAGTCAAGTATTTGGAAGGGCACGGGTTCCGTTTTGAAGTCAAGAAGCGTGATGGAGTGAAGCGCCTTGAGGAATTGCTGCCAGCAGTATCTAGTGGAAAAAACATTAAGAGAACACTTGCTGCCATGCCGGAAGAGGAGACAACTGAAGCTAATGCCGGTCAGTTTCTCTCCTTTGCAAGTCTATTCCTTCCGAAATTGGTAGTAGGAGAAAAGGCTTGCCTTGAGAAGGTTCAAAGGCAAATTCAAGTACATGCAGAGCAAGGACTGATACAATATCCAACAGCTTGGCAATCAGTAGGACACATGATGGTGATTTTCCGTTTGATGCGAACAAATTTTCTGATCAAATTTCTCCTAATACACCAAGGGATGCACATGGTTGCCGGGCATGATGCCAACGATGCTGTGATTTCAAATTCAGTGGCTCAAGCTCGTTTTTCAGGCTTATTGATTGTCAAAACAGTACTTGATCATATCCTACAAAAGACAGAACGAGGAGTTCGTCTCCATCCTCTTGCAAGGACCGCCAAGGTAAAAAATGAGGTGAACTCCTTTAAGGCTGCACTCAGCTCCCTGGCCAAGCATGGAGAGTATGCTCCTTTCGCCCGACTTTTGAACCTTTCTGGAGTAAATAATCTTGAGCATGGTCTTTTCCCTCAACTATCGGCAATTGCACTCGGAGTCGCCACAGCACACGGGAGTACCCTCGCAGGAGTAAATGTTGGAGAACAGTATCAACAACTCAGAGAGGCTGCCACTGAGGCTGAGAAGCAACTCCAACAATATGCAGAGTCTCGCGAACTTGACCATCTTGGACTTGATGATCAGGAAAAGAAAATTCTTATGAACTTCCATCAGAAAAAGAACGAAATCAGCTTCCAGCAAACAAACGCTATGGTAACTCTAAGAAAAGAGCGCCTGGCCAAGCTGACAGAAGCTATCACTGCTGCGTCACTGCCCAAAACAAGTGGACATTACGATGATGATGACGACATTCCCTTTCCAGGACCCATCAATGATGACGACAATCCTGGCCATCAAGATGATGATCCGACTGACTCACAGGATACGACCATTCCCGATGTGGTGGTTGATCCCGATGATGGAAGCTACGGCGAATACCAGAGTTACTCGGAAAACGGCATGAATGCACCAGATGACTTGGTCCTATTCGATCTAGACGAGGACGACGAGGACACTAAGCCAGTGCCTAATAGATCGACCAAGGGTGGACAACAGAAGAACAGTCAAAAGGGCCAGCATATAGAGGGCAGACAGACACAATCCAGGCCAATTCAAAATGTCCCAGGCCCTCACAGAACAATCCACCACGCCAGTGCGCCACTCACGGACAATGACAGAAGAAATGAACCCTCCGGCTCAACCAGCCCTCGCATGCTGACACCAATTAACGAAGAGGCAGACCCACTGGACGATGCCGACGACGAGACGTCTAGCCTTCCGCCCTTGGAGTCAGATGATGAAGAGCAGGACAGGGACGGAACTTCCAACCGCACACCCACTGTCGCCCCACCGGCTCCCGTATACAGAGATCACTCTGAAAAGAAAGAACTCCCGCAAGACGAGCAACAAGATCAGGACCACACTCAAGAGGCCAGGAACCAGGACAGTGACAACACCCAGTCAGAACACTCTTTTGAGGAGATGTATCGCCACATTCTAAGATCACAGGGGCCATTTGATGCTGTTTTGTATTATCATATGATGAAGGATGAGCCTGTAGTTTTCAGTACCAGTGATGGCAAAGAGTACACGTATCCAGACTCCCTTGAAGAGGAATATCCACCATGGCTCACTGAAAAAGAGGCTATGAATGAAGAGAATAGATTTGTTACATTGGATGGTCAACAATTTTATTGGCCGGTGATGAATCACAAGAATAAATTCATGGCAATCCTGCAACATCATCAGTGAATGAGCATGGAACAATGGGATGATTCAACCGACAAATAGCTAACATTAAGTAGTCAAGGAACGAAAACAGGAAGAATTTTTGATGTCTAAGGTGTGAATTATTATCACAATAAAAGTGATTCTTATTTTTGAATTTAAAGCTAGCTTATTATTACTAGCCGTTTTTCAAAGTTCAATTTGAGTCTTAATGCAAATAGGCGTTAAGCCACAGTTATAGCCATAATTGTAACTCAATATTCTAACTAGCGATTTATCTAAATTAAATTACATTATGCTTTTATAACTTACCTACTAGCCTGCCCAACATTTACACGATCGTTTTATAATTAAGAAAAAACTAATGATGAAGATTAAAACCTTCATCATCCTTACGTCAATTGAATTCTCTAGCACTCGAAGCTTATTGTCTTCAATGTAAAAGAAAAGCTGGTCTAACAAGATGACAACTAGAACAAAGGGCAGGGGCCATACTGCGGCCACGACTCAAAACGACAGAATGCCAGGCCCTGAGCTTTCGGGCTGGATCTCTGAGCAGCTAATGACCGGAAGAATTCCTGTAAGCGACATCTTCTGTGATATTGAGAACAATCCAGGATTATGCTACGCATCCCAAATGCAACAAACGAAGCCAAACCCGAAGACGCGCAACAGTCAAACCCAAACGGACCCAATTTGCAATCATAGTTTTGAGGAGGTAGTACAAACATTGGCTTCATTGGCTACTGTTGTGCAACAACAAACCATCGCATCAGAATCATTAGAACAACGCATTACGAGTCTTGAGAATGGTCTAAAGCCAGTTTATGATATGGCAAAAACAATCTCCTCATTGAACAGGGTTTGTGCTGAGATGGTTGCAAAATATGATCTTCTGGTGATGACAACCGGTCGGGCAACAGCAACCGCTGCGGCAACTGAGGCTTATTGGGCCGAACATGGTCAACCACCACCTGGACCATCACTTTATGAAGAAAGTGCGATTCGGGGTAAGATTGAATCTAGAGATGAGACCGTCCCTCAAAGTGTTAGGGAGGCATTCAACAATCTAAACAGTACCACTTCACTAACTGAGGAAAATTTTGGGAAACCTGACATTTCGGCAAAGGATTTGAGAAACATTATGTATGATCACTTGCCTGGTTTTGGAACTGCTTTCCACCAATTAGTACAAGTGATTTGTAAATTGGGAAAAGATAGCAACTCATTGGACATCATTCATGCTGAGTTCCAGGCCAGCCTGGCTGAAGGAGACTCTCCTCAATGTGCCCTAATTCAAATTACAAAAAGAGTTCCAATCTTCCAAGATGCTGCTCCACCTGTCATCCACATCCGCTCTCGAGGTGACATTCCCCGAGCTTGCCAGAAAAGCTTGCGTCCAGTCCCACCATCGCCCAAGATTGATCGAGGTTGGGTATGTGTTTTTCAGCTTCAAGATGGTAAAACACTTGGACTCAAAATTTGAGCCAATCTCCCTTCCCTCCGAAAGAGGCGAATAATAGCAGAGGCTTCAACTGCTGAACTATAGGGTACGTTACATTAATGATACACTTGTGAGTATCAGCCCTGGATAATATAAGTCAATTAAACGACCAAGATAAAATTGTTCATATCTCGCTAGCAGCTTAAAATATAAATGTAATAGGAGCTATATCTCTGACAGTATTATAATCAATTGTTATTAAGTAACCCAAACCAAAAGTGATGAAGATTAAGAAAAACCTACCTCGGCTGAGAGAGTGTTTTTTCATTAACCTTCATCTTGTAAACGTTGAGCAAAATTGTTAAAAATATGAGGCGGGTTATATTGCCTACTGCTCCTCCTGAATATATGGAGGCCATATACCCTGTCAGGTCAAATTCAACAATTGCTAGAGGTGGCAACAGCAATACAGGCTTCCTGACACCGGAGTCAGTCAATGGGGACACTCCATCGAATCCACTCAGGCCAATTGCCGATGACACCATCGACCATGCCAGCCACACACCAGGCAGTGTGTCATCAGCATTCATCCTTGAAGCTATGGTGAATGTCATATCGGGCCCCAAAGTGCTAATGAAGCAAATTCCAATTTGGCTTCCTCTAGGTGTCGCTGATCAAAAGACCTACAGCTTTGACTCAACTACGGCCGCCATCATGCTTGCTTCATACACTATCACCCATTTCGGCAAGGCAACCAATCCACTTGTCAGAGTCAATCGGCTGGGTCCTGGAATCCCGGATCATCCCCTCAGGCTCCTGCGAATTGGAAACCAGGCTTTCCTCCAGGAGTTCGTTCTTCCGCCAGTCCAACTACCCCAGTATTTCACCTTTGATTTGACAGCACTCAAACTGATCACCCAACCACTGCCTGCTGCAACATGGACCGATGACACTCCAACAGGATCAAATGGAGCGTTGCGTCCAGGAATTTCATTTCATCCAAAACTTCGCCCCATTCTTTTACCCAACAAAAGTGGGAAGAAGGGGAACAGTGCCGATCTAACATCTCCGGAGAAAATCCAAGCAATAATGACTTCACTCCAGGACTTTAAGATCGTTCCAATTGATCCAACCAAAAATATCATGGGAATCGAAGTGCCAGAAACTCTGGTCCACAAGCTGACCGGTAAGAAGGTGACTTCTAAAAATGGACAACCAATCATCCCTGTTCTTTTGCCAAAGTACATTGGGTTGGACCCGGTGGCTCCAGGAGACCTCACCATGGTAATCACACAGGATTGTGACACGTGTCATTCTCCTGCAAGTCTTCCAGCTGTGATTGAGAAGTAATTGCAATAATTGACTCAGATCCAGTTTTATAGAATCTTCTCAGGGATAGTGATAACATCTATTTAGTAATCCGTCCATTAGAGGAGACACTTTTAATTGATCAATATACTAAAGGTGCTTTACACCATTGTCTTTTTTCTCTCCTAAATGTAGAACTTAACAAAAGACTCATAATATACTTGTTTTTAAAGGATTGATTGATGAAAGATCATAACTAATAACATTACAAATAATCCTACTATAATCAATACGGTGATTCAAATGTTAATCTTTCTCATTGCACATACTTTTTGCCCTTATCCTCAAATTGCCTGCATGCTTACATCTGAGGATAGCCAGTGTGACTTGGATTGGAAATGTGGAGAAAAAATCGGGACCCATTTCTAGGTTGTTCACAATCCAAGTACAGACATTGCCCTTCTAATTAAGAAAAAATCGGCGATGAAGATTAAGCCGACAGTGAGCGTAATCTTCATCTCTCTTAGATTATTTGTTTTCCAGAGTAGGGGTCGTCAGGTCCTTTTCAATCGTGTAACCAAAATAAACTCCACTAGAAGGATATTGTGGGGCAACAACACAATGGGCGTTACAGGAATATTGCAGTTACCTCGTGATCGATTCAAGAGGACATCATTCTTTCTTTGGGTAATTATCCTTTTCCAAAGAACATTTTCCATCCCACTTGGAGTCATCCACAATAGCACATTACAGGTTAGTGATGTCGACAAACTAGTTTGTCGTGACAAACTGTCATCCACAAATCAATTGAGATCAGTTGGACTGAATCTCGAAGGGAATGGAGTGGCAACTGACGTGCCATCTGCAACTAAAAGATGGGGCTTCAGGTCCGGTGTCCCACCAAAGGTGGTCAATTATGAAGCTGGTGAATGGGCTGAAAACTGCTACAATCTTGAAATCAAAAAACCTGACGGGAGTGAGTGTCTACCAGCAGCGCCAGACGGGATTCGGGGCTTCCCCCGGTGCCGGTATGTGCACAAAGTATCAGGAACGGGACCGTGTGCCGGAGACTTTGCCTTCCATAAAGAGGGTGCTTTCTTCCTGTATGATCGACTTGCTTCCACAGTTATCTACCGAGGAACGACTTTCGCTGAAGGTGTCGTTGCATTTCTGATACTGCCCCAAGCTAAGAAGGACTTCTTCAGCTCACACCCCTTGAGAGAGCCGGTCAATGCAACGGAGGACCCGTCTAGTGGCTACTATTCTACCACAATTAGATATCAGGCTACCGGTTTTGGAACCAATGAGACAGAGTACTTGTTCGAGGTTGACAATTTGACCTACGTCCAACTTGAATCAAGATTCACACCACAGTTTCTGCTCCAGCTGAATGAGACAATATATACAAGTGGGAAAAGGAGCAATACCACGGGAAAACTAATTTGGAAGGTCAACCCCGAAATTGATACAACAATCGGGGAGTGGGCCTTCTGGGAAACTAAAAAAACCTCACTAGAAAAATTCGCAGTGAAGAGTTGTCTTTCACAGTTGTATCAAACGGAGCCAAAAACATCAGTGGTCAGAGTCCGGCGCGAACTTCTTCCGACCCAGGGACCAACACAACAACTGAAGACCACAAAATCATGGCTTCAGAAAATTCCTCTGCAATGGTTCAAGTGCACAGTCAAGGAAGGGAAGCTGCAGTGTCGCATCTAACAACCCTTGCCACAATCTCCACGAGTCCCCAATCCCTCACAACCAAACCAGGTCCGGACAACAGCACCCATAATACACCCGTGTATAAACTTGACATCTCTGAGGCAACTCAAGTTGAACAACATCACCGCAGAACAGACAACGACAGCACAGCCTCCGACACTCCCTCTGCCACGACCGCAGCCGGACCCCCAAAAGCAGAGAACACCAACACGAGCAAGAGCACTGACTTCCTGGACCCCGCCACCACAACAAGTCCCCAAAACCACAGCGAGACCGCTGGCAACAACAACACTCATCACCAAGATACCGGAGAAGAGAGTGCCAGCAGCGGGAAGCTAGGCTTAATTACCAATACTATTGCTGGAGTCGCAGGACTGATCACAGGCGGGAGAAGAACTCGAAGAGAAGCAATTGTCAATGCTCAACCCAAATGCAACCCTAATTTACATTACTGGACTACTCAGGATGAAGGTGCTGCAATCGGACTGGCCTGGATACCATATTTCGGGCCAGCAGCCGAGGGAATTTACATAGAGGGGCTAATGCACAATCAAGATGGTTTAATCTGTGGGTTGAGACAGCTGGCCAACGAGACGACTCAAGCTCTTCAACTGTTCCTGAGAGCCACAACTGAGCTACGCACCTTTTCAATCCTCAACCGTAAGGCAATTGATTTCTTGCTGCAGCGATGGGGCGGCACATGCCACATTCTGGGACCGGACTGCTGTATCGAACCACATGATTGGACCAAGAACATAACAGACAAAATTGATCAGATTATTCATGATTTTGTTGATAAAACCCTTCCGGACCAGGGGGACAATGACAATTGGTGGACAGGATGGAGACAATGGATACCGGCAGGTATTGGAGTTACAGGCGTTATAATTGCAGTTATCGCTTTATTCTGTATATGCAAATTTGTCTTTTAGTTTTTCTTCAGATTGCTTCATGGAAAAGCTCAGCCTCAAATCAATGAAACCAGGATTTAATTATATGGATTACTTGAATCTAAGATTACTTGACAAATGATAATATAATACACTGGAGCTTTAAACATAGCCAATGTGATTCTAACTCCTTTAAACTCACAGTTAATCATAAACAAGGTTTGACATCAATCTAGTTATCTCTTTGAGAATGATAAACTTGATGAAGATTAAGAAAAAGGTAATCTTTCGATTATCTTTAATCTTCATCCTTGATTCTACAATCATGACAGTTGTCTTTAGTGACAAGGGAAAGAAGCCTTTTTATTAAGTTGTAATAATCAGATCTGCGAACCGGTAGAGTTTAGTTGCAACCTAACACACATAAAGCATTGGTCAAAAAGTCAATAGAAATTTAAACAGTGAGTGGAGACAACTTTTAAATGGAAGCTTCATATGAGAGAGGACGCCCACGAGCTGCCAGACAGCATTCAAGGGATGGACACGACCACCATGTTCGAGCACGATCATCATCCAGAGAGAATTATCGAGGTGAGTACCGTCAATCAAGGAGCGCCTCACAAGTGCGCGTTCCTACTGTATTTCATAAGAAGAGAGTTGAACCATTAACAGTTCCTCCAGCACCTAAAGACATATGTCCGACCTTGAAAAAAGGATTTTTGTGTGACAGTAGTTTTTGCAAAAAAGATCACCAGTTGGAGAGTTTAACTGATAGGGAATTACTCCTACTAATCGCCCGTAAGACTTGTGGATCAGTAGAACAACAATTAAATATAACTGCACCCAAGGACTCGCGCTTAGCAAATCCAACGGCTGATGATTTCCAGCAAGAGGAAGGTCCAAAAATTACCTTGTTGACACTGATCAAGACGGCAGAACACTGGGCGAGACAAGACATCAGAACCATAGAGGATTCAAAATTAAGAGCATTGTTGACTCTATGTGCTGTGATGACGAGGAAATTCTCAAAATCCCAGCTGAGTCTTTTATGTGAGACACACCTAAGGCGCGAGGGGCTTGGGCAAGATCAGGCAGAACCCGTTCTCGAAGTATATCAACGATTACACAGTGATAAAGGAGGCAGTTTTGAAGCTGCACTATGGCAACAATGGGACCGACAATCCCTAATTATGTTTATCACTGCATTCTTGAATATTGCTCTCCAGTTACCGTGTGAAAGTTCTGCTGTCGTTGTTTCAGGGTTAAGAACATTGGTTCCTCAATCAGATAATGAGGAAGCTTCAACCAACCCGGGGACATGCTCATGGTCTGATGAGGGTACCCCTTAATAAGGCTGACTAAAACACTATATAACCTTCTACTTGATCACAATACTCCGTATACCTATCATCATATATTTAATCAAGACGATATCCTTTAAAACTTATTCAGTACTATAATCACTCTCGTTTCAAATTAATAAGATGTGCATGATTGCCCTAATATATGAAGAGGTATGATACAACCCTAACAGTGATCAAAGAAAATCATAATCTCGTATCGCTCGTAATATAACCTGCCAAGCATACCTCTTGCACAAAGTGATTCTTGTACACAAATAATGTTTTACTCTACAGGAGGTAGCAACGATCCATCCCATCAAAAAATAAGTATTTCATGACTTACTAATGATCTCTTAAAATATTAAGAAAAACTGACGGAACATAAATTCTTTATGCTTCAAGCTGTGGAGGAGGTGTTTGGTATTGGCTATTGTTATATTACAATCAATAACAAGCTTGTAAAAATATTGTTCTTGTTTCAAGAGGTAGATTGTGACCGGAAATGCTAAACTAATGATGAAGATTAATGCGGAGGTCTGATAAGAATAAACCTTATTATTCAGATTAGGCCCCAAGAGGCATTCTTCATCTCCTTTTAGCAAAGTACTATTTCAGGGTAGTCCAATTAGTGGCACGTCTTTTAGCTGTATATCAGTCGCCCCTGAGATACGCCACAAAAGTGTCTCTAAGCTAAATTGGTCTGTACACATCCCATACATTGTATTAGGGGCAATAATATCTAATTGAACTTAGCCGTTTAAAATTTAGTGCATAAATCTGGGCTAACACCACCAGGTCAACTCCATTGGCTGAAAAGAAGCTTACCTACAACGAACATCACTTTGAGCGCCCTCACAATTAAAAAATAGGAACGTCGTTCCAACAATCGAGCGCAAGGTTTCAAGGTTGAACTGAGAGTGTCTAGACAACAAAATATTGATACTCCAGACACCAAGCAAGACCTGAGAAAAAACCATGGCTAAAGCTACGGGACGATACAATCTAATATCGCCCAAAAAGGACCTGGAGAAAGGGGTTGTCTTAAGCGACCTCTGTAACTTCTTAGTTAGCCAAACTATTCAGGGGTGGAAGGTTTATTGGGCTGGTATTGAGTTTGATGTGACTCACAAAGGAATGGCCCTATTGCATAGACTGAAAACTAATGACTTTGCCCCTGCATGGTCAATGACAAGGAATCTCTTTCCTCATTTATTTCAAAATCCGAATTCCACAATTGAATCACCGCTGTGGGCATTGAGAGTCATCCTTGCAGCAGGGATACAGGACCAGCTGATTGACCAGTCTTTGATTGAACCCTTAGCAGGAGCCCTTGGTCTGATCTCTGATTGGCTGCTAACAACCAACACTAACCATTTCAACATGCGAACACAACGTGTCAAGGAACAATTGAGCCTAAAAATGCTGTCGTTGATTCGATCCAATATTCTCAAGTTTATTAACAAATTGGATGCTCTACATGTCGTGAACTACAACGGATTGTTGAGCAGTATTGAAATTGGAACTCAAAATCATACAATCATCATAACTCGAACTAACATGGGTTTTCTGGTGGAGCTCCAAGAACCCGACAAATCGGCAATGAACCGCATGAAGCCTGGGCCGGCGAAATTTTCCCTCCTTCATGAGTCCACACTGAAAGCATTTACACAAGGATCCTCGACACGAATGCAAAGTTTGATTCTTGAATTTAATAGCTCTCTTGCTATCTAACTAAGGTAGAATACTTCATATTGAGCTAACTCATATATGCTGACTCAATAGTTATCTTGACATCTCTGCTTTCATAATCAGATATATAAGCATAATAAATAAATACTCATATTTCTTGATAATTTGTTTAACCACAGATAAATCCTCACTGTAAGCCAGCTTCCAAGTTGACACCCTTACAAAAACCAGGACTCAGAATCCCTCAAACAAGAGATTCCAAGACAACATCATAGAATTGCTTTATTATATGAATAAGCATTTTATCACCAGAAATCCTATATACTAAATGGTTAATTGTAACTGAACCCGCAGGTCACATGTGTTAGGTTTCACAGATTCTATATATTACTAACTCTATACTCGTAATTAACATTAGATAAGTAGATTAAGAAAAAAGCCTGAGGAAGATTAAGAAAAACTGCTTATTGGGTCTTTCCGTGTTTTAGATGAAGCAGTTGAAATTCTTCCTCTTGATATTAAATGGCTACACAACATACCCAATACCCAGACGCTAGGTTATCATCACCAATTGTATTGGACCAATGTGACCTAGTCACTAGAGCTTGCGGGTTATATTCATCATACTCCCTTAATCCGCAACTACGCAACTGTAAACTCCCGAAACATATCTACCGTTTGAAATACGATGTAACTGTTACCAAGTTCTTGAGTGATGTACCAGTGGCGACATTGCCCATAGATTTCATAGTCCCAGTTCTTCTCAAGGCACTGTCAGGCAATGGATTCTGTCCTGTTGAGCCGCGGTGCCAACAGTTCTTAGATGAAATCATTAAGTACACAATGCAAGATGCTCTCTTCTTGAAATATTATCTCAAAAATGTGGGTGCTCAAGAAGACTGTGTTGATGAACACTTTCAAGAGAAAATCTTATCTTCAATTCAGGGCAATGAATTTTTACATCAAATGTTTTTCTGGTATGATCTGGCTATTTTAACTCGAAGGGGTAGATTAAATCGAGGAAACTCTAGATCAACATGGTTTGTTCATGATGATTTAATAGACATCTTAGGCTATGGGGACTATGTTTTTTGGAAGATCCCAATTTCAATGTTACCACTGAACACACAAGGAATCCCCCATGCTGCTATGGACTGGTATCAGGCATCAGTATTCAAAGAAGCGGTTCAAGGGCATACACACATTGTTTCTGTTTCTACTGCCGACGTCTTGATAATGTGCAAAGATTTAATTACATGTCGATTCAACACAACTCTAATCTCAAAAATAGCAGAGATTGAGGATCCAGTTTGTTCTGATTATCCCAATTTTAAGATTGTGTCTATGCTTTACCAGAGCGGAGATTACTTACTCTCCATATTAGGGTCTGATGGGTATAAAATTATTAAGTTCCTCGAACCATTGTGCTTGGCCAAAATTCAATTATGCTCAAAGTACACTGAGAGGAAGGGCCGATTCTTAACACAAATGCATTTAGCTGTAAATCACACCCTAGAAGAAATTACAGAAATGCGTGCACTAAAGCCTTCACAGGCTCAAAAGATCCGTGAATTCCATAGAACATTGATAAGGCTGGAGATGACGCCACAACAACTTTGTGAGCTATTTTCCATTCAAAAACACTGGGGGCATCCTGTGCTACATAGTGAAACAGCAATCCAAAAAGTTAAAAAACATGCTACGGTGCTAAAAGCATTACGCCCTATAGTGATTTTCGAGACATACTGTGTTTTTAAATATAGTATTGCCAAACATTATTTTGATAGTCAAGGATCTTGGTACAGTGTTACTTCAGATAGGAATCTAACACCGGGTCTTAATTCTTATATCAAAAGAAATCAATTCCCTCCGTTGCCAATGATTAAAGAACTACTATGGGAATTTTACCACCTTGACCACCCTCCACTTTTCTCAACCAAAATTATTAGTGACTTAAGTATTTTTATAAAAGACAGAGCTACCGCAGTAGAAAGGACATGCTGGGATGCAGTATTCGAGCCTAATGTTCTAGGATATAATCCACCTCACAAATTTAGTACTAAACGTGTACCGGAACAATTTTTAGAGCAAGAAAACTTTTCTATTGAGAATGTTCTTTCCTACGCACAAAAACTCGAGTATCTACTACCACAATATCGGAACTTTTCTTTCTCATTGAAAGAGAAAGAGTTGAATGTAGGTAGAACCTTCGGAAAATTGCCTTATCCGACTCGCAATGTTCAAACACTTTGTGAAGCTCTGTTAGCTGATGGTCTTGCTAAAGCATTTCCTAGCAATATGATGGTAGTTACGGAACGTGAGCAAAAAGAAAGCTTATTGCATCAAGCATCATGGCACCACACAAGTGATGATTTTGGTGAACATGCCACAGTTAGAGGGAGTAGCTTTGTAACTGATTTAGAGAAATACAATCTTGCATTTAGATATGAGTTTACAGCACCTTTTATAGAATATTGCAACCGTTGCTATGGTGTTAAGAATGTTTTTAATTGGATGCATTATACAATCCCACAGTGTTATATGCATGTCAGTGATTATTATAATCCACCACATAACCTCACACTGGAGAATCGAGACAACCCCCCCGAAGGGCCTAGTTCATACAGGGGTCATATGGGAGGGATTGAAGGACTGCAACAAAAACTCTGGACAAGTATTTCATGTGCTCAAATTTCTTTAGTTGAAATTAAGACTGGTTTTAAGTTACGCTCAGCTGTGATGGGTGACAATCAGTGCATTACTGTTTTATCAGTCTTCCCCTTAGAGACTGACGCAGACGAGCAGGAACAGAGCGCCGAAGACAATGCAGCGAGGGTGGCCGCCAGCCTAGCAAAAGTTACAAGTGCCTGTGGAATCTTTTTAAAACCTGATGAAACATTTGTACATTCAGGTTTTATCTATTTTGGAAAAAAACAATATTTGAATGGGGTCCAATTGCCTCAGTCCCTTAAAACGGCTACAAGAATGGCACCATTGTCTGATGCAATTTTTGATGATCTTCAAGGGACCCTGGCTAGTATAGGCACTGCTTTTGAGCGATCCATCTCTGAGACACGACATATCTTTCCTTGCAGGATAACCGCAGCTTTCCATACGTTTTTTTCGGTGAGAATCTTGCAATATCATCATCTCGGGTTCAATAAAGGTTTTGACCTTGGACAGTTAACACTCGGCAAACCTCTGGATTTCGGAACAATATCATTGGCACTAGCGGTACCGCAGGTGCTTGGAGGGTTATCCTTCTTGAATCCTGAGAAATGTTTCTACCGGAATCTAGGAGATCCAGTTACCTCAGGCTTATTCCAGTTAAAAACTTATCTCCGAATGATTGAGATGGATGATTTATTCTTACCTTTAATTGCGAAGAACCCTGGGAACTGCACTGCCATTGACTTTGTGCTAAATCCTAGCGGATTAAATGTCCCTGGGTCGCAAGACTTAACTTCATTTCTGCGCCAGATTGTACGCAGGACCATCACCCTAAGTGCGAAAAACAAACTTATTAATACCTTATTTCATGCGTCAGCTGACTTCGAAGACGAAATGGTTTGTAAATGGCTATTATCATCAACTCCTGTTATGAGTCGTTTTGCGGCCGATATCTTTTCACGCACGCCGAGCGGGAAGCGATTGCAAATTCTAGGATACCTGGAAGGAACACGCACATTATTAGCCTCTAAGATCATCAACAATAATACAGAGACACCGGTTTTGGACAGACTGAGGAAAATAACATTGCAAAGGTGGAGCCTATGGTTTAGTTATCTTGATCATTGTGATAATATCCTGGCGGAGGCTTTAACCCAAATAACTTGCACAGTTGATTTAGCACAGATTCTGAGGGAATATTCATGGGCTCATATTTTAGAGGGAAGACCTCTTATTGGAGCCACACTCCCATGTATGATTGAGCAATTCAAAGTGTTTTGGCTGAAACCCTACGAACAATGTCCGCAGTGTTCAAATGCAAAGCAACCAGGTGGGAAACCATTCGTGTCAGTGGCAGTCAAGAAACATATTGTTAGTGCATGGCCGAACGCATCCCGAATAAGCTGGACTATCGGGGATGGAATCCCATACATTGGATCAAGGACAGAAGATAAGATAGGACAACCTGCTATTAAACCAAAATGTCCTTCCGCAGCCTTAAGAGAGGCCATTGAATTGGCGTCCCGTTTAACATGGGTAACTCAAGGCAGTTCGAACAGTGACTTGCTAATAAAACCATTTTTGGAAGCACGAGTAAATTTAAGTGTTCAAGAAATACTTCAAATGACCCCTTCACATTACTCAGGAAATATTGTTCACAGGTACAACGATCAATACAGTCCTCATTCTTTCATGGCCAATCGTATGAGTAATTCAGCAACGCGATTGATTGTTTCTACAAACACTTTAGGTGAGTTTTCAGGAGGTGGCCAGTCTGCACGCGACAGCAATATTATTTTCCAGAATGTTATAAATTATGCAGTTGCACTGTTCGATATTAAATTTAGAAACACTGAGGCTACAGATATCCAATATAATCGTGCTCACCTTCATCTAACTAAGTGTTGCACCCGGGAAGTACCAGCTCAGTATTTAACATACACATCTACATTGGATTTAGATTTAACAAGATACCGAGAAAACGAATTGATTTATGACAGTAATCCTCTAAAAGGAGGACTCAATTGCAATATCTCATTCGATAATCCATTTTTCCAAGGTAAACGGCTGAACATTATAGAAGATGATCTTATTCGACTGCCTCACTTATCTGGATGGGAGCTAGCCAAGACCATCATGCAATCAATTATTTCAGATAGCAACAATTCATCTACAGACCCAATTAGCAGTGGAGAAACAAGATCATTCACTACCCATTTCTTAACTTATCCCAAGATAGGACTTCTGTACAGTTTTGGGGCCTTTGTAAGTTATTATCTTGGCAATACAATTCTTCGGACTAAGAAATTAACACTTGACAATTTTTTATATTACTTAACTACTCAAATTCATAATCTACCACATCGCTCATTGCGAATACTTAAGCCAACATTCAAACATGCAAGCGTTATGTCACGGTTAATGAGTATTGATCCTCATTTTTCTATTTACATAGGCGGTGCTGCAGGTGACAGAGGACTCTCAGATGCGGCCAGGTTATTTTTGAGAACGTCCATTTCATCTTTTCTTACATTTGTAAAAGAATGGATAATTAATCGCGGAACAATTGTCCCTTTATGGATAGTATATCCGCTAGAGGGTCAAAACCCAACACCTGTGAATAATTTTCTCTATCAGATCGTAGAACTGCTGGTGCATGATTCATCAAGACAACAGGCTTTTAAAACTACCATAAGTGATCATGTACATCCTCACGACAATCTTGTTTACACATGTAAGAGTACAGCCAGCAATTTCTTCCATGCATCATTGGCGTACTGGAGGAGCAGACACAGAAACAGCAACCGAAAATACTTGGCAAGAGACTCTTCAACTGGATCAAGCACAAACAACAGTGATGGTCATATTGAGAGAAGTCAAGAACAAACCACCAGAGATCCACATGATGGCACTGAACGGAATCTAGTCCTACAAATGAGCCATGAAATAAAAAGAACGACAATTCCACAAGAAAACACGCACCAGGGTCCGTCGTTCCAGTCCTTTCTAAGTGACTCTGCTTGTGGTACAGCAAATCCAAAACTAAATTTCGATCGATCGAGACACAATGTGAAATTTCAGGATCATAACTCGGCATCCAAGAGGGAAGGTCATCAAATAATCTCACACCGTCTAGTCCTACCTTTCTTTACATTATCTCAAGGGACACGCCAATTAACGTCATCCAATGAGTCACAAACCCAAGACGAGATATCAAAGTACTTACGGCAATTGAGATCCGTCATTGATACCACAGTTTATTGTAGATTTACCGGTATAGTCTCGTCCATGCATTACAAACTTGATGAGGTCCTTTGGGAAATAGAGAGTTTCAAGTCGGCTGTGACGCTAGCAGAGGGAGAAGGTGCTGGTGCCTTACTATTGATTCAGAAATACCAAGTTAAGACCTTATTTTTCAACACGCTAGCTACTGAGTCCAGTATAGAGTCAGAAATAGTATCAGGAATGACTACTCCTAGGATGCTTCTACCTGTTATGTCAAAATTCCATAATGACCAAATTGAGATTATTCTTAACAACTCAGCAAGCCAAATAACAGACATAACAAATCCTACTTGGTTTAAAGACCAAAGAGCAAGGCTACCTAAGCAAGTCGAGGTTATAACCATGGATGCAGAGACAACAGAGAATATAAACAGATCGAAATTGTACGAAGCTGTATATAAATTGATCTTACACCATATTGATCCTAGCGTATTGAAAGCAGTGGTCCTTAAAGTCTTTCTAAGTGATACTGAGGGTATGTTATGGCTAAATGATAATTTAGCCCCGTTTTTTGCCACTGGTTATTTAATTAAGCCAATAACGTCAAGTGCTAGATCTAGTGAGTGGTATCTTTGTCTGACGAACTTCTTATCAACTACACGTAAGATGCCACACCAAAACCATCTCAGTTGTAAACAGGTAATACTTACGGCATTGCAACTGCAAATTCAACGAAGCCCATACTGGCTAAGTCATTTAACTCAGTATGCTGACTGTGAGTTACATTTAAGTTATATCCGCCTTGGTTTTCCATCATTAGAGAAAGTACTATACCACAGGTATAACCTCGTCGATTCAAAAAGAGGTCCACTAGTCTCTATCACTCAGCACTTAGCACATCTTAGAGCAGAGATTCGAGAATTAACTAATGATTATAATCAACAGCGACAAAGTCGGACTCAAACATATCACTTTATTCGTACTGCAAAAGGACGAATCACAAAACTAGTCAATGATTATTTAAAATTCTTTCTTATTGTGCAAGCATTAAAACATAATGGGACATGGCAAGCTGAGTTTAAGAAATTACCAGAGTTGATTAGTGTGTGCAATAGGTTCTACCATATTAGAGATTGCAATTGTGAAGAACGTTTCTTAGTTCAAACCTTATATTTACATAGAATGCAGGATTCTGAAGTTAAGCTTATCGAAAGGCTGACAGGGCTTCTGAGTTTATTTCCGGATGGTCTCTACAGGTTTGATTGAATTACCGTGCATAGTATCCTGATACTTGCAAAGGTTGGTTATTAACATACAGATTATAAAAAACTCATAAATTGCTCTCATACATCATATTGATCTAATCTCAATAAACAACTATTTAAATAACGAAAGGAGTCCCTATATTATATACTATATTTAGCCTCTCTCCCTGCGTGATAATCAAAAAATTCACAATGCAGCATGTGTGACATATTACTGCCGCAATGAATTTAACGCAACATAATAAACTCTGCACTCTTTATAATTAAGCTTTAACGAAAGGTCTGGGCTCATATTGTTATTGATATAATAATGTTGTATCAATATCCTGTCAGATGGAATAGTGTTTTGGTTGATAACACAACTTCTTAAAACAAAATTGATCTTTAAGATTAAGTTTTTTATAATTATCATTACTTTAATTTGTCGTTTTAAAAACGGTGATAGCCTTAATCTTTGTGTAAAATAAGAGATTAGGTGTAATAACCTTAACATTTTTGTCTAGTAAGCTACTATTTCATACAGAATGATAAAATTAAAAGAAAAGGCAGGACTGTAAAATCAGAAATACCTTCTTTACAATATAGCAGACTAGATAATAATCTTCGTGTTAATGATAATTAAGACATTGACCACGCTCATCAGAAGGCTCGCCAGAATAAACGTTGCAAAAAGGATTCCTGGAAAAATGGTCGCACACAAAAATTTAAAAATAAATCTATTTCTTCTTTTTTGTGTGTCCA";

	int count = 0;
	while(gene[count]!=0){
		count++;
	}

	int ans = 0;
	for(int i = 0;i<count - 5; i++){
		if(gene[i] == 'A' && gene[i+1] == 'G' && gene[i+2] =='C' && gene[i+3] =='T' && gene[i+4] == 'T' && gene[i+5] =='A'){
			ans++;
			i+=5;
			printf("AAA");
		}
		else{
			printf("%c",gene[i]);
		}
	}
	printf("%c%c%c%c%c\n",gene[count-5],gene[count-4],gene[count-3],gene[count-2],gene[count-1]);

	return 0;
}
