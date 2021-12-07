#pragma once
class CBoard
{
public:
	CBoard();
	~CBoard();
private :
	int m_Row;
	int m_Col;
	std::vector<std::vector<class CCell*>> m_Cells;
	std::vector<std::vector<class CBlock*>> m_Blocks;

public :
	int GetRow() const
	{
		return m_Row;
	}
	int GetCol() const
	{
		return m_Col;
	}
	class CCell* GetCell(const int &Row, const int &Col)
	{
		return m_Cells[Row][Col];
	}
	class CBlock* GetBlock(const int &Row, const int &Col)
	{
		return m_Blocks[Row][Col];
	}
};

