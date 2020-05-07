#include<iostream>
#include<string>

using namespace std;

class Song
{
public:
    string name;
    string artist_name;
    string album_name;
    string genre_name;
    string playlist_name;
    string url;
    Song *artist;
    Song *album;
    Song *genre;
    Song *playlist;
};

Song *art[14],*gen[6],*play[5],*alb[68];

void initialize()
{
    int x;
    for(x=0;x<14;x++)
    {
        art[x]=NULL;
    }
    for(x=0;x<6;x++)
    {
        gen[x]=NULL;
    }
    for(x=0;x<5;x++)
    {
        play[x]=NULL;
    }
}

int main()
{
    int i;
    Song Tracks[113];

    Tracks[0].name="VAATHI COMING";
    Tracks[0].artist_name="ANIRUDH RAVICHANDER";
    Tracks[0].album_name="MASTER";
    Tracks[0].genre_name="PARTY";
    Tracks[0].playlist_name="LATEST TAMIL";
    Tracks[0].url="https://www.youtube.com/watch?v=vxzfsBDx590";

    Tracks[1].name="ANDHA KANNA PAATHAKA";
    Tracks[1].artist_name="ANIRUDH RAVICHANDER";
    Tracks[1].album_name="MASTER";
    Tracks[1].genre_name="MELODY";
    Tracks[1].playlist_name="LATEST TAMIL";
    Tracks[1].url="https://www.youtube.com/watch?v=3hVc3M1IEe0";

    Tracks[2].name="VEYYON SILLI";
    Tracks[2].artist_name="G.V.PRAKASH KUMAR";
    Tracks[2].album_name="SOORARAI POTTRU";
    Tracks[2].genre_name="LOVE";
    Tracks[2].playlist_name="LATEST TAMIL";
    Tracks[2].url="https://www.youtube.com/watch?v=0f_ho4Wem0w";

    Tracks[3].name="KUTTI STORY";
    Tracks[3].artist_name="ANIRUDH RAVICHANDER";
    Tracks[3].album_name="MASTER";
    Tracks[3].genre_name="MOOD";
    Tracks[3].playlist_name="LATEST TAMIL";
    Tracks[3].url="https://www.youtube.com/watch?v=gjnrtCKZqYg";

    Tracks[4].name="SIRIKKALAM PARAKKALAM";
    Tracks[4].artist_name="BENNY DAYAL";
    Tracks[4].album_name="KANNUM KANNUM KOLLAIYADITHAL";
    Tracks[4].genre_name="PARTY";
    Tracks[4].playlist_name="LATEST TAMIL";
    Tracks[4].url="https://www.youtube.com/watch?v=vlYv7Ri-GQU";

    Tracks[5].name="YELO PULLELO";
    Tracks[5].artist_name="ANIRUDH RAVICHANDER";
    Tracks[5].album_name="KANNUM KANNUM KOLLAIYADITHAL";
    Tracks[5].genre_name="PARTY";
    Tracks[5].playlist_name="LATEST TAMIL";
    Tracks[5].url="https://www.youtube.com/watch?v=nfH0pa0VSBI";

    Tracks[6].name="VAATHI RAID";
    Tracks[6].artist_name="ANIRUDH RAVICHANDER";
    Tracks[6].album_name="MASTER";
    Tracks[6].genre_name="RAP";
    Tracks[6].playlist_name="LATEST TAMIL";
    Tracks[6].url="https://www.youtube.com/watch?v=eHoIUNY-bG4";

    Tracks[7].name="MANNURUNDA";
    Tracks[7].artist_name="G.V.PRAKASH KUMAR";
    Tracks[7].album_name="SOORARAI POTTRU";
    Tracks[7].genre_name="FOLK";
    Tracks[7].playlist_name="LATEST TAMIL";
    Tracks[7].url="https://www.youtube.com/watch?v=KDlkS6l2ZTU";

    Tracks[8].name="KADHAIPOMA";
    Tracks[8].artist_name="LEON JAMES";
    Tracks[8].album_name="OH MY KADAVULE";
    Tracks[8].genre_name="MELODY";
    Tracks[8].playlist_name="LATEST TAMIL";
    Tracks[8].url="https://www.youtube.com/watch?v=DScFlfN9vDk";

    Tracks[9].name="KAADHAL THEEVEY";
    Tracks[9].artist_name="SID SRIRAM";
    Tracks[9].album_name="DHARALA PRABHU";
    Tracks[9].genre_name="MELODY";
    Tracks[9].playlist_name="LATEST TAMIL";
    Tracks[9].url="https://www.youtube.com/watch?v=NGkEwWewgmY";

    Tracks[10].name="BREAKUP SONG";
    Tracks[10].artist_name="HIP HOP THAMIZHA";
    Tracks[10].album_name="NAAN SIRITHAAL";
    Tracks[10].genre_name="PARTY";
    Tracks[10].playlist_name="LATEST TAMIL";
    Tracks[10].url="https://www.youtube.com/watch?v=lxROTQJEB58";

    Tracks[11].name="HAIYO HAIYO";
    Tracks[11].artist_name="LEON JAMES";
    Tracks[11].album_name="OH MY KADAVULE";
    Tracks[11].genre_name="LOVE";
    Tracks[11].playlist_name="LATEST TAMIL";
    Tracks[11].url="https://www.youtube.com/watch?v=lJXDFmqr564";

    Tracks[12].name="AJUKKU GUMUKKU";
    Tracks[12].artist_name="HIP HOP THAMIZHA";
    Tracks[12].album_name="NAAN SIRITHAAL";
    Tracks[12].genre_name="FOLK";
    Tracks[12].playlist_name="LATEST TAMIL";
    Tracks[12].url="https://www.youtube.com/watch?v=ji55jouN_8k";

    Tracks[13].name="CHILL BRO";
    Tracks[13].artist_name="DHANUSH";
    Tracks[13].album_name="PATTAS";
    Tracks[13].genre_name="PARTY";
    Tracks[13].playlist_name="LATEST TAMIL";
    Tracks[14].url="https://www.youtube.com/watch?v=pHxz8l1iWU4";

    Tracks[14].name="NAAN SIRICHA";
    Tracks[14].artist_name="HIP HOP THAMIZHA";
    Tracks[14].album_name="NAAN SIRITHAAL";
    Tracks[14].genre_name="PARTY";
    Tracks[14].playlist_name="LATEST TAMIL";
    Tracks[14].url="https://www.youtube.com/watch?v=Ckwj8Xsil88";

    Tracks[15].name="JIGIDI KILLADI";
    Tracks[15].artist_name="ANIRUDH RAVICHANDER";
    Tracks[15].album_name="PATTAS";
    Tracks[15].genre_name="LOVE";
    Tracks[15].playlist_name="LATEST TAMIL";
    Tracks[15].url="https://www.youtube.com/watch?v=v7RwLCdx-AI";

    Tracks[16].name="OVERA FEEL PANNUREN";
    Tracks[16].artist_name="YUVAN SHANKAR RAJA";
    Tracks[16].album_name="HERO";
    Tracks[16].genre_name="LOVE";
    Tracks[16].playlist_name="LATEST TAMIL";
    Tracks[16].url="https://www.youtube.com/watch?v=kBHstSYCgew";

    Tracks[17].name="DHOM DHOM";
    Tracks[17].artist_name="HIP HOP THAMIZHA";
    Tracks[17].album_name="NAAN SIRITHAAL";
    Tracks[17].genre_name="MELODY";
    Tracks[17].playlist_name="LATEST TAMIL";
    Tracks[17].url="https://www.youtube.com/watch?v=29FUG72LVFE";

    Tracks[18].name="YEAN ENNAI PIRINDHAAI";
    Tracks[18].artist_name="SID SRIRAM";
    Tracks[18].album_name="ADITHYA VARMA";
    Tracks[18].genre_name="MELODY";
    Tracks[18].playlist_name="LATEST TAMIL";
    Tracks[18].url="https://www.youtube.com/watch?v=9pWrJM5nkl4";

    Tracks[19].name="UNNA NENACHU";
    Tracks[19].artist_name="SID SRIRAM";
    Tracks[19].album_name="PSYCHO";
    Tracks[19].genre_name="MELODY";
    Tracks[19].playlist_name="LATEST TAMIL";
    Tracks[19].url="https://www.youtube.com/watch?v=jFWsj_QT0G8";

    Tracks[20].name="MALTO KITHAPULEH";
    Tracks[20].artist_name="YUVAN SHANKAR RAJA";
    Tracks[20].album_name="HERO";
    Tracks[20].genre_name="PARTY";
    Tracks[20].playlist_name="LATEST TAMIL";
    Tracks[20].url="https://www.youtube.com/watch?v=NHzwno5Y2XA";

    Tracks[21].name="QUIT PANNUDA";
    Tracks[21].artist_name="ANIRUDH RAVICHANDER";
    Tracks[21].album_name="MASTER";
    Tracks[21].genre_name="MELODY";
    Tracks[21].playlist_name="LATEST TAMIL";
    Tracks[21].url="https://www.youtube.com/watch?v=fccXKFiXEGU";

    Tracks[22].name="POLAKATUM PARA PARA";
    Tracks[22].artist_name="SANTHOSH NARAYANAN";
    Tracks[22].album_name="MASTER";
    Tracks[22].genre_name="FOLK";
    Tracks[22].playlist_name="LATEST TAMIL";
    Tracks[22].url="https://www.youtube.com/watch?v=dZN4TD9Ane0";

    Tracks[23].name="EDHARKADI";
    Tracks[23].artist_name="DHRUV VIKRAM";
    Tracks[23].album_name="ADITHYA VARMA";
    Tracks[23].genre_name="LOVE";
    Tracks[23].playlist_name="HEART BREAKERS";
    Tracks[23].url="https://www.youtube.com/watch?v=Y1JCAXAxoMg";

    Tracks[24].name="IMAYE IMAYE";
    Tracks[24].artist_name="G.V.PRAKASH KUMAR";
    Tracks[24].album_name="RAJA RANI";
    Tracks[24].genre_name="MELODY";
    Tracks[24].playlist_name="HEART BREAKERS";
    Tracks[24].url="https://www.youtube.com/watch?v=d38xWWg62LY";

    Tracks[25].name="MARANDHAYE";
    Tracks[25].artist_name="D.IMMAN";
    Tracks[25].album_name="TEDDY";
    Tracks[25].genre_name="MELODY";
    Tracks[25].playlist_name="HEART BREAKERS";
    Tracks[25].url="https://www.youtube.com/watch?v=gIDG3cd_I7I";

    Tracks[26].name="POGADHE";
    Tracks[26].artist_name="YUVAN SHANKAR RAJA";
    Tracks[26].album_name="DEEPAVALI";
    Tracks[26].genre_name="MELODY";
    Tracks[26].playlist_name="HEART BREAKERS";
    Tracks[26].url="https://www.youtube.com/watch?v=ujV-0AT60pU";

    Tracks[27].name="AVA ENNA";
    Tracks[27].artist_name="HARRIS JAYARAJ";
    Tracks[27].album_name="VAARANAM AAYIRAM";
    Tracks[27].genre_name="FOLK";
    Tracks[27].playlist_name="HEART BREAKERS";
    Tracks[27].url="https://www.youtube.com/watch?v=5yjy7djTUDc";

    Tracks[28].name="MOONGIL THOTTAM";
    Tracks[28].artist_name="A.R.RAHMAN";
    Tracks[28].album_name="KADAL";
    Tracks[28].genre_name="MELODY";
    Tracks[28].playlist_name="HEART BREAKERS";
    Tracks[28].url="https://www.youtube.com/watch?v=EQ783EHQkng";

    Tracks[29].name="VAADI PULLA VAADI";
    Tracks[29].artist_name="HIP HOP THAMIZHA";
    Tracks[29].album_name="MEESAYA MURUKKU";
    Tracks[29].genre_name="LOVE";
    Tracks[29].playlist_name="HEART BREAKERS";
    Tracks[29].url="https://www.youtube.com/watch?v=7mWd8fOG7qI";

    Tracks[30].name="SERAMAL PONAL";
    Tracks[30].artist_name="VIVEK-MERVIN";
    Tracks[30].album_name="GULEBAGAVALI";
    Tracks[30].genre_name="MELODY";
    Tracks[30].playlist_name="HEART BREAKERS";
    Tracks[30].url="https://www.youtube.com/watch?v=URgqLY3Z7PQ";

    Tracks[31].name="OH PENNE";
    Tracks[31].artist_name="ANIRUDH RAVICHANDER";
    Tracks[31].album_name="VANAKKAM CHENNAI";
    Tracks[31].genre_name="MELODY";
    Tracks[31].playlist_name="HEART BREAKERS";
    Tracks[31].url="https://www.youtube.com/watch?v=C7MAqIcM-Sg";

    Tracks[32].name="MEGAMO AVAL";
    Tracks[32].artist_name="SANTHOSH NARAYANAN";
    Tracks[32].album_name="MEYAADHA MAAN";
    Tracks[32].genre_name="MELODY";
    Tracks[32].playlist_name="HEART BREAKERS";
    Tracks[32].url="https://www.youtube.com/watch?v=mVubYBRajfw";

    Tracks[33].name="YEDHO ONDRU ENNAI";
    Tracks[33].artist_name="YUVAN SHANKAR RAJA";
    Tracks[33].album_name="PAIYA";
    Tracks[33].genre_name="LOVE";
    Tracks[33].playlist_name="HEART BREAKERS";
    Tracks[33].url="https://www.youtube.com/watch?v=UeYP7909Ovg";

    Tracks[34].name="DHIMU DHIMU";
    Tracks[34].artist_name="HARRIS JAYARAJ";
    Tracks[34].album_name="ENGEYUM KADHAL";
    Tracks[34].genre_name="MELODY";
    Tracks[34].playlist_name="HEART BREAKERS";
    Tracks[34].url="https://www.youtube.com/watch?v=QoK8x_2C4go";

    Tracks[35].name="PO URAVE";
    Tracks[35].artist_name="SID SRIRAM";
    Tracks[35].album_name="KAATRIN MOZHI";
    Tracks[35].genre_name="MOOD";
    Tracks[35].playlist_name="HEART BREAKERS";
    Tracks[35].url="https://www.youtube.com/watch?v=JdVPh0vu2zI";

    Tracks[36].name="MANNIPAAYA";
    Tracks[36].artist_name="A.R.RAHMAN";
    Tracks[36].album_name="VINNAI THAANDI VARUVAYAA";
    Tracks[36].genre_name="MELODY";
    Tracks[36].playlist_name="HEART BREAKERS";
    Tracks[36].url="https://www.youtube.com/watch?v=EjUP08N89mI";

    Tracks[37].name="KADHAL ORU AAGAYAM";
    Tracks[37].artist_name="HIP HOP THAMIZHA";
    Tracks[37].album_name="IMAIKKA NODIGAL";
    Tracks[37].genre_name="MELODY";
    Tracks[37].playlist_name="HEART BREAKERS";
    Tracks[37].url="https://www.youtube.com/watch?v=kmhrT7fPYO4";

    Tracks[38].name="PO NEE PO";
    Tracks[38].artist_name="ANIRUDH RAVICHANDER";
    Tracks[38].album_name="THREE";
    Tracks[38].genre_name="LOVE";
    Tracks[38].playlist_name="HEART BREAKERS";
    Tracks[38].url="https://www.youtube.com/watch?v=DnyA_qEbTpw";

    Tracks[39].name="MUNNAL KADHALI";
    Tracks[39].artist_name="D.IMMAN";
    Tracks[39].album_name="MIRUTHAN";
    Tracks[39].genre_name="MOOD";
    Tracks[39].playlist_name="HEART BREAKERS";
    Tracks[39].url="https://www.youtube.com/watch?v=q4u4zIbhkdI";

    Tracks[40].name="KAADHAL ENDRAL";
    Tracks[40].artist_name="YUVAN SHANKAR RAJA";
    Tracks[40].album_name="GOA";
    Tracks[40].genre_name="LOVE";
    Tracks[40].playlist_name="HEART BREAKERS";
    Tracks[40].url="https://www.youtube.com/watch?v=dfGpFJW9GHY";

    Tracks[41].name="THODU VAANAM";
    Tracks[41].artist_name="HARRIS JAYARAJ";
    Tracks[41].album_name="ANEGAN";
    Tracks[41].genre_name="MOOD";
    Tracks[41].playlist_name="HEART BREAKERS";
    Tracks[41].url="https://www.youtube.com/watch?v=vSYI6ZrkE80";

    Tracks[42].name="USURE POGUDHEY";
    Tracks[42].artist_name="A.R.RAHMAN";
    Tracks[42].album_name="RAAVANAN";
    Tracks[42].genre_name="MELODY";
    Tracks[42].playlist_name="HEART BREAKERS";
    Tracks[42].url="https://www.youtube.com/watch?v=yCKO5KUDcVs";

    Tracks[43].name="THOOVANAM";
    Tracks[43].artist_name="D.IMMAN";
    Tracks[43].album_name="ROMEO JULIET";
    Tracks[43].genre_name="LOVE";
    Tracks[43].playlist_name="HEART BREAKERS";
    Tracks[43].url="https://www.youtube.com/watch?v=K9jQm0FZZ98";

    Tracks[44].name="KADHAL VALARTHEN";
    Tracks[44].artist_name="YUVAN SHANKAR RAJA";
    Tracks[44].album_name="MANMADHAN";
    Tracks[44].genre_name="MOOD";
    Tracks[44].playlist_name="HEART BREAKERS";
    Tracks[44].url="https://www.youtube.com/watch?v=ALDVhVPnjus";

    Tracks[45].name="NEE NENACHA";
    Tracks[45].artist_name="SID SRIRAM";
    Tracks[45].album_name="MR.LOCAL";
    Tracks[45].genre_name="MOOD";
    Tracks[45].playlist_name="HEART BREAKERS";
    Tracks[45].url="https://www.youtube.com/watch?v=HUwEXHPEgdM";

    Tracks[46].name="AAROMALE";
    Tracks[46].artist_name="A.R.RAHMAN";
    Tracks[46].album_name="VINNAI THAANDI VARUVAAYA";
    Tracks[46].genre_name="MOOD";
    Tracks[46].playlist_name="HEART BREAKERS";
    Tracks[46].url="https://www.youtube.com/watch?v=q7OUFE3dw6E";

    Tracks[47].name="ENNODU NEE IRUNTHAL";
    Tracks[47].artist_name="A.R.RAHMAN";
    Tracks[47].album_name="I";
    Tracks[47].genre_name="MELODY";
    Tracks[47].playlist_name="HEART BREAKERS";
    Tracks[47].url="https://www.youtube.com/watch?v=EhhiY11Z9-U";

    Tracks[48].name="DAAVUYA";
    Tracks[48].artist_name="SANTHOSH NARAYANAN";
    Tracks[48].album_name="REMO";
    Tracks[48].genre_name="PARTY";
    Tracks[48].playlist_name="HEART BREAKERS";
    Tracks[48].url="https://www.youtube.com/watch?v=GRKyx31fqjE";

    Tracks[49].name="VENAAM MACHAN";
    Tracks[49].artist_name="HARRIS JAYARAJ";
    Tracks[49].album_name="OK OK";
    Tracks[49].genre_name="FOLK";
    Tracks[49].playlist_name="HEART BREAKERS";
    Tracks[49].url="https://www.youtube.com/watch?v=Q_RiJmvmcyQ";

    Tracks[50].name="VENMEGAM";
    Tracks[50].artist_name="YUVAN SHANKAR RAJA";
    Tracks[50].album_name="YAARADI NEE MOHINI";
    Tracks[50].genre_name="MELODY";
    Tracks[50].playlist_name="HEART BREAKERS";
    Tracks[50].url="https://www.youtube.com/watch?v=JzTNs0gY_ZU";

    Tracks[51].name="ADIYAE IVALEY";
    Tracks[51].artist_name="D.IMMAN";
    Tracks[51].album_name="ROMEO JULIET";
    Tracks[51].genre_name="FOLK";
    Tracks[51].playlist_name="HEART BREAKERS";
    Tracks[51].url="https://www.youtube.com/watch?v=E55QqxWUYk8";

    Tracks[52].name="WHY THIS KOLAVERI DI";
    Tracks[52].artist_name="DHANUSH";
    Tracks[52].album_name="THREE";
    Tracks[52].genre_name="PARTY";
    Tracks[52].playlist_name="HEART BREAKERS";
    Tracks[52].url="https://www.youtube.com/watch?v=YR12Z8f1Dh8";

    Tracks[53].name="NENJUKKUL PEIDHIDUM";
    Tracks[53].artist_name="HARRIS JAYARAJ";
    Tracks[53].album_name="VAARANAM AAYIRAM";
    Tracks[53].genre_name="MELODY";
    Tracks[53].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[53].url="https://www.youtube.com/watch?v=FzLpP8VBC6E";

    Tracks[54].name="SIRIKKADHEY";
    Tracks[54].artist_name="ANIRUDH RAVICHANDER";
    Tracks[54].album_name="REMO";
    Tracks[54].genre_name="MELODY";
    Tracks[54].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[54].url="https://www.youtube.com/watch?v=iiVANEoXeLY";

    Tracks[55].name="ENGEYUM KADHAL";
    Tracks[55].artist_name="HARRIS JAYARAJ";
    Tracks[55].album_name="ENGEYUM KADHAL";
    Tracks[55].genre_name="MELODY";
    Tracks[55].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[55].url="https://www.youtube.com/watch?v=OH3_Jna80Uk";

    Tracks[56].name="UNAKAGA";
    Tracks[56].artist_name="A.R.RAHMAN";
    Tracks[56].album_name="BIGIL";
    Tracks[56].genre_name="LOVE";
    Tracks[56].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[56].url="https://www.youtube.com/watch?v=IdDaf8Rr33E";

    Tracks[57].name="NEW YORK";
    Tracks[57].artist_name="A.R.RAHMAN";
    Tracks[57].album_name="SILLUNU ORU KADHAL";
    Tracks[57].genre_name="MELODY";
    Tracks[57].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[57].url="https://www.youtube.com/watch?v=OjU54VhRFbU";

    Tracks[58].name="OSAKA OSAKA";
    Tracks[58].artist_name="ANIRUDH RAVICHANDER";
    Tracks[58].album_name="VANAKKAM CHENNAI";
    Tracks[58].genre_name="LOVE";
    Tracks[58].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[58].url="https://www.youtube.com/watch?v=Ml5smnK5Taw";

    Tracks[59].name="MARUVAARTHAI";
    Tracks[59].artist_name="SID SRIRAM";
    Tracks[59].album_name="ENAI NOKKI PAAYUM THOTA";
    Tracks[59].genre_name="LOVE";
    Tracks[59].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[59].url="https://www.youtube.com/watch?v=U3lyojCm6jA";

    Tracks[60].name="ANBE ANBE";
    Tracks[60].artist_name="G.V.PRAKASH KUMAR";
    Tracks[60].album_name="DARLING";
    Tracks[60].genre_name="LOVE";
    Tracks[60].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[60].url="https://www.youtube.com/watch?v=YR4fS1segho";

    Tracks[61].name="UN VIZHIGALIL";
    Tracks[61].artist_name="ANIRUDH RAVICHANDER";
    Tracks[61].album_name="MAAN KARATE";
    Tracks[61].genre_name="MELODY";
    Tracks[61].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[61].url="https://www.youtube.com/watch?v=8T7WQrcyE9s";

    Tracks[62].name="DOPE TRACK";
    Tracks[62].artist_name="YUVAN SHANKAR RAJA";
    Tracks[62].album_name="PYAAR PREMA KAADHAL";
    Tracks[62].genre_name="MOOD";
    Tracks[62].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[62].url="https://www.youtube.com/watch?v=SSrdUo0IrAc";

    Tracks[63].name="OTHAYADI PAATHAIYILE";
    Tracks[63].artist_name="ANIRUDH RAVICHANDER";
    Tracks[63].album_name="KANAA";
    Tracks[63].genre_name="LOVE";
    Tracks[63].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[63].url="https://www.youtube.com/watch?v=qP8e7lFdEho";

    Tracks[64].name="TAK BAK";
    Tracks[64].artist_name="ANIRUDH RAVICHANDER";
    Tracks[64].album_name="THANGAMAGAN";
    Tracks[64].genre_name="LOVE";
    Tracks[64].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[64].url="https://www.youtube.com/watch?v=Zl7B70EQeVo";

    Tracks[65].name="MAYA NADHI";
    Tracks[65].artist_name="SANTHOSH NARAYANAN";
    Tracks[65].album_name="KABALI";
    Tracks[65].genre_name="MELODY";
    Tracks[65].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[65].url="https://www.youtube.com/watch?v=9cHXA6l4e4Q";

    Tracks[66].name="KAADHAL ORU";
    Tracks[66].artist_name="HARRIS JAYARAJ";
    Tracks[66].album_name="OK OK";
    Tracks[66].genre_name="LOVE";
    Tracks[66].playlist_name="ROMANTIC ACOUSTICS";
    Tracks[66].url="https://www.youtube.com/watch?v=xAfHFFi0O6E";

    Tracks[67].name="POOKAL POOKKUM";
    Tracks[67].artist_name="G.V.PRAKASH KUMAR";
    Tracks[67].album_name="MADARASAPATTINAM";
    Tracks[67].genre_name="MELODY";
    Tracks[67].playlist_name="INIYA IRAVU";
    Tracks[67].url="https://www.youtube.com/watch?v=nWxGhq_lBII";

    Tracks[68].name="KANNANA KANNEY";
    Tracks[68].artist_name="D.IMMAN";
    Tracks[68].album_name="VISWASAM";
    Tracks[68].genre_name="MELODY";
    Tracks[68].playlist_name="INYA IRAVU";
    Tracks[68].url="https://www.youtube.com/watch?v=FysV6XnDlQk";

    Tracks[69].name="NEETHANE";
    Tracks[69].artist_name="A.R.RAHMAN";
    Tracks[69].album_name="MERSAL";
    Tracks[69].genre_name="MELODY";
    Tracks[69].playlist_name="INIYA IRAVU";
    Tracks[69].url="https://www.youtube.com/watch?v=fWajtP80g54";

    Tracks[70].name="NAAN UN";
    Tracks[70].artist_name="A.R.RAHMAN";
    Tracks[70].album_name="24";
    Tracks[70].genre_name="MELODY";
    Tracks[70].playlist_name="INIYA IRAVU";
    Tracks[70].url="https://www.youtube.com/watch?v=jRDCWQP7rjI";

    Tracks[71].name="YAANJI";
    Tracks[71].artist_name="ANIRUDH RAVICHANDER";
    Tracks[71].album_name="VIKRAM VEDHA";
    Tracks[71].genre_name="LOVE";
    Tracks[71].playlist_name="INIYA IRAVU";
    Tracks[71].url="https://www.youtube.com/watch?v=Y3-PeuQ7nvY";

    Tracks[72].name="KAADHAL VAITHU";
    Tracks[72].artist_name="YUVAN SHANKAR RAJA";
    Tracks[72].album_name="DEEPAVALI";
    Tracks[72].genre_name="MOOD";
    Tracks[72].playlist_name="INIYA IRAVU";
    Tracks[72].url="https://www.youtube.com/watch?v=F-nbd9_fxE0";

    Tracks[73].name="USURE";
    Tracks[73].artist_name="G.V.PRAKASH KUMAR";
    Tracks[73].album_name="SIVAPU MANJAL PACHAI";
    Tracks[73].genre_name="MELODY";
    Tracks[73].playlist_name="INIYA IRAVU";
    Tracks[73].url="https://www.youtube.com/watch?v=27U4UPhHqjE";

    Tracks[73].name="NEEYUM NAANUM";
    Tracks[73].artist_name="ANIRUDH RAVICHANDER";
    Tracks[73].album_name="NAANUM ROWDY THAAN";
    Tracks[73].genre_name="LOVE";
    Tracks[73].playlist_name="INIYA IRAVU";
    Tracks[73].url="https://www.youtube.com/watch?v=fYkQzTAx3Yo";

    Tracks[74].name="NEEYUM NAANUM ANBE";
    Tracks[74].artist_name="HIP HOP THAMIZHA";
    Tracks[74].album_name="IMAIKKA NODIGAL";
    Tracks[74].genre_name="LOVE";
    Tracks[74].playlist_name="INIYA IRAVU";
    Tracks[74].url="https://www.youtube.com/watch?v=dImiR3Sr8Wo";

    Tracks[75].name="ANBAE PERANBAE";
    Tracks[75].artist_name="SID SRIRAM";
    Tracks[75].album_name="NGK";
    Tracks[75].genre_name="LOVE";
    Tracks[75].playlist_name="INIYA IRAVU";
    Tracks[75].url="https://www.youtube.com/watch?v=N_iW0VC3IdI";

    Tracks[76].name="MAARIS ANANDHI";
    Tracks[76].artist_name="YUVAN SHANKAR RAJA";
    Tracks[76].album_name="MAARI 2";
    Tracks[76].genre_name="MELODY";
    Tracks[76].playlist_name="INIYA IRAVU";
    Tracks[76].url="https://www.youtube.com/watch?v=AGiVsZGmkJU";

    Tracks[77].name="INNUM KONJA NERAM";
    Tracks[77].artist_name="A.R.RAHMAN";
    Tracks[77].album_name="MARYAN";
    Tracks[77].genre_name="MELODY";
    Tracks[77].playlist_name="INIYA IRAVU";
    Tracks[77].url="https://www.youtube.com/watch?v=I8UrKhurkuk";

    Tracks[78].name="UN MELA ORU KANNU";
    Tracks[78].artist_name="D.IMMAN";
    Tracks[78].album_name="RAJINI MURUGAN";
    Tracks[78].genre_name="LOVE";
    Tracks[78].playlist_name="INIYA IRAVU";
    Tracks[78].url="https://www.youtube.com/watch?v=nngwP1WWva4";

    Tracks[79].name="AYYAYO";
    Tracks[79].artist_name="G.V.PRAKASH KUMAR";
    Tracks[79].album_name="AADUKALAM";
    Tracks[79].genre_name="MELODY";
    Tracks[79].playlist_name="INIYA IRAVU";
    Tracks[79].url="https://www.youtube.com/watch?v=uxb-TMoqb9k";

    Tracks[80].name="ENKEYOO PAARTHA";
    Tracks[80].artist_name="YUVAN SHANKAR RAJA";
    Tracks[80].album_name="YAARADI NEE MOHINI";
    Tracks[80].genre_name="MOOD";
    Tracks[80].playlist_name="INIYA IRAVU";
    Tracks[80].url="https://www.youtube.com/watch?v=tK6Cq1B-J1Q";

    Tracks[81].name="CHILLENA";
    Tracks[81].artist_name="G.V.PRAKASH KUMAR";
    Tracks[81].album_name="RAJA RANI";
    Tracks[81].genre_name="LOVE";
    Tracks[81].playlist_name="INIYA IRAVU";
    Tracks[81].url="https://www.youtube.com/watch?v=kQBuN9e_qbU";

    Tracks[82].name="IDHAZHIN ORAM";
    Tracks[82].artist_name="ANIRUDH RAVICHANDER";
    Tracks[82].album_name="THREE";
    Tracks[82].genre_name="MELODY";
    Tracks[82].playlist_name="INIYA IRAVU";
    Tracks[82].url="https://www.youtube.com/watch?v=lZORMUufA_Y";

    Tracks[83].name="THULI THULI";
    Tracks[83].artist_name="YUVAN SHANKAR RAJA";
    Tracks[83].album_name="PAIYA";
    Tracks[83].genre_name="LOVE";
    Tracks[83].playlist_name="INIYA IRAVU";
    Tracks[83].url="https://www.youtube.com/watch?v=v-hL3sks2qI";

    Tracks[84].name="GULEBA";
    Tracks[84].artist_name="ANIRUDH RAVICHANDER";
    Tracks[84].album_name="GULEBAGAVALI";
    Tracks[84].genre_name="PARTY";
    Tracks[84].playlist_name="PARTY TONIGHT";
    Tracks[84].url="https://www.youtube.com/watch?v=QVgSyvzmbxw";

    Tracks[85].name="SINGLE PASANGA";
    Tracks[85].artist_name="HIP HOP THAMIZHA";
    Tracks[85].album_name="NATPE THUNAI";
    Tracks[85].genre_name="PARTY";
    Tracks[85].playlist_name="PARTY TONIGHT";
    Tracks[85].url="https://www.youtube.com/watch?v=ybxt5dBVg5w";

    Tracks[86].name="BIGIL BIGIL BIGILUMA";
    Tracks[86].artist_name="A.R.RAHMAN";
    Tracks[86].album_name="BIGIL";
    Tracks[87].genre_name="PARTY";
    Tracks[87].playlist_name="PARTY TONIGHT";
    Tracks[87].url="https://www.youtube.com/watch?v=wHhUta4UAq0";

    Tracks[88].name="MARANA MASS";
    Tracks[88].artist_name="ANIRUDH RAVICHANDER";
    Tracks[88].album_name="PETTA";
    Tracks[88].genre_name="PARTY";
    Tracks[88].playlist_name="PARTY TONIGHT";
    Tracks[88].url="https://www.youtube.com/watch?v=88iypMO9H7g";

    Tracks[89].name="BAGULU ODAYUM DAGULU MAARI";
    Tracks[89].artist_name="ANIRUDH RAVICHANDER";
    Tracks[89].album_name="MAARI";
    Tracks[89].genre_name="PARTY";
    Tracks[89].playlist_name="PARTY TONIGHT";
    Tracks[89].url="https://www.youtube.com/watch?v=PKQNh8dVp2U";

    Tracks[90].name="PAISA NOTE";
    Tracks[90].artist_name="HIP HOP THAMIZHA";
    Tracks[90].album_name="COMALI";
    Tracks[90].genre_name="PARTY";
    Tracks[90].playlist_name="PARTY TONIGHT";
    Tracks[90].url="https://www.youtube.com/watch?v=lPg2iuMAdLc";

    Tracks[91].name="UDHUNGADA SANGU";
    Tracks[91].artist_name="ANIRUDH RAVICHANDER";
    Tracks[91].album_name="VIP";
    Tracks[91].genre_name="PARTY";
    Tracks[91].playlist_name="PARTY TONIGHT";
    Tracks[91].url="https://www.youtube.com/watch?v=RCXzH27eOIA";

    Tracks[92].name="ROWDY BABY";
    Tracks[92].artist_name="DHANUSH";
    Tracks[92].album_name="MAARI 2";
    Tracks[92].genre_name="PARTY";
    Tracks[92].playlist_name="PARTY TONIGHT";
    Tracks[92].url="https://www.youtube.com/watch?v=x6Q7c9RyMzk";

    Tracks[93].name="SODAKKU";
    Tracks[93].artist_name="ANIRUDH RAVICHANDER";
    Tracks[93].album_name="THAANA SERNDHA KOOTAM";
    Tracks[93].genre_name="FOLK";
    Tracks[93].playlist_name="PARTY TONIGHT";
    Tracks[93].url="https://www.youtube.com/watch?v=pn6M7_L1JbQ";

    Tracks[94].name="THE MAARI SWAG";
    Tracks[94].artist_name="ANIRUDH RAVICHANDER";
    Tracks[94].album_name="MAARI";
    Tracks[94].genre_name="PARTY";
    Tracks[94].playlist_name="PARTY TONIGHT";
    Tracks[94].url="https://www.youtube.com/watch?v=AeY7_k77zKg";

    Tracks[95].name="TAKKUNU TAKKUNU";
    Tracks[95].artist_name="HIP HOP THAMZIHA";
    Tracks[95].album_name="MR.LOCAL";
    Tracks[95].genre_name="LOVE";
    Tracks[95].playlist_name="PARTY TONIGHT";
    Tracks[95].url="https://www.youtube.com/watch?v=meITXEnkPaA";

    Tracks[96].name="OTHA SOLLALA";
    Tracks[96].artist_name="G.V.PRAKASH KUMAR";
    Tracks[96].album_name="AADUKALAM";
    Tracks[96].genre_name="FOLK";
    Tracks[96].playlist_name="PARTY TONIGHT";
    Tracks[96].url="https://www.youtube.com/watch?v=vXLAIaSkFIQ";

    Tracks[97].name="DON'U DON'U DON'U";
    Tracks[97].artist_name="ANIRUDH RAVICHANDER";
    Tracks[97].album_name="MAARI";
    Tracks[97].genre_name="LOVE";
    Tracks[97].playlist_name="PARTY TONIGHT";
    Tracks[97].url="https://www.youtube.com/watch?v=A_z5g0_hJN8";

    Tracks[98].name="KARUTHAVANLAAM GALEEJAAM";
    Tracks[98].artist_name="ANIRUDH RAVICHANDER";
    Tracks[98].album_name="VELAIKARAN";
    Tracks[98].genre_name="FOLK";
    Tracks[98].playlist_name="PARTY TONIGHT";
    Tracks[98].url="https://www.youtube.com/watch?v=es-5OLRrUf8";

    Tracks[99].name="MAARI THARA LOCAL";
    Tracks[99].artist_name="DHANUSH";
    Tracks[99].album_name="MAARI";
    Tracks[99].genre_name="FOLK";
    Tracks[99].playlist_name="PARTY TONIGHT";
    Tracks[99].url="https://www.youtube.com/watch?v=OViH68fJUhM";

    Tracks[100].name="WHAT A KARVAAD";
    Tracks[100].artist_name="DHANUSH";
    Tracks[100].album_name="VIP";
    Tracks[100].genre_name="FOLK";
    Tracks[100].playlist_name="PARTY TONIGHT";
    Tracks[100].url="https://www.youtube.com/watch?v=P2YRN8iGQ6g";

    Tracks[101].name="AALUMA DOLUMA";
    Tracks[101].artist_name="ANIRUDH RAVICHANDER";
    Tracks[101].album_name="VEDHALAM";
    Tracks[101].genre_name="FOLK";
    Tracks[101].playlist_name="PARTY TONIGHT";
    Tracks[101].url="https://www.youtube.com/watch?v=2ogKpj5QuSY";

    Tracks[102].name="MERSALAAYITTEN";
    Tracks[102].artist_name="A.R.RAHMAN";
    Tracks[102].album_name="I";
    Tracks[102].genre_name="LOVE";
    Tracks[102].playlist_name="PARTY TOBIGHT";
    Tracks[102].url="https://www.youtube.com/watch?v=uI_ug1H6u0k";

    Tracks[103].name="NAHNA NA NAH";
    Tracks[103].artist_name="YUVAN SHANKAR RAJA";
    Tracks[103].album_name="BIRIYANI";
    Tracks[103].genre_name="PARTY";
    Tracks[103].playlist_name="PARTY TONIGHT";
    Tracks[103].url="https://www.youtube.com/watch?v=iyTMlo5uuzU";

    Tracks[104].name="HEARTUKULLA";
    Tracks[104].artist_name="VIVEK-MERVIN";
    Tracks[104].album_name="GULEBAGAVALI";
    Tracks[104].genre_name="PARTY";
    Tracks[104].playlist_name="PARTY TONIGHT";
    Tracks[104].url="https://www.youtube.com/watch?v=OOP4FDO1XeU";

    Tracks[105].name="DANDANAKKA";
    Tracks[105].artist_name="D.IMMAN";
    Tracks[105].album_name="ROMEO JULIET";
    Tracks[105].genre_name="FOLK";
    Tracks[105].playlist_name="PARTY TONIGHT";
    Tracks[105].url="https://www.youtube.com/watch?v=1zRe8UPF1tM";

    Tracks[106].name="TASAKKU TASAKKU";
    Tracks[106].artist_name="SAM.C.S";
    Tracks[106].album_name="VIKRAM VEDHA";
    Tracks[106].genre_name="PARTY";
    Tracks[106].playlist_name="PARTY TONIGHT";
    Tracks[106].url="https://www.youtube.com/watch?v=Rw3ePD8qLcc";

    Tracks[107].name="CHENNAI CITY GANGSTA";
    Tracks[107].artist_name="ANIRUDH RAVICHANDER";
    Tracks[107].album_name="VANAKKAM CHENNAI";
    Tracks[107].genre_name="PARTY";
    Tracks[107].playlist_name="PARTY TONIGHT";
    Tracks[107].url="https://www.youtube.com/watch?v=hAn75DAONqs";

    Tracks[108].name="VILAYAADU MANKATHA";
    Tracks[108].artist_name="YUVAN SHANKAR RAJA";
    Tracks[108].album_name="MANKATHA";
    Tracks[108].genre_name="PARTY";
    Tracks[108].playlist_name="PARTY TONIGHT";
    Tracks[108].url="https://www.youtube.com/watch?v=fhdLTvl9a74";

    Tracks[109].name="DAAVUYA";
    Tracks[109].artist_name="SANTHOSH NARAYANAN";
    Tracks[109].album_name="REMO";
    Tracks[109].genre_name="PARTY";
    Tracks[109].playlist_name="PARTY TONIGHT";
    Tracks[109].url="https://www.youtube.com/watch?v=GRKyx31fqjE";

    Tracks[110].name="LOCAL BOYS";
    Tracks[110].artist_name="DHANUSH";
    Tracks[110].album_name="ETHIR NEECHAL";
    Tracks[110].genre_name="PARTY";
    Tracks[110].playlist_name="PARTY TONIGHT";
    Tracks[110].url="https://www.youtube.com/watch?v=0FsPYnmjkN4";

    Tracks[111].name="MACHI OPEN THE BOTTLE";
    Tracks[111].artist_name="YUVAN SHANKAR RAJA";
    Tracks[111].album_name="MANKATHA";
    Tracks[111].genre_name="PARTY";
    Tracks[111].playlist_name="PARTY TONIGHT";
    Tracks[111].url="https://www.youtube.com/watch?v=68ixlbMQaY0";

    Tracks[112].name="SONAPAREEYA";
    Tracks[112].artist_name="A.R.RAHMAN";
    Tracks[112].album_name="MARYAN";
    Tracks[112].genre_name="PARTY";
    Tracks[112].playlist_name="PARTY TONIGHT";
    Tracks[112].url="https://www.youtube.com/watch?v=NZE6pFlnSeU";

    initialize();

    for(i=0;i<=112;i++)
    {
        if(Tracks[i].artist_name=="ANIRUDH RAVICHANDER")
        {
            if(art[0]==NULL)
            {
                art[0]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[0];
                art[0]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="G.V.PRAKASH KUMAR")
        {
            if(art[1]==NULL)
            {
                art[1]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[1];
                art[1]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="BENNY DAYAL")
        {
            if(art[2]==NULL)
            {
                art[2]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[2];
                art[2]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="LEON JAMES")
        {
            if(art[3]==NULL)
            {
                art[3]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[3];
                art[3]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="SID SRIRAM")
        {
            if(art[4]==NULL)
            {
                art[4]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[4];
                art[4]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="HIP HOP THAMIZHA")
        {
            if(art[5]==NULL)
            {
                art[5]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[5];
                art[5]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="DHANUSH")
        {
            if(art[6]==NULL)
            {
                art[6]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[6];
                art[6]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="YUVAN SHANKAR RAJA")
        {
            if(art[7]==NULL)
            {
                art[7]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[7];
                art[7]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="SANTHOSH NARAYANAN")
        {
            if(art[8]==NULL)
            {
                art[8]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[8];
                art[8]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="DHRUV VIKRAM")
        {
            if(art[9]==NULL)
            {
                art[9]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[9];
                art[9]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="D.IMMAN")
        {
            if(art[10]==NULL)
            {
                art[10]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[10];
                art[10]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="HARRIS JAYARAJ")
        {
            if(art[11]==NULL)
            {
                art[11]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[11];
                art[11]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="VIVEK-MERVIN")
        {
            if(art[12]==NULL)
            {
                art[12]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[12];
                art[12]=&Tracks[i];
            }
        }

        else if(Tracks[i].artist_name=="SAM.C.S")
        {
            if(art[13]==NULL)
            {
                art[13]=&Tracks[i];
                Tracks[i].artist=NULL;
            }
            else
            {
                Tracks[i].artist=art[13];
                art[13]=&Tracks[i];
            }
        }

        if(Tracks[i].genre_name=="PARTY")
        {
            if(gen[0]==NULL)
            {
                gen[0]=&Tracks[i];
                Tracks[i].genre=NULL;
            }
            else
            {
                Tracks[i].genre=gen[0];
                gen[0]=&Tracks[i];
            }
        }

        else if(Tracks[i].genre_name=="MELODY")
        {
            if(gen[1]==NULL)
            {
                gen[1]=&Tracks[i];
                Tracks[i].genre=NULL;
            }
            else
            {
                Tracks[i].genre=gen[1];
                gen[1]=&Tracks[i];
            }
        }

        else if(Tracks[i].genre_name=="LOVE")
        {
            if(gen[2]==NULL)
            {
                gen[2]=&Tracks[i];
                Tracks[i].genre=NULL;
            }
            else
            {
                Tracks[i].genre=gen[2];
                gen[2]=&Tracks[i];
            }
        }

        else if(Tracks[i].genre_name=="MOOD")
        {
            if(gen[3]==NULL)
            {
                gen[3]=&Tracks[i];
                Tracks[i].genre=NULL;
            }
            else
            {
                Tracks[i].genre=gen[3];
                gen[3]=&Tracks[i];
            }
        }

        else if(Tracks[i].genre_name=="RAP")
        {
            if(gen[4]==NULL)
            {
                gen[4]=&Tracks[i];
                Tracks[i].genre=NULL;
            }
            else
            {
                Tracks[i].genre=gen[4];
                gen[4]=&Tracks[i];
            }
        }

        else if(Tracks[i].genre_name=="FOLK")
        {
            if(gen[5]==NULL)
            {
                gen[5]=&Tracks[i];
                Tracks[i].genre=NULL;
            }
            else
            {
                Tracks[i].genre=gen[5];
                gen[5]=&Tracks[i];
            }
        }

        if(Tracks[i].playlist_name=="LATEST TAMIL")
        {
            if(play[0]==NULL)
            {
                play[0]=&Tracks[i];
                Tracks[i].playlist=NULL;
            }
            else
            {
                Tracks[i].playlist=play[0];
                play[0]=&Tracks[i];
            }
        }

        else if(Tracks[i].playlist_name=="HEART BREAKERS")
        {
            if(play[1]==NULL)
            {
                play[1]=&Tracks[i];
                Tracks[i].playlist=NULL;
            }
            else
            {
                Tracks[i].playlist=play[1];
                play[1]=&Tracks[i];
            }
        }

        else if(Tracks[i].playlist_name=="ROMANTIC ACOUSTICS")
        {
            if(play[2]==NULL)
            {
                play[2]=&Tracks[i];
                Tracks[i].playlist=NULL;
            }
            else
            {
                Tracks[i].playlist=play[2];
                play[2]=&Tracks[i];
            }
        }

        else if(Tracks[i].playlist_name=="INIYA IRAVU")
        {
            if(play[3]==NULL)
            {
                play[3]=&Tracks[i];
                Tracks[i].playlist=NULL;
            }
            else
            {
                Tracks[i].playlist=play[3];
                play[3]=&Tracks[i];
            }
        }

        else if(Tracks[i].playlist_name=="PARTY TONIGHT")
        {
            if(play[4]==NULL)
            {
                play[4]=&Tracks[i];
                Tracks[i].playlist=NULL;
            }
            else
            {
                Tracks[i].playlist=play[4];
                play[4]=&Tracks[i];
            }
        }

        if(Tracks[i].album_name=="MASTER")
        {
            if(alb[0]==NULL)
            {
                alb[0]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[0];
                alb[0]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="SOORARAI POTTRU")
        {
            if(alb[1]==NULL)
            {
                alb[1]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[1];
                alb[1]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="KANNUM KANNUM KOLLAIYADITHAL")
        {
            if(alb[2]==NULL)
            {
                alb[2]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[2];
                alb[2]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="OH MY KADAVULE")
        {
            if(alb[3]==NULL)
            {
                alb[3]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[3];
                alb[3]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="DHARALA PRABHU")
        {
            if(alb[4]==NULL)
            {
                alb[4]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[4];
                alb[4]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="NAAN SIRITHAAL")
        {
            if(alb[5]==NULL)
            {
                alb[5]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[5];
                alb[5]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="PATTAS")
        {
            if(alb[6]==NULL)
            {
                alb[6]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[6];
                alb[6]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="HERO")
        {
            if(alb[7]==NULL)
            {
                alb[7]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[7];
                alb[7]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="ADITHYA VARMA")
        {
            if(alb[8]==NULL)
            {
                alb[8]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[8];
                alb[8]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="PSYCHO")
        {
            if(alb[9]==NULL)
            {
                alb[9]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[9];
                alb[9]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="RAJA RANI")
        {
            if(alb[10]==NULL)
            {
                alb[10]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[10];
                alb[10]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="TEDDY")
        {
            if(alb[11]==NULL)
            {
                alb[11]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[11];
                alb[11]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="DEEPAVALI")
        {
            if(alb[12]==NULL)
            {
                alb[12]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[12];
                alb[12]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VAARANAM AAYIRAM")
        {
            if(alb[13]==NULL)
            {
                alb[13]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[13];
                alb[13]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="KADAL")
        {
            if(alb[14]==NULL)
            {
                alb[14]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[14];
                alb[14]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MEESAYA MURUKKU")
        {
            if(alb[15]==NULL)
            {
                alb[15]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[15];
                alb[15]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="GULEBAGAVALI")
        {
            if(alb[16]==NULL)
            {
                alb[16]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[16];
                alb[16]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VANAKKAM CHENNAI")
        {
            if(alb[17]==NULL)
            {
                alb[17]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[17];
                alb[17]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MEYAADHA MAAN")
        {
            if(alb[18]==NULL)
            {
                alb[18]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[18];
                alb[18]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="PAIYA")
        {
            if(alb[19]==NULL)
            {
                alb[19]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[19];
                alb[19]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="ENGEYUM KADHAL")
        {
            if(alb[20]==NULL)
            {
                alb[20]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[20];
                alb[20]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="KAATRIN MOZHI")
        {
            if(alb[21]==NULL)
            {
                alb[21]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[21];
                alb[21]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="IMAIKKA NODIGAL")
        {
            if(alb[22]==NULL)
            {
                alb[22]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[22];
                alb[22]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="THREE")
        {
            if(alb[23]==NULL)
            {
                alb[23]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[23];
                alb[23]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MIRUTHAN")
        {
            if(alb[24]==NULL)
            {
                alb[24]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[24];
                alb[24]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="GOA")
        {
            if(alb[25]==NULL)
            {
                alb[25]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[25];
                alb[25]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="ANEGAN")
        {
            if(alb[26]==NULL)
            {
                alb[26]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[26];
                alb[26]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="RAAVANAN")
        {
            if(alb[27]==NULL)
            {
                alb[27]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[27];
                alb[27]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="ROMEO JULIET")
        {
            if(alb[28]==NULL)
            {
                alb[28]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[28];
                alb[28]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MANMADHAN")
        {
            if(alb[29]==NULL)
            {
                alb[29]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[29];
                alb[29]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MR.LOCAL")
        {
            if(alb[30]==NULL)
            {
                alb[30]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[30];
                alb[30]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VINNAI THAANDI VARUVAYA")
        {
            if(alb[31]==NULL)
            {
                alb[31]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[31];
                alb[31]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="I")
        {
            if(alb[32]==NULL)
            {
                alb[32]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[32];
                alb[32]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="REMO")
        {
            if(alb[33]==NULL)
            {
                alb[33]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[33];
                alb[33]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="OK OK")
        {
            if(alb[34]==NULL)
            {
                alb[34]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[34];
                alb[34]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="YAARADI NEE MOHINI")
        {
            if(alb[35]==NULL)
            {
                alb[35]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[35];
                alb[35]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="BIGIL")
        {
            if(alb[36]==NULL)
            {
                alb[36]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[36];
                alb[36]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="SILLUNU ORU KADHAL")
        {
            if(alb[37]==NULL)
            {
                alb[37]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[37];
                alb[37]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="ENNAI NOKI PAAYUM THOTTA")
        {
            if(alb[38]==NULL)
            {
                alb[38]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[38];
                alb[38]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="DARLING")
        {
            if(alb[39]==NULL)
            {
                alb[39]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[39];
                alb[39]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MAAN KARATE")
        {
            if(alb[40]==NULL)
            {
                alb[40]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[40];
                alb[40]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="PYAR PREMA KADHAL")
        {
            if(alb[41]==NULL)
            {
                alb[41]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[41];
                alb[41]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="KANA")
        {
            if(alb[42]==NULL)
            {
                alb[42]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[42];
                alb[42]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="THANGAMAGAN")
        {
            if(alb[43]==NULL)
            {
                alb[43]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[43];
                alb[43]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="KABALI")
        {
            if(alb[44]==NULL)
            {
                alb[44]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[44];
                alb[44]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="AADUKALAM")
        {
            if(alb[45]==NULL)
            {
                alb[45]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[45];
                alb[45]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="PETTA")
        {
            if(alb[46]==NULL)
            {
                alb[46]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[46];
                alb[46]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="COMALI")
        {
            if(alb[47]==NULL)
            {
                alb[47]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[47];
                alb[47]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="THAANA SERNDHA KOOTAM")
        {
            if(alb[48]==NULL)
            {
                alb[48]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[48];
                alb[48]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VEDHALAM")
        {
            if(alb[49]==NULL)
            {
                alb[49]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[49];
                alb[49]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="ETHIR NEECHAL")
        {
            if(alb[50]==NULL)
            {
                alb[50]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[50];
                alb[50]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MADARASAPATTINAM")
        {
            if(alb[51]==NULL)
            {
                alb[51]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[51];
                alb[51]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VISWASAM")
        {
            if(alb[52]==NULL)
            {
                alb[52]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[52];
                alb[52]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MERSAL")
        {
            if(alb[53]==NULL)
            {
                alb[53]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[53];
                alb[53]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="24")
        {
            if(alb[54]==NULL)
            {
                alb[54]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[54];
                alb[54]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VIKRAM VEDHA")
        {
            if(alb[55]==NULL)
            {
                alb[55]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[55];
                alb[55]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="SIVAPU MANJAL PACHAI")
        {
            if(alb[56]==NULL)
            {
                alb[56]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[56];
                alb[56]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="NAANUM ROWDY THAN")
        {
            if(alb[57]==NULL)
            {
                alb[57]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[57];
                alb[57]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="NGK")
        {
            if(alb[57]==NULL)
            {
                alb[57]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[58];
                alb[58]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MAARI 2")
        {
            if(alb[59]==NULL)
            {
                alb[59]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[59];
                alb[59]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MARYAN")
        {
            if(alb[60]==NULL)
            {
                alb[60]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[60];
                alb[60]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="RAJINIMURUGAN")
        {
            if(alb[61]==NULL)
            {
                alb[61]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[61];
                alb[61]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="NATPE THUNAI")
        {
            if(alb[62]==NULL)
            {
                alb[62]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[62];
                alb[62]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="MAARI")
        {
            if(alb[63]==NULL)
            {
                alb[63]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[63];
                alb[63]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VIP")
        {
            if(alb[64]==NULL)
            {
                alb[64]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[64];
                alb[64]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="VELAIKARAN")
        {
            if(alb[66]==NULL)
            {
                alb[66]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[66];
                alb[66]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="SMANKATHA")
        {
            if(alb[67]==NULL)
            {
                alb[67]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[67];
                alb[67]=&Tracks[i];
            }
        }

        else if(Tracks[i].album_name=="SBIRIYANI")
        {
            if(alb[68]==NULL)
            {
                alb[68]=&Tracks[i];
                Tracks[i].album=NULL;
            }
            else
            {
                Tracks[i].album=alb[68];
                alb[68]=&Tracks[i];
            }
        }
    }

    Song *t=alb[9];
    while(t!=NULL)
    {
        cout<<t->name<<endl;
        t=t->album;
    }

    return 0;
}
