#include "pch.h"
#include "framework.h"
#include "Test.h"
#include "TestDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CTestDlg::CTestDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TEST_DIALOG, pParent)
{
}

void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, OnOK)
END_MESSAGE_MAP()



BOOL CTestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	return TRUE;
}

/*
1.아프가니스탄 표준시 Afghanistan Standard Time
2.알래스카 표준시 Alaskan Standard Time
3.알류샨 표준시 Aleutian Standard Time
4.알타이 표준시 Altai Standard Time
5.아랍 표준시  Arab Standard Time
6.아랍 표준시   Arabian Standard Time
7.아랍 표준시 Arabic Standard Time
8.아르헨티나 표준 시간 Argentina Standard Time
9.아스트라한 표준시 Astrakhan Standard Time
10.대서양 표준시 Atlantic Standard Time
11.오스트레일리아 중부 표준시 AUS Central Standard Time
12.오스트레일리아 중부 표준시 Aus Central W. Standard Time
13.오스트레일리아 동부 표준시 AUS Eastern Standard Time
14.아제르바이잔 표준시 Azerbaijan Standard Time
15.아조레스 표준시 Azores Standard Time
16.바이아 표준시 Bahia Standard Time
17.방글라데시 표준시 Bangladesh Standard Time
18.벨로루시 표준시 Belarus Standard Time
19.부건빌 표준시 Bougainville Standard Time
20.캐나다 중부 표준시 Canada Central Standard Time
21.카보베르데 표준 시간 Cape Verde Standard Time
22.코코서스 표준시 Caucasus Standard Time
23.중부 오스트레일리아 표준시 Cen. Australia Standard Time
24.중앙 아메리카 표준시 Central America Standard Time
25.중앙 아시아 표준시 Central Asia Standard Time
26.브라질 중부 표준시 Central Brazilian Standard Time
27.중앙 유럽 표준시  Central Europe Standard Time
28.중앙 유럽 표준시 Central European Standard Time
29.중앙 태평양 표준시 Central Pacific Standard Time
30.중부 표준시 Central Standard Time
31.중부 표준시(멕시코) Central Standard Time (Mexico)
32.채텀 섬 표준시 Chatham Islands Standard Time
33.중국 표준시 China Standard Time
34.쿠바 표준시 Cuba Standard Time
35.날짜 변경선 표준시 Dateline Standard Time
36.동아프리카 표준시 E. Africa Standard Time
37.동부 오스트레일리아 표준시 E. Australia Standard Time
38.동유럽 표준시 E. Europe Standard Time
39.동남부 아메리카 표준시 E. South America Standard Time
40.이스터 섬 표준시 Easter Island Standard Time
41.동부 표준시 Eastern Standard Time
42.동부 표준시(멕시코) Eastern Standard Time (Mexico)
43.이집트 표준시 Egypt Standard Time
44.러시아 TZ 4 표준시 Ekaterinburg Standard Time
45.피지 표준시 Fiji Standard Time
46.FLE 표준시 FLE Standard Time
47.그루지야 표준시 Georgian Standard Time
48.GMT 표준시 GMT Standard Time
49.그린란드 표준시 Greenland Standard Time
50.그리니치 표준시 Greenwich Standard Time
51.GTB 표준시 GTB Standard Time
52.아이티 표준시 Haiti Standard Time
53.하와이 표준시 Hawaiian Standard Time
54.인도 표준시 India Standard Time
55.이란 표준시 Iran Standard Time
56.예루살렘 표준시 Israel Standard Time
57.요르단 표준시 Jordan Standard Time
58.러시아 TZ 1 표준시 Kaliningrad Standard Time
59.캄차카 반도 표준시 Kamchatka Standard Time
60.대한민국 표준시 Korea Standard Time
61.리비아 표준시 Libya Standard Time
62.라인 제도 표준시 Line Islands Standard Time
63.로드하우 표준시 Lord Howe Standard Time
64.마가단 표준시 Magadan Standard Time
65.마가야네스 표준시 Magallanes Standard Time
66.마키저스 표준시 Marquesas Standard Time
67.모리셔스 표준 시간 Mauritius Standard Time
68.중부-대서양 표준시 Mid-Atlantic Standard Time
69.중동 표준시 Middle East Standard Time
70.몬테비디오 표준시 Montevideo Standard Time
71.모로코 표준 시간 Morocco Standard Time
72.산지 표준시 Mountain Standard Time
73.산지 표준시(멕시코) Mountain Standard Time (Mexico)
74.미얀마 표준시 Myanmar Standard Time
75.노보시비르스크 표준시 N. Central Asia Standard Time
76.나미비아 표준시 Namibia Standard Time
77.네팔 표준시 Nepal Standard Time
78.뉴질랜드 표준시 New Zealand Standard Time
79.뉴펀들랜드 표준시 Newfoundland Standard Time
80.노퍽 표준시 Norfolk Standard Time
81.러시아 TZ 7 표준시 North Asia East Standard Time
82.러시아 TZ 6 표준시 North Asia Standard Time
83.북한 표준시 North Korea Standard Time
84.옴스크 표준시 Omsk Standard Time
85.태평양 SA 표준시 Pacific SA Standard Time
86.태평양 표준시 Pacific Standard Time
87.태평양 표준시(멕시코) Pacific Standard Time (Mexico)
88.파키스탄 표준 시간 Pakistan Standard Time
89.파라과이 표준시 Paraguay Standard Time
90.키질로르다 표준시 Qyzylorda Standard Time
91.로망스 표준시 Romance Standard Time
92.러시아 TZ 10 표준시 Russia Time Zone 10
93.러시아 TZ 11 표준시 Russia Time Zone 11
94.러시아 TZ 3 표준시 Russia Time Zone 3
95.러시아 TZ 2 표준시 Russian Standard Time
96.SA 동부 표준시 SA Eastern Standard Time
97.SA 태평양 표준시 SA Pacific Standard Time
98.SA 서부 표준시 SA Western Standard Time
99.생피에르 표준시 Saint Pierre Standard Time
100.사할린 표준시 Sakhalin Standard Time
101.사모아 표준시 Samoa Standard Time
102.상투메 표준시 Sao Tome Standard Time
103.사라토브 표준시 Saratov Standard Time
104.동남 아시아 표준시 SE Asia Standard Time
105.말레이 반도 표준시 Singapore Standard Time
106.남아프리카 표준시 South Africa Standard Time
107.남수단 표준시 South Sudan Standard Time
108.스리랑카 표준시 Sri Lanka Standard Time
109.수단 표준시 Sudan Standard Time
110.시리아 표준시 Syria Standard Time
111.타이베이 표준시 Taipei Standard Time
112.태즈메이니아 표준시 Tasmania Standard Time
113.토칸칭스 표준시 Tocantins Standard Time
114.도쿄 표준시 Tokyo Standard Time
115.톰스크 표준시 Tomsk Standard Time
116.통가 표준시 Tonga Standard Time
117.트란스바이칼 표준시 Transbaikal Standard Time
118.터키 표준 시간 Turkey Standard Time
119.터크스 케이커스 표준시 Turks And Caicos Standard Time
120.울란바토르 표준시 Ulaanbaatar Standard Time
121.미국 동부 표준시 US Eastern Standard Time
122.미국 산지 표준시 US Mountain Standard Time
123.협정 세계시 UTC
124.UTC+12 UTC+12
125.UTC+13 UTC+13
126.UTC-02 UTC-02
127.UTC-08 UTC-08
128.UTC-09 UTC-09
129.UTC-11 UTC-11
130.베네수엘라 표준시 Venezuela Standard Time
131.러시아 TZ 9 표준시 Vladivostok Standard Time
132.볼고그라드 표준시 Volgograd Standard Time
133.서부 오스트레일리아 표준시 W. Australia Standard Time
134.서중앙 아프리카 표준시 W. Central Africa Standard Time
135.서유럽 표준시 W. Europe Standard Time
136.서몽골 표준시 W. Mongolia Standard Time
137.서아시아 표준시  West Asia Standard Time
138.팔레스타인 영토 표준시 West Bank Standard Time
139.서아시아 표준시 West Pacific Standard Time
140.러시아 TZ 8 표준시 Yakutsk Standard Time
141.유콘 표준시 Yukon Standard Time
*/


int localtime_newyork() {
    SYSTEMTIME utcTime, nyTime;
    DYNAMIC_TIME_ZONE_INFORMATION dtzNY;
    DWORD index = 0;

    // 현재 UTC 시간을 가져옵니다
    GetSystemTime(&utcTime);

    // 모든 시간대를 순회하면서 뉴욕의 시간대 정보를 찾습니다
    int ny_index = 0;
    int tz_idx = 0;
    while (EnumDynamicTimeZoneInformation(tz_idx, &dtzNY) != ERROR_NO_MORE_ITEMS) {

        TRACE(L"%d. %s\t%s\n", tz_idx, dtzNY.StandardName, dtzNY.TimeZoneKeyName);
        
        // 미국 동부 표준시(뉴욕)
        if (0 == wcscmp(dtzNY.TimeZoneKeyName, L"Eastern Standard Time")) {
            ny_index = tz_idx;
        }
        tz_idx++;
    }

    if (ny_index > -1) {
        // UTC 시간을 뉴욕 로컬 시간으로 변환합니다
        if (SystemTimeToTzSpecificLocalTimeEx(&dtzNY, &utcTime, &nyTime)) {
            TRACE(L"UTC에서 뉴욕 시간으로의 변환: %04d-%02d-%02d %02d:%02d:%02d\n", nyTime.wYear, nyTime.wMonth, nyTime.wDay, nyTime.wHour, nyTime.wMinute, nyTime.wSecond);
        }
        else {
            TRACE(L"UTC에서 뉴욕 시간으로의 변환 실패.\n");
        }
    }
    else {
        TRACE("뉴욕 시간대 정보를 찾는 데 실패했습니다.\n");
    }

    return 0;
}

void localtime_newyork_serv_ver()
{
    BOOL btSummerTime = FALSE;

    int sum_val = -6 + (btSummerTime ? 1 : 0); // sum_val = -5

    int nDate = 20240419;
    try
    {
        int nTime = 93000000;
        COleDateTime dt = COleDateTime(nDate / 10000, (nDate % 10000) / 100, (nDate % 100), nTime / 10000000, (nTime % 10000000) / 100000, (nTime % 100000) / 1000);

        dt += COleDateTimeSpan(0, -6 + (btSummerTime ? 1 : 0), 0, 0);
        int nRealDate = dt.GetYear() * 10000 + dt.GetMonth() * 100 + dt.GetDay();

        CString out;
        out.Format(L"kr:%d ny:%s - %d \r\n", nTime, dt.Format(L"%c"), nRealDate);
        TRACE(out);
    }
    catch (...)
    {
    }
}

void CTestDlg::OnOK()
{
    localtime_newyork();

    localtime_newyork_serv_ver();

    return;

    
}

