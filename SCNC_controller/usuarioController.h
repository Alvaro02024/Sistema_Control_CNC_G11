#pragma once

namespace SCNC_controller {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SCNC_model;

	public ref class usuarioController {
	public:
		usuarioController();
		int verificarUser(String^ User, String^ Cont);
	};
}
