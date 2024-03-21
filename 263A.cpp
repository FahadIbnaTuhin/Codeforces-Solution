#include <iostream>
#include <cmath>

int main() {
    int x {};
    for(int i = 1; i < 6; ++i) {
        for(int j = 1; j < 6; ++j) {
            std::cin >> x;
            if (x == 1) {
                std::cout << (abs(3 - i) + abs(3 - j)) << std::endl;
            }
        }
    }
    return 0;
}


// My First Solution
// #include <iostream>

// const int row = 5, column = 5;

// int main() {
//     int inp[row][column];
//     int cr, cc; // cr -> current row, cc -> current column
    
//     for(int i = 0; i < row; ++i) {
//         for(int j = 0; j < column; ++j) {
//             std::cin >> inp[i][j];
//             if (inp[i][j] == 1) {
//                 cr = i;
//                 cc = j;
//             }
//         }
//     }

//     // std::cout << cr << " " << cc << std::endl; // 1 4 (as it starts from 0)

//     int i = 0, j = 0, count = 0;
//     // while (inp[2][2] != 1) {
//     // For row
//     while (cr != 2) {
//         if (cr < 2) { 
//             inp[cr][cc] = 0;
//             inp[cr + 1][cc] = 1;
//             count += 1;
//             cr += 1;
//         } else { 
//             inp[cr][cc] = 0;
//             inp[cr - 1][cc] = 1;
//             count += 1;
//             cr -= 1;
//         }
//     }
//     // std::cout << cr << "  " << cc << std::endl;
//     // for(int i = 0; i < row; ++i) {
//     //     for(int j = 0; j < column; ++j) {
//     //         std::cout << inp[i][j] << " ";
//     //     }
//     //     std::cout << std::endl;
//     // }
    
        
//     while (cc != 2) {
//         if (cc < 2) { 
//             inp[cr][cc] = 0;
//             inp[cr][cc + 1] = 1;
//             count += 1;
//             cc += 1;
//         } else { 
//             inp[cr][cc] = 0;
//             inp[cr][cc - 1] = 1;
//             count += 1;
//             cc -= 1;
//         }
//     }
//     // std::cout << cr << "  " << cc << std::endl;
//     // for(int i = 0; i < row; ++i) {
//     //     for(int j = 0; j < column; ++j) {
//     //         std::cout << inp[i][j] << " ";
//     //     }
//     //     std::cout << std::endl;
//     // }

//     std::cout << count << std::endl;
//     return 0;
// }