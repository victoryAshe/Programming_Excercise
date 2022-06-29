using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//https://im-first-rate.tistory.com/44
//https://docs.microsoft.com/ko-kr/dotnet/csharp/language-reference/operators/null-coalescing-operator

namespace CshrapExcercise
{
    class NullOperators
    {
        static void Null() // Main
        {
            /*
            int? a = null; // 자료형 뒤에 ? 사용: null값을 허용
            int c;
            
            // ??
            c = a ?? 0;

            // ??=
            a ??= 0; // a = a ?? 0; 을 축약하여 사용

            Console.WriteLine(a+", " +c);

            // 사용하려는 자료구조가 존재하지 않으면: 새로 만들어 할당 可
            List<string> names = null;
            names ??= new List<string>();
            names.Add("song");
            Console.WriteLine(names[0]);

            //?. , ?[]
            string currName;
            int? count;

            count = names?.Count;       // Names가 null이면 null return
            count = names?.Count ?? 0;  // Naems가 null이면 0    return
            Console.WriteLine(count);

            currName = names?[0];
            Console.WriteLine(currName);

            //List<int> scores = new List<int>();
            List<int> scores = null;
            count = scores?.Count ?? 10;
            Console.WriteLine(count);
            */
        }
    }
}
