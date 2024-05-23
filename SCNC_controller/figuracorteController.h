#pragma once

namespace SCNC_controller {

	using namespace SCNC_model;
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class figuracorteController {
	public:
		figuracorteController();
		List<figuraCorte^>^ buscarfgxAutor(String^ autor);
		List<figuraCorte^>^ buscarfgxID(int buscar_ID);
		List<figuraCorte^>^ buscarfgxAutorxID(String^ n_autor, int n_ID);
		figuraCorte^ buscarfgxID_unitario(int buscar_ID);

	};

}