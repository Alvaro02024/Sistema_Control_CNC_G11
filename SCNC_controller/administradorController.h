#pragma once

namespace SCNC_controller {

	using namespace SCNC_model;
	using namespace System;

	public ref class administradorController {
	public:
		administradorController();
		int verificarAdmin(String^ User, String^ Cont);
	};

	

}
