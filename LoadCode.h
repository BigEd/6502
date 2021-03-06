/*-----------------------------------------------------------------------------
	6502 Macroassembler and Simulator

Copyright (C) 1995-2003 Michal Kowalski

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
-----------------------------------------------------------------------------*/

// LoadCode.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLoadCode dialog

class CLoadCode : public CFileDialog
{
  CString m_strTitle;
  int m_nPos;
  static int m_nInitPos;

  DECLARE_DYNAMIC(CLoadCode)
    
public:
  CLoadCode(LPCTSTR lpszFileName = NULL,
    LPCTSTR lpszFilter = NULL,
    CWnd* pParentWnd = NULL);

  void LoadCode();

protected:
  //{{AFX_MSG(CLoadCode)
  virtual BOOL OnInitDialog();
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()

//  virtual void OnTypeChange();
};
