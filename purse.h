#pragma once
class Purse
{
public:
	Purse();
	Purse(const int SOLDE);

	void connect();
	void credit();
	void debit();
	int rand();

private:
	int m_solde;
	int m_pin;
	int m_essaie;
	int m_essaie_max;
	bool m_blocked;

	void auth();
};

