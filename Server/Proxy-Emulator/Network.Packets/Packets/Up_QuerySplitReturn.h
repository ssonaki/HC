#include "pb\up.pb.h"
#include <iostream>

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Network
{
	namespace Packets
	{
		// _query_split_return, 56
		public ref struct Up_QuerySplitReturn : Up_UpMsg
		{
			Up_QuerySplitReturn()
			{
				MessageType = 56;
			}

			virtual String^ ToString() override
			{
				return "";
			}
		};
	}
}