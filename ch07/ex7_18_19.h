#pragma once

// ex7_18
// 1) upper triangular
//   1 2 3 4 5 6 7
// 1 1 0 0 0 0 0 0
// 2 0 0 0 0 0 0 0
// 3 1 1 1 0 0 0 0
// 4 0 0 0 0 0 0 0
// 5 0 1 1 1 0 0 0
// 6 1 1 0 1 0 1 0
// 7 1 0 1 1 1 1 1
// 2) lower triangular
//   1 2 3 4 5 6 7
// 1 1 0 1 0 0 1 1
// 2 0 0 1 0 1 1 0
// 3 0 0 1 0 1 0 1
// 4 0 0 0 0 1 1 1
// 5 0 0 0 0 0 0 1
// 6 0 0 0 0 0 1 1
// 7 0 0 0 0 0 0 1
// 3) lower triangular
//	 1 2 3 4 5 6 7
// 1 1 1 1 1 1 0 1
// 2 0 1 0 1 0 1 1
// 3 0 0 0 1 1 1 0
// 4 0 0 0 0 0 0 0
// 5 0 0 0 0 1 1 1
// 6 0 0 0 0 0 0 0
// 7 0 0 0 0 0 0 1

// ex7_19
// https://www.cise.ufl.edu/~sahni/dsaac/public/exer/c7/e19.htm