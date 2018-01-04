// uiDlg.cpp : implementation file
//
#include <iostream>
#include "stdafx.h"
#include "ui.h"
#include "uiDlg.h"
#include "stdio.h" 
#include <queue> 
using namespace std; 

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
	 
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUiDlg dialog
  

CUiDlg::CUiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUiDlg::IDD, pParent)
{   
	
	//{{AFX_DATA_INIT(CUiDlg)
	m_start2 = 3;
	m_start3 = 2;
	m_start4 = 0;
	m_start5 = 6;
	m_start6 = 5;
	m_start7 = 7;
	m_start9 = 4;
	m_x = 0;
	m_end1 = 0;
	m_end2 = 1;
	m_end3 = 2;
	m_end4 = 3;
	m_end5 = 4;
	m_end6 = 5;
	m_end7 = 6;
	m_end8 = 7;
	m_end9 = 8;
	m_start1 = 1;
	m_static14 = _T("");
	m_time = _T("");
	m_start8 = 8;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CUiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CUiDlg)
	DDX_Control(pDX, IDC_STATIC7, m_static7);
	DDX_Control(pDX, IDC_STATIC6, m_static6);
	DDX_Control(pDX, IDC_STATIC5, m_static5);
	DDX_Control(pDX, IDC_STATIC4, m_static4);
	DDX_Control(pDX, IDC_STATIC3, m_static3);
	DDX_Control(pDX, IDC_STATIC2, m_static2);
	DDX_Control(pDX, IDC_STATIC1, m_static1);
	DDX_Text(pDX, IDC_EDIT2, m_start2);
	DDX_Text(pDX, IDC_EDIT3, m_start3);
	DDX_Text(pDX, IDC_EDIT4, m_start4);
	DDX_Text(pDX, IDC_EDIT5, m_start5);
	DDX_Text(pDX, IDC_EDIT6, m_start6);
	DDX_Text(pDX, IDC_EDIT7, m_start7);
	DDX_Text(pDX, IDC_EDIT9, m_start9);
	DDX_Text(pDX, IDC_EDIT10, m_x);
	DDX_Text(pDX, IDC_EDIT11, m_end1);
	DDX_Text(pDX, IDC_EDIT12, m_end2);
	DDX_Text(pDX, IDC_EDIT13, m_end3);
	DDX_Text(pDX, IDC_EDIT14, m_end4);
	DDX_Text(pDX, IDC_EDIT15, m_end5);
	DDX_Text(pDX, IDC_EDIT16, m_end6);
	DDX_Text(pDX, IDC_EDIT17, m_end7);
	DDX_Text(pDX, IDC_EDIT18, m_end8);
	DDX_Text(pDX, IDC_EDIT19, m_end9);
	DDX_Text(pDX, IDC_EDIT1, m_start1);
	DDX_Text(pDX, IDC_STATIC14, m_static14);
	DDX_Text(pDX, IDC_EDIT20, m_time);
	DDX_Text(pDX, IDC_EDIT8, m_start8);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CUiDlg, CDialog)
	//{{AFX_MSG_MAP(CUiDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUiDlg message handlers

//设置颜色
HBRUSH CUiDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	// TODO: Change any attributes of the DC here
	if (nCtlColor == CTLCOLOR_STATIC)
	{
		pDC->SetTextColor(RGB(248,248,255));
		pDC->SetBkColor(RGB(105,105,105));
	}	
	if (pWnd->GetDlgCtrlID() ==IDC_STATIC12||pWnd->GetDlgCtrlID() ==IDC_STATIC9||pWnd->GetDlgCtrlID() ==IDC_STATIC13||pWnd->GetDlgCtrlID() ==IDC_STATIC11)
	{
		pDC->SetBkColor(RGB(255,245,238));
	}
	if (nCtlColor ==CTLCOLOR_EDIT)
	{
	//	pDC->SetBkMode(TRANSPARENT);
		pDC->SetTextColor(RGB(0,0,0));	    
	}
	//	IDD_UI_DIALOG
	// TODO: Return a different brush if the default is not desired
	return hbr;
}

//设置字体
CFont m_Font;//	放在函数里面不能改变字体大小
CFont m_Font2;
BOOL CUiDlg::OnInitDialog()   
{
	CDialog::OnInitDialog();
	m_Font.CreateFont(30, // nHeight 
        0, // nWidth 
        0, // nEscapement 
        0, // nOrientation 
        FW_BOLD, // nWeight 
        FALSE, // bItalic 
        FALSE, // bUnderline 
        0, // cStrikeOut 
        ANSI_CHARSET, // nCharSet 
        OUT_DEFAULT_PRECIS, // nOutPrecision 
        CLIP_DEFAULT_PRECIS, // nClipPrecision 
        DEFAULT_QUALITY, // nQuality 
        DEFAULT_PITCH | FF_SWISS, // nPitchAndFamily 
        _T("Consolas")); // lpszFac 
    m_static1.SetFont(&m_Font,false);  
    m_static1.SetWindowText("Eight - Figure Puzzle problem"); 
	m_Font2.CreatePointFont(100, "Arial BOLD",NULL);
    m_static2.SetFont(&m_Font2,false); 
	m_static3.SetFont(&m_Font2,false);
	m_static4.SetFont(&m_Font2,false);
	m_static5.SetFont(&m_Font2,false); 
	m_static6.SetFont(&m_Font2,false);
	m_static7.SetFont(&m_Font2,false);
	m_static7.SetFont(&m_Font2,false);

	// Add "About..." menu item to system menu.
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon	
	// TODO: Add extra initialization here
	return TRUE;  // return TRUE  unless you set the focus to a control
}
void CUiDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}
// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.
void CUiDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
	//	CDialog::OnPaint();
		CRect   rect; 
		CPaintDC   dc(this); 
		GetClientRect(rect); 
		dc.FillSolidRect(rect,RGB(105,105,105));   //设置背景颜色
	}
}
// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CUiDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/*Astar算法的函数*/
struct Node
{
	int number[9];//节点的数值
	int Parent;//节点的父节点
	int h;//节点到达目的的困难程度
	int g;//节点的实际路径
	int f;//节点的总路径
};

//获取空格的位置
int zero(int* x)
{
	for (int i = 0; i < 9; i++)
	{
		if (x[i] == 0)
			return i;
	}
	return 10;
}

//复制节点
void copynode(Node& node1, Node& node2)
{
	for (int i = 0; i < 9; i++)
	{
		node2.number[i] =node1.number[i];
	}
	node2.f = node1.f;
	node2.g = node1.g;
	node2.h = node1.h;
	node2.Parent = node1.Parent;
}
//交换数组
void swap(int* x, int a, int b)
{
	int temp = x[a];
	x[a] = x[b];
	x[b] = temp;
}
//按指定方向移动
bool move(Node& start, Node& end, int dir)
{
	copynode(start, end);
	int p0 = zero(start.number);

	switch (dir)
	{
	case 0://左
		if (p0 ==10|| p0 % 3 == 2)
			return false;
		else
			swap(end.number, p0, p0 + 1);
		return true;
	case 1://右
		if (p0 ==10|| p0 % 3 == 0)
			return false;
		else
			swap(end.number, p0, p0 - 1);
		return true;
	case 2://上
		if (p0 ==10|| p0 > 5)
			return false;
		else
			swap(end.number, p0, p0 + 3);
		return true;
	case 3://下
		if (p0 ==10|| p0 < 3)
			return false;
		else
			swap(end.number, p0, p0 - 3);
		return true;
	default:
		return false;
	}
	return false;
}
//计算节点f值
void count(Node& node,int* end)
{
	node.h = 0;
	for (int i = 0; i < 9; i++)    //不在相应位置节点的个数
	{
		if (node.number[i] != end[i])
			node.h++;
	}
	node.f = node.h + node.g;
}
//排序open表
void sortopen(Node* open, int opennumber)
{
	Node temp;
	for (int i = 0; i < opennumber; i++)
	{
		for (int j = 0; j < opennumber - 1 - i; j++)
		{
			if (open[j].f > open[j + 1].f)
			{
				copynode(open[j], temp);
				copynode(open[j + 1],open[j]);
				copynode(temp, open[j + 1]);
			}
		}
	}
}
//判断两个节点是否相等
bool isequal(Node a, Node b)
{
	for (int i = 0; i < 9; i++)
	{
		if (a.number[i] != b.number[i])
			return false;
	}
	return true;
}
//判断节点是否在状态集中
int isinset(Node node, Node* node2, int index)
{
	for (int i = 0; i < index; i++)
	{
		if (isequal(node, node2[i]))
			return i;
	}
	return 1001;
}



static Node node2[50];  //存储A*的结果数组
static int a1;
static int end[9];	
static int start[9];  
static Node m;
static Node n;
static Node OPEN[1000];   
static Node CLOSE[1000];
static int opennumber=0; //open表与close表当前的数量
static int closenumber=0;
static int index;
static int j;   //A*的步数
static int boo=0;  //判断是否已经开始


//开始按钮
void CUiDlg::OnOK()
{
	if(boo==1)   //已经点击过开始按钮
		MessageBox("已经开始!");
	else
	{
		boo=1;
		UpdateData();
		start[0]=m_start1;  //获取初始与目标数组
		start[1]=m_start2;
		start[2]=m_start3;
		start[3]=m_start4;
		start[4]=m_start5;
		start[5]=m_start6;
		start[6]=m_start7;
		start[7]=m_start8;
		start[8]=m_start9;
		end[0]=m_end1;
		end[1]=m_end2;
		end[2]=m_end3;
		end[3]=m_end4;
		end[4]=m_end5;
		end[5]=m_end6;
		end[6]=m_end7;
		end[7]=m_end8;
		end[8]=m_end9;
		Node nodenull;
		j=0;	
		int num1=0;
		int num2=0;
		for(int i=0;i<9;i++)   //判断两个数组逆序数奇偶性是否相同
		{
			int tem=start[i];
			if(tem!=0)
			{
				for(int s=0;s<i;s++)
				{
					if(start[s]>tem)
						num1++;
				}
			}
		}
		num1=num1%2;
		for(i=0;i<9;i++)
		{
			int tem=end[i];
			if(tem!=0)
			{
				for(int s=0;s<i;s++)
				{
					if(end[s]>tem)
						num2++;
				}
			}
		}
		num2=num2%2;
		int s1=0;
		int s2=0;
		for (i = 0; i < 9; i++)   //判断两个数组0的个数是否只有1个
		{
			if (start[i] == 0)
				s1++;
		}
		for (i = 0; i < 9; i++)
		{
			if (end[i] == 0)
				s2++;
		}
		if(s1!=1||s2!=1)
			MessageBox("输入数据不合格!");
		else if(num1!=num2)
			MessageBox("此八数码无解!");
		else
		{
			for (i = 0; i < 9; i++)
			{
				nodenull.number[i] =0;  //空节点
			}
			Node temp;
			for (i = 0; i<9; i++)
			{
				temp.number[i] = start[i];
			}
			temp.g = 0;
			temp.Parent =999;
			count(temp,end);
			copynode(temp, OPEN[opennumber++]);
			int q=0;
			while (opennumber>0)
			{
				sortopen(OPEN, opennumber);   //排序
				copynode(OPEN[0], n);
				copynode(OPEN[opennumber- 1], OPEN[0]);//覆盖原来最小的，保存最大的
				opennumber--;
				if(closenumber>998)
				{
					MessageBox("生成的扩展节点超过了范围!");
					return;
				}
				copynode(n, CLOSE[closenumber++]);  //n加到close表
				Node endnode;
				for (int i = 0; i < 9; i++)
				{
					endnode.number[i] = end[i];
				}
				if(isequal(endnode, n))    ///有解
				{
					index = closenumber - 1;
					while (index != 999)  //数组的最大
					{
						if(j==50)
						{
							MessageBox("移动步数超过50!");
							return;
						}
						node2[j]=CLOSE[index];        //把解的数值存进数组node2
						j+=1;	
						index = CLOSE[index].Parent;
					}
					return;
				}
				else
				{
					for(i=0;i<4;i++) //左右上下
					{
						if (move(n, m, i) && !isequal(m, CLOSE[n.Parent]))
						{
							m.g = n.g + 1;
							m.Parent = closenumber- 1;
							count(m,end);
							if (isinset(m, OPEN, opennumber) ==1001 && isinset(m, CLOSE, closenumber) ==1001)
								copynode(m, OPEN[opennumber++]);   //都不在
							else if (isinset(m, OPEN, opennumber) == 1001)//close
							{
								int closenumber2 = isinset(m, CLOSE,closenumber);
								if (m.f < CLOSE[closenumber2].f)
								{
									copynode(m, OPEN[opennumber++]);
									copynode(CLOSE[closenumber2],nodenull);
								}
							}
							else//open
							{
								int closenumber2 = isinset(m, OPEN,opennumber);
								if (m.f < OPEN[closenumber2].f)
								{
									OPEN[closenumber2].g = m.g;
									OPEN[closenumber2].Parent = closenumber - 1;
									count(OPEN[closenumber2],end);
								}
							}
						}
					}
				}
			}
		}
    }
 }	
//下一步按钮
void CUiDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	j-=1;
	if(j>=0)
	{
		m_start1=node2[j].number[0];
		m_start2=node2[j].number[1];
		m_start3=node2[j].number[2];
		m_start4=node2[j].number[3];
		m_start5=node2[j].number[4];
		m_start6=node2[j].number[5];
		m_start7=node2[j].number[6];
		m_start8=node2[j].number[7];
		m_start9=node2[j].number[8];
		m_end1=end[0];
		m_end2=end[1];
		m_end3=end[2];
		m_end4=end[3];
		m_end5=end[4];
		m_end6=end[5];
		m_end7=end[6];
		m_end8=end[7];
		m_end9=end[8];
		m_x=j;
		UpdateData(FALSE);
	}
	else
		MessageBox("已移动为结束状态!");
}




