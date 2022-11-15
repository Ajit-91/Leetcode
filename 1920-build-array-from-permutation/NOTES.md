
            Trick to store two numsbers at one location
            => transform the number such that both numbers can be derived from it
            
            eg store a = 3 and b = 4 in just one var or location
            take integer n such that n > max(a, b) i.e n > both a and b
            
            let n = 6
            
            now to store both and b we will use var a only
            
            so, transform a as follows : 
            
            Ta = transformed a
            Oa = original a

            a = a + b*n
            Ta = Oa + Ob*n
            here , a = 3 + 4*6 = 27
            
        Main formula : 
        -------------------------------
            now, original a = transformed a % n
            and, b = a / n
        --------------------------------  
        
        here original a = 27 % 6 = 3
        and, b = 27 / 6 = 4
            
    
        
