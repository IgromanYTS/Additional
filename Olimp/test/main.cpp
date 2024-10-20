//
//  main.cpp
//  test
//
//  Created by Yura B on 20.10.2024.
//

//LAB_C
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//string is_divisible_array(int n, vector<int>& a) {
//    
//    sort(a.rbegin(), a.rend());
//    
//    
//    for (int i = 0; i < n - 2; ++i) {
//        if (a[i] % (a[i + 1] + a[i + 2]) != 0) {
//            return "No";
//        }
//    }
//    
//    return "Yes";
//}
//
//int main() {
//    int n;
//    cin >> n;
//    
//    vector<int> a(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    
//    
//    cout << is_divisible_array(n, a) << endl;
//
//    return 0;
//}


//LAB_L

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    
//    int uncovered = (2 * n) % 3;
//    
//    cout << uncovered << endl;
//
//    return 0;
//}

//LAB_I
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    
//    
//    int m = n - n / 2;
//    
//    
//    cout << m << endl;
//    
//    
//    for (int i = n / 2 + 1; i <= n; ++i) {
//        cout << i << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
