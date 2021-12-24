// 2011. Final Value of Variable After Performing Operations

int finalValueAfterOperations(vector<string>& operations) 
    { int x=0;
        
        for (const auto& kp : operations)
        {
            if (kp == "X++" or kp == "++X")
                x++;
            else if (kp == "X--" or kp == "--X")
                x--;
        }
        
        return x;
    }
