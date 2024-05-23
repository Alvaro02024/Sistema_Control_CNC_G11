#pragma once

namespace SCNC_controller {
	using namespace System;
	using namespace SCNC_model;
	using namespace System::Collections::Generic;

	public ref class posicionController {
	public:
		posicionController();
		List<posicion^>^ buscarAllPosiciones();
	};
}