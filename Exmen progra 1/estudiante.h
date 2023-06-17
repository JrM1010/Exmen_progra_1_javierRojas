#pragma once
ref class estudiante{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	estudiante(); //constructor
	DataTable^ getData(); //metodos
	void AbrirConexion();
	void CerrarConexion();
	void Insertar(String^, String^, String^, String^, String^, String^, String^);
	void Modificar(String^, String^, String^, String^, String^, String^, String^);
	void Eliminar(String^);
};

