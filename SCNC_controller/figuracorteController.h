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
		List<figuraCorte^>^ buscarfgALL();
		figuraCorte^ buscarfgxID_unitario(int buscar_ID);
		void actualizarFiguraCorte(int e_ID, String^ e_Diseño, String^ e_Autor, String^ e_material, String^ e_Fecha);
		void escribirArchivo(List<figuraCorte^>^ lista_escribir);
		void eliminarFC(int ID);

	};

}