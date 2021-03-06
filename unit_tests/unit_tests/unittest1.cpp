#include "stdafx.h"
#include "CppUnitTest.h"

#include "catch.hpp"
#include "visitor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("vip_big_classic")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " "; 
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement in big sizes: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res==true);
	};
	TEST_CASE("vip_big_triangle")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement in big sizes: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_big_color")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement in big sizes: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_big_stone")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement in big sizes: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};

	///////////////////

	TEST_CASE("vip_small_classic")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement in small size: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_small_triangle")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement in small size: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_small_color")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement in small size: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_small_stone")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement in small size: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res==true);
	};

	////////////////////

	TEST_CASE("vip_cl_classic")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res==true);
	};
	TEST_CASE("vip_cl_triangle")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_cl_color")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("vip_cl_stone")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Vip_client *Cl = new Vip_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement: 10 square meters" || s1 != "Vip-client ordered:") res = false;
		REQUIRE(res == true);
	};



	/////////////////////////////
	///////////////


	TEST_CASE("new_big_classic")
	{
		Big_sizes_department *D = new Big_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement in big sizes: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_big_triangle")
	{
		Big_sizes_department *D = new Big_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement in big sizes: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_big_color")
	{
		Big_sizes_department *D = new Big_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement in big sizes: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_big_stone")
	{
		Big_sizes_department *D = new Big_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement in big sizes: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};

	///////////////////

	TEST_CASE("new_small_classic")
	{
		Small_sizes_department *D = new Small_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement in small size: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res==true);
	};
	TEST_CASE("new_small_triangle")
	{
		Small_sizes_department *D = new Small_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement in small size: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_small_color")
	{
		Small_sizes_department *D = new Small_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement in small size: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_small_stone")
	{
		Small_sizes_department *D = new Small_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement in small size: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};

	////////////////////

	TEST_CASE("new_cl_classic")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_cl_triangle")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_cl_color")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("new_cl_stone")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		New_client *Cl = new New_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement: 10 square meters" || s1 != "New client ordered:") res = false;
		REQUIRE(res == true);
	};



	/////////////////////////////
	///////////////


	TEST_CASE("rg_big_classic")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement in big sizes: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_big_triangle")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement in big sizes: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_big_color")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement in big sizes: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_big_stone")
	{
		Big_sizes_department *D = new Big_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement in big sizes: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};

	///////////////////

	TEST_CASE("rg_small_classic")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement in small size: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_small_triangle")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement in small size: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_small_color")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement in small size: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_small_stone")
	{
		Small_sizes_department *D = new Small_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement in small size: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};

	////////////////////

	TEST_CASE("rg_cl_classic")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 1, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Classic pavement: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_cl_triangle")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 2, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Triangle pavement: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_cl_color")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 3, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Colored pavement: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("rg_cl_stone")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		Registered_client *Cl = new Registered_client();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->accept(*Cl, 4, 10);
		string s1, s2, s3;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s3; s1 += s3; s1 += " "; f >> s3; s1 += s3;
		f >> s2; s2 += " ";  f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3 + " ";
		f >> s3; s2 += s3;
		f.close();
		bool res = true;
		if (s2 != "Stone-imitated pavement: 10 square meters" || s1 != "Registered client ordered:") res = false;
		REQUIRE(res == true);
	};

	/////////////////////////////
	////////////////////////////////
	////////////////////////////

	TEST_CASE("BIG")
	{
		Big_sizes_department *D = new Big_sizes_department();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->PrintDepartment();
		string s1, s2;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s2; s1 += s2; s1 += " "; f >> s2; s1 += s2;
		s1 += " "; f >> s2; s1 += s2;
		s1 += " "; f >> s2; s1 += s2;
		REQUIRE(s1 == "orders for big sizes department:");
	};

	TEST_CASE("classic")
	{
		Classic_sizes_department *D = new Classic_sizes_department();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->PrintDepartment();
		string s1, s2;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s2; s1 += s2; s1 += " "; f >> s2; s1 += s2;
		s1 += " "; f >> s2; s1 += s2;
		s1 += " "; f >> s2; s1 += s2;
		REQUIRE(s1 == "orders for classic sizes department:");
	};

	TEST_CASE("SMALL")
	{
		Small_sizes_department *D = new Small_sizes_department();
		fstream pre; pre.open("data.txt", ios_base::out); pre.clear(); pre.close();
		D->PrintDepartment();
		string s1, s2;
		fstream f; f.open("data.txt");
		f >> s1; s1 += " "; f >> s2; s1 += s2; s1 += " "; f >> s2; s1 += s2;
		s1 += " "; f >> s2; s1 += s2;
		s1 += " "; f >> s2; s1 += s2;
		REQUIRE(s1 == "orders for small sizes department:");
	};
}