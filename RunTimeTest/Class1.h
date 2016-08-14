#pragma once

namespace RunTimeTest
{
    public ref class Class1 sealed
    {
		public:
			Class1();

			double LogCalc(double result) {
				return result + 2;
			}
    };
}
