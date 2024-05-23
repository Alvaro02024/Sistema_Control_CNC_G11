#pragma once

namespace SCNC_controller {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SCNC_model;

	public ref class lineacorteController {
	public:
		lineacorteController();
		List<lineaCorte^>^ buscarAllLineasC();
		lineaCorte^ determinarLinea(posicion^ objPosicion);
	};
}