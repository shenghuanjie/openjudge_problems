/*
3750: 魔兽世界
http://bailian.openjudge.cn/practice/3750/


描述
魔兽世界的西面是红魔军的司令部，东面是蓝魔军的司令部。两个司令部之间是依次排列的若干城市，城市从西向东依次编号为1,2,3 .... N ( N <= 20)。 两军的司令部都会制造武士。武士一共有 dragon 、ninja、iceman、lion、wolf 五种。每种武士都有编号、生命值、攻击力这三种属性。双方的武士编号都是从1开始计算。红方制造出来的第 n 个武士，编号就是n。同样，蓝方制造出来的第 n 个武士，编号也是n。武士在刚降生的时候有一个初始的生命值，生命值在战斗中会发生变化，如果生命值减少到0或少于0，则武士死亡（消失）。在每个整点，即每个小时的第0分， 双方的司令部中各有一个武士降生。红方司令部按照 iceman、lion、wolf、ninja、dragon 的顺序制造武士。蓝方司令部按照 lion、dragon、ninja、iceman、wolf 的顺序制造武士。制造武士需要生命元。制造一个初始生命值为 m 的武士，司令部中的生命元就要减少 m 个。如果司令部中的生命元不足以制造某武士，那么司令部就等待，直到获得足够生命元后的第一个整点，才制造该武士。例如，在2:00，红方司令部本该制造一个 wolf ，如果此时生命元不足，那么就会等待，直到生命元足够后的下一个整点，才制造一个 wolf。在每个小时的第10分：所有的武士朝敌人司令部方向前进一步。即从己方司令部走到相邻城市，或从一个城市走到下一个城市。或从和敌军司令部相邻的城市到达敌军司令部。在每个小时的第20分：每个城市产出10个生命元。生命元留在城市，直到被武士取走。在每个小时的第30分：如果某个城市中只有一个武士，那么该武士取走该城市中的所有生命元，并立即将这些生命元传送到其所属的司令部。在每个小时的第40分：在有两个武士的城市，会发生战斗。在每个小时的第50分，司令部报告它拥有的生命元数量。每次战斗有且只有一方武士主动进攻。被攻击者生命值会减去进攻者的攻击力值。如果被攻击者生命值减至小于等于0，则其被杀死。如果被攻击者没有被杀死，则会发动反击，被反击者的生命值要减去反击者攻击力值的一半(去尾取整)。反击当然可能致敌人于死地。如果武士在战斗中杀死敌人（不论是主动进攻杀死还是反击杀死），则其司令部会立即向其发送8个生命元作为奖励，使其生命值增加8。当然前提是司令部得有8个生命元。如果司令部的生命元不足以奖励所有的武士，则优先奖励距离敌方司令部近的武士。如果某武士在某城市的战斗中杀死了敌人，则该武士的司令部立即取得该城市中所有的生命元。注意，司令部总是先奖励武士，然后再收回打了胜仗的城市的生命元。对于因司令部生命元不足而领不到奖励的武士，司令部也不会在取得战利品生命元后为其补发奖励。每次战斗都只有一方主动进攻一次。战斗并非是你死我活的，可能是双方都幸存。如果双方都幸存，则双方都不能拿走发生战斗的城市的生命元在插红旗的城市，以及编号为奇数的无旗城市，由红武士主动发起进攻。在插蓝旗的城市，以及编号为偶数的无旗城市，由蓝武士主动发起进攻。一开始所有的城市都是无旗的。当某个城市有连续两场战斗都是同一方的武士杀死敌人(两场战斗中间如果有若干个战斗时刻并没有发生战斗，则这两场战斗仍然算是连续的) ，那么该城市就会插上胜方的旗帜，若原来插着败方的旗帜，则败方旗帜落下。旗帜一旦插上，就一直插着，直到被敌人更换。一个城市最多只能插一面旗帜，旗帜没被敌人更换前，也不会再次插同颜色的旗。不同的武士各有其特点：dragon 在一次在它主动进攻的战斗结束后，如果还没有战死，就会欢呼。ninja 挨打了也从不反击敌人。iceman 每前进两步，在第2步完成的时候，生命值会减少9，攻击力会增加20。但是若生命值减9后会小于等于0，则生命值不减9,而是变为1。即iceman不会因走多了而死。lion 若是战死，则其战斗前的生命值就会转移到对手身上。在一个 wolf 通过主动攻击杀死敌人的次数达到偶数的时刻（次数从1开始算），在战斗完成后，该 wolf 生命值和攻击力都增加1倍。如果其杀死的敌人是lion,则攻击力和生命值先加倍，然后才吸取lion的生命值。获取总部的生命元奖励，发生在加倍之后。只有在主动攻击杀死敌人时才能有加倍的事情，反击杀死敌人则不不会发生加倍。武士到达对方司令部后就算完成任务了，从此就呆在那里无所事事。任何一方的司令部里若是出现了2个敌人，则认为该司令部已被敌人占领。任何一方的司令部被敌人占领，则战争结束。战争结束之后就不会发生任何事情了。给定一个时间，要求你将从0点0分开始到此时间为止的所有事件按顺序输出。事件及其对应的输出样例如下：1) 武士降生输出样例： 000:00 blue lion 1 born表示在 0点0分，编号为1的蓝魔lion武士降生2) 武士前进到某一城市输出样例： 000:10 red iceman 1 marched to city 1 with 20 elements and force 30表示在 0点10分，红魔1号武士iceman前进到1号城市，此时他生命值为20,攻击力为30对于iceman,输出的生命值和攻击力应该是变化后的数值3) 武士主动进攻输出样例：000:40 red iceman 1 attacked blue lion 1 in city 1 with 20 elements and force 30表示在0点40分，1号城市中，红魔1号武士iceman 进攻蓝魔1号武士lion,在发起进攻前，红魔1号武士iceman生命值为20，攻击力为 304) 武士反击输出样例：001:40 blue dragon 2 fought back against red lion 2 in city 1表示在1点40分，1号城市中，蓝魔2号武士dragon反击红魔2号武士lion5) 武士战死输出样例：001:40 red lion 2 was killed in city 16) 武士欢呼输出样例：003:40 blue dragon 2 yelled in city 47) 武士获取生命元( elements )输出样例：001:40 blue dragon 2 earned 10 elements for his headquarter8) 旗帜升起输出样例：004:40 blue flag raised in city 49) 武士抵达敌军司令部输出样例：001:10 red iceman 1 reached blue headquarter with 20 elements and force 30（此时他生命值为20,攻击力为30）对于iceman,输出的生命值和攻击力应该是变化后的数值10) 司令部被占领输出样例：003:10 blue headquarter was taken11)司令部报告生命元数量000:50 100 elements in red headquarter000:50 120 elements in blue headquarter表示在0点50分，红方司令部有100个生命元，蓝方有120个输出事件时：首先按时间顺序输出；同一时间发生的事件，按发生地点从西向东依次输出. 武士前进的事件, 算是发生在目的地。在一次战斗中有可能发生上面的 3 至 8 号事件。这些事件都算同时发生，其时间就是战斗开始时间。一次战斗中的这些事件，序号小的应该先输出。两个武士同时抵达同一城市，则先输出红武士的前进事件，后输出蓝武士的。显然，10号事件发生之前的一瞬间一定发生了9号事件。输出时，这两件事算同一时间发生，但是应先输出9号事件虽然任何一方的司令部被占领之后，就不会有任何事情发生了。但和司令部被占领同时发生的事件，全都要输出。 
输入
第一行是一个整数,代表测试数据组数每组测试数据共三行。第一行，三个整数 M,N,T。其含义为：每个司令部一开始都有M个生命元( 1 <= M <= 1000)两个司令部之间一共有N个城市( 1 <= N <= 20 )要求输出从0时0分开始，到时间T为止(包括T) 的所有事件。T以分钟为单位，0 <= T <= 1000第二行：五个整数，依次是 dragon 、ninja、iceman、lion、wolf 的初始生命值。它们都大于0小于等于100第三行：五个整数，依次是 dragon 、ninja、iceman、lion、wolf 的攻击力。它们都大于0小于等于100 
输出
对每组测试数据，首先输出“Case:n" n是测试数据的编号，从1开始接下来按恰当的顺序和格式输出到时间T为止发生的所有事件。每个事件都以事件发生的时间开头，时间格式是“时: 分”，“时”有三位，“分”有两位。 
样例输入
2
99 2 1000
10 20 50 50  30
20 50 50 50  50
40 1 1000
20 20 20 20 20
20 20 20 20 20

样例输出
Case:1
000:00 red iceman 1 born
000:00 blue lion 1 born
000:10 red iceman 1 marched to city 1 with 50 elements and force 50
000:10 blue lion 1 marched to city 2 with 50 elements and force 50
000:30 red iceman 1 earned 10 elements for his headquarter
000:30 blue lion 1 earned 10 elements for his headquarter
000:50 59 elements in red headquarter
000:50 59 elements in blue headquarter
001:00 red lion 2 born
001:00 blue dragon 2 born
001:10 red lion 2 marched to city 1 with 50 elements and force 50
001:10 blue lion 1 marched to city 1 with 50 elements and force 50
001:10 red iceman 1 marched to city 2 with 41 elements and force 70
001:10 blue dragon 2 marched to city 2 with 10 elements and force 20
001:40 red lion 2 attacked blue lion 1 in city 1 with 50 elements and force 50
001:40 blue lion 1 was killed in city 1
001:40 red lion 2 earned 10 elements for his headquarter
001:40 blue dragon 2 attacked red iceman 1 in city 2 with 10 elements and force 20
001:40 red iceman 1 fought back against blue dragon 2 in city 2
001:40 blue dragon 2 was killed in city 2
001:40 red iceman 1 earned 10 elements for his headquarter
001:50 21 elements in red headquarter
001:50 49 elements in blue headquarter
002:00 blue ninja 3 born
002:10 red lion 2 marched to city 2 with 100 elements and force 50
002:10 blue ninja 3 marched to city 2 with 20 elements and force 50
002:10 red iceman 1 reached blue headquarter with 29 elements and force 70
002:40 blue ninja 3 attacked red lion 2 in city 2 with 20 elements and force 50
002:40 red lion 2 fought back against blue ninja 3 in city 2
002:40 blue ninja 3 was killed in city 2
002:40 red lion 2 earned 10 elements for his headquarter
002:40 red flag raised in city 2
002:50 23 elements in red headquarter
002:50 29 elements in blue headquarter
003:10 red lion 2 reached blue headquarter with 58 elements and force 50
003:10 blue headquarter was taken
Case:2
000:00 red iceman 1 born
000:00 blue lion 1 born
000:10 red iceman 1 marched to city 1 with 20 elements and force 20
000:10 blue lion 1 marched to city 1 with 20 elements and force 20
000:40 red iceman 1 attacked blue lion 1 in city 1 with 20 elements and force 20
000:40 blue lion 1 was killed in city 1
000:40 red iceman 1 earned 10 elements for his headquarter
000:50 22 elements in red headquarter
000:50 20 elements in blue headquarter
001:00 red lion 2 born
001:00 blue dragon 2 born
001:10 red lion 2 marched to city 1 with 20 elements and force 20
001:10 blue dragon 2 marched to city 1 with 20 elements and force 20
001:10 red iceman 1 reached blue headquarter with 39 elements and force 40
001:40 red lion 2 attacked blue dragon 2 in city 1 with 20 elements and force 20
001:40 blue dragon 2 was killed in city 1
001:40 red lion 2 earned 10 elements for his headquarter
001:40 red flag raised in city 1
001:50 12 elements in red headquarter
001:50 0 elements in blue headquarter
002:10 red lion 2 reached blue headquarter with 20 elements and force 20
002:10 blue headquarter was taken

来源
Guo Wei

*/

#include <iostream>
#include <iomanip>
#define none 0
#define red 1
#define blue 2
using namespace std;
int originallife;//本部的生命源
int originalhealth[8];//dragon 、ninja、iceman、lion、wolf 的生命力
int originalattack[8];//dragon 、ninja、iceman、lion、wolf 的攻击力
int numberofcity;//城市数目
int lionhealthbefore;//狮子战斗前的生命值
int hour;//小时
int minute;//分钟
int originaltime;//总时长
int pasttime;//已经经过的时长
char whichside[10][10]={"","red","blue"};
class monster
{	public:
	monster(char * inputname, int inputhealth, int inputattack, int inputnumber, int inputcolor, int inputposition):health(inputhealth),attack(inputattack),number(inputnumber),color(inputcolor),position(inputposition)
	{//怪物基类的构造函数，依次初始化名字，生命值，攻击力，序号，所属阵营，所处位置
		name =new char[10];
		strcpy(name,inputname);
		cout <<setfill('0')<<setw(3)<<hour<< ':'<<setfill('0')<<setw(2)<<minute;
		printf(" %s %s %d born\n", whichside[color], name, number);
	}
	char *name;//名字
	int number;//编号
	int health;//生命值
	int attack;//攻击力
	int position;//所在城市编号，0为红方大本营，numberofcity+1为蓝方大本营
	int color;//所属阵营
	virtual void move()//控制移动的函数
	{
		if(color==red)//红色右移
			position++;
		else//蓝色左移
			position--;
		cout <<setfill('0')<<setw(3)<<hour<< ':'<<setfill('0')<<setw(2)<<minute;
		if(position==numberofcity+1||position==0)//到达总部
		{
			printf(" %s %s %d reached %s headquarter with %d elements and force %d\n",whichside[color], name, number, whichside[3-color], health, attack);
			delete this;
		}
		else//到达城市
		printf(" %s %s %d marched to city %d with %d elements and force %d\n",whichside[color], name, number, position, health, attack);
	}
	virtual bool hurt(int attacking)
	{//受伤的函数
		health-=attacking;
		if(health>0)//没死
			return false;
		else
		{//死了
			cout <<setfill('0')<<setw(3)<<hour<< ':'<<setfill('0')<<setw(2)<<minute;
			printf(" %s %s %d was killed in city %d\n", whichside[color], name, number, position);
			return true;
		}
	}
	virtual void fight(monster *x)
	{//攻击函数
		cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
		printf(" %s %s %d attacked %s %s %d in city %d with %d elements and force %d\n",whichside[color], name, number, whichside[x->color], x->name, x->number, position, health, attack);
		if(!x->hurt(attack))//没死则反击
			x->fightback(this);
		else
		{//死了，如果是Lion，吸血
			if(!strcmp(x->name,"lion"))
				health+=lionhealthbefore;
		}
	}
	virtual void fightback(monster *x)
	{//反击函数
		cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2) <<minute;
		printf(" %s %s %d fought back against %s %s %d in city %d\n",whichside[color], name, number, whichside[x->color], x->name, x->number, position, health, attack);
		if(x->hurt(attack/2) &&!strcmp(x->name,"lion"))//死了，如果是Lion，吸血
			health+=lionhealthbefore;
	}
};
class dragon:public monster//龙
{	public:
	dragon(char * inputname, int inputhealth, int inputattack, int inputnumber, int inputcolor, int inputposition):monster(inputname,inputhealth, inputattack,inputnumber,inputcolor,inputposition)
	{}
	virtual void fight(monster *x)
	{
		monster::fight(x);
		if(health>0)//咆哮
		{
			cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2) <<minute;
			printf(" %s %s %d yelled in city %d\n",whichside[color], name, number, position);
		}
	}

};
class ninja:public monster//忍者
{
		public:
	ninja(char * inputname, int inputhealth, int inputattack, int inputnumber, int inputcolor, int inputposition):monster(inputname,inputhealth, inputattack,inputnumber,inputcolor,inputposition)
	{}
	virtual void fightback(monster *x)//我忍了
	{
	}
};
class iceman:public monster//冰人
{
	public:
	iceman(char * inputname, int inputhealth, int inputattack, int inputnumber, int inputcolor, int inputposition):monster(inputname,inputhealth, inputattack,inputnumber,inputcolor,inputposition)
	{step=0;}
	int step;
	virtual void move()//两步自残
	{
		step++;
		if(step==2)
		{
			step=0;
			attack+= 20;
			if(health>9)
				health-= 9;
			else
				health=1;
		}
		monster::move();
	}
};
class lion:public monster//狮子
{
		public:
	lion(char * inputname, int inputhealth, int inputattack, int inputnumber, int inputcolor, int inputposition):monster(inputname,inputhealth, inputattack,inputnumber,inputcolor,inputposition)
	{}
	virtual bool hurt(int attacking)//损己利人
	{
		 lionhealthbefore=health;//记录生命值以备吸取
		return monster::hurt(attacking);
	}
};
class wolf:public monster//狼
{	public:
	wolf(char * inputname, int inputhealth, int inputattack, int inputnumber, int inputcolor, int inputposition):monster(inputname,inputhealth, inputattack,inputnumber,inputcolor,inputposition)
	{numberkilled=0;}
	int numberkilled;
	virtual void fight(monster *x)
	{
		cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
		printf(" %s %s %d attacked %s %s %d in city %d with %d elements and force %d\n",whichside[color], name, number, whichside[x->color], x->name, x->number, position, health, attack);
		if(!x->hurt(attack))
			x->fightback(this);
		else
		{
			numberkilled++;
			if(numberkilled==2)//杀人如麻
			{
				health*=2;
				attack*=2;
				numberkilled=0;
			} 
			if(!strcmp(x->name,"lion"))//吸狮子血
				health+=lionhealthbefore;
			//delete x;
		}
	}
};
struct city
{
	int life;//生命源
	int whowinbefore;//记录是谁在之前在这个城市取得的胜利，1为红，2为蓝
	int flag;//记录现在的旗帜颜色，0为无，1为红，2为蓝
	monster * warrior[3];
};
void setcity(city &mycity)//初始化城市的函数，传入一个引用
{
	mycity.life=0;
	mycity.whowinbefore=none;
	mycity.flag=none;
	mycity.warrior[0]=NULL;
	mycity.warrior[1]=NULL;
	mycity.warrior[2]=NULL;
}
class center
{	public:
	int life;//存储的生命源
	int number;//下一个产生的怪物的编号
	int enemy;//大本营中敌人数目
	int color;//颜色
	monster *newmonster;//产生怪物的指针
	center(int inputlife,int inputcolor):life(inputlife),color(inputcolor)
	{
		enemy=0;
		number=1;
	}
	bool endgame()
	{
		if(enemy==2)
		{
			cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
			printf(" %s headquarter was taken\n", whichside[color]);
			return true;
		}
		return false;
	}
	monster * create()//生成怪物的函数，未生成返回NULL
	{
		if(color==red)
		{
			switch(number%5)
			{
			    case 1:
					if(originalhealth[2]<=life)
					{newmonster = new iceman("iceman", originalhealth[2], originalattack[2], number, red, 0);life-=originalhealth[2];number++;
					return newmonster;}
					break;
				case 2:
					if(originalhealth[3]<=life){newmonster = new lion("lion", originalhealth[3], originalattack[3], number, red, 0);life-=originalhealth[3];number++;
					return newmonster;}
					break;
				case 3:
					if(originalhealth[4]<=life){newmonster = new wolf("wolf", originalhealth[4], originalattack[4], number, red, 0);life-=originalhealth[4];number++;
					return newmonster;}
					break;
				case 4:
					if(originalhealth[1]<=life){newmonster = new ninja("ninja", originalhealth[1], originalattack[1], number, red, 0);life-=originalhealth[1];number++;
					return newmonster;}
					break;
				case 0:
					if(originalhealth[0]<=life){newmonster = new dragon("dragon", originalhealth[0], originalattack[0], number, red, 0);life-=originalhealth[0];number++;
					return newmonster;}
					break;
				default: 
				return NULL;
			}
		}
		else
		{
			switch(number%5)
			{
			    case 1:
					if(originalhealth[3]<=life){newmonster = new lion("lion", originalhealth[3], originalattack[3], number, blue, numberofcity+1);life-=originalhealth[3];number++;
					return newmonster;}
					break;
				case 2:
					if(originalhealth[0]<=life){newmonster = new dragon("dragon", originalhealth[0], originalattack[0], number, blue, numberofcity+1);life-=originalhealth[0];number++;
					return newmonster;}
					break;
				case 3:
					if(originalhealth[1]<=life){newmonster = new ninja("ninja", originalhealth[1], originalattack[1], number, blue, numberofcity+1);life-=originalhealth[1];number++;
					return newmonster;}
					break;
				case 4:
					if(originalhealth[2]<=life){newmonster = new iceman("iceman", originalhealth[2], originalattack[2], number, blue, numberofcity+1);life-=originalhealth[2];number++;
					return newmonster;}
					break;
				case 0:
					if(originalhealth[4]<=life){newmonster = new wolf("wolf", originalhealth[4], originalattack[4], number, blue, numberofcity+1);life-=originalhealth[4];number++;
					return newmonster;}
					break;
				default: 
				return NULL;
			}
		}
		return NULL;//生命源不足，返回NULL
	}
};
int timefly()//处理时间的函数，返回值为0~5，表示现在处于哪个阶段
{
	if(pasttime>=originaltime)
		return -1;
	pasttime+=10;
	minute+=10;
	if(minute>=60)
	{
		hour+=1;
		minute-=60;
	}
	return minute/10;
}

int main()
{
	//freopen("war.in","r",stdin);
	//freopen("war.out","w",stdout);
	int t,tt;//t总测试组数，tt目前进行到第几组
	int tempblue,tempred;//缓存双方因为战胜对手而获得的生命源
	int i;//用于循环的变量
	bool stop;//用于结束本组数据的变量
	city cities[30];//生成城市的组数
	cin>>t;
	for(tt=1;tt<=t;tt++)
	{
		for(i=0;i<30;i++)//初始化城市
		setcity(cities[i]);
		cin>>originallife>>numberofcity>>originaltime;//输入
		for(i=0;i<5;i++)cin>>originalhealth[i];
		for(i=0;i<5;i++)cin>>originalattack[i];
		minute=-10;pasttime=-10;hour=0;stop=false;//初始化
		center redcenter(originallife,red),bluecenter(originallife,blue);
		cout << "Case:" <<tt<<endl;//第几组
		while(!stop)
		{
			switch(timefly())
			{
			    case -1://时间到
				   stop=true;
			    break;
			    case 0://总部生成怪物
					cities[0].warrior[red]=redcenter.create();
					cities[numberofcity+1].warrior[blue]=bluecenter.create();
				break;
			    case 1://怪物前进
					if(cities[1].warrior[blue])//蓝方可能到达红方大本营的怪物
					{
						cities[1].warrior[blue]->move();
						redcenter.enemy++;
					}
					if(redcenter.endgame())stop=true;//是否继续游戏
					for(i=1;i<=numberofcity;i++)//群体移动
					{
						if(cities[i-1].warrior[red])
						cities[i-1].warrior[red]->move();
						if(cities[i+1].warrior[blue])
						cities[i+1].warrior[blue]->move();
					}
					if(cities[numberofcity].warrior[red])//红方可能到达蓝方大本营的怪物
					{
						cities[numberofcity].warrior[red]->move();
						bluecenter.enemy++;
					}
					if(bluecenter.endgame())stop=true;//是否继续游戏
					for(i=0;i<=numberofcity;i++)//城市中存储的怪物的指针要移位
						cities[i].warrior[blue]=cities[i+1].warrior[blue];
					for(i=numberofcity+1;i>0;i--)
						cities[i].warrior[red]=cities[i-1].warrior[red];
				break;
				case 2://城市生成生命源
					for(i=1;i<=numberofcity;i++)
						cities[i].life+=10;
				break;
				case 3://怪物独揽生命源
					for(i=1;i<=numberofcity;i++)
					{
						if(cities[i].warrior[red]&&!cities[i].warrior[blue])
						{	//红方独揽
							redcenter.life+=cities[i].life;
							cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
							printf(" red %s %d earned %d elements for his headquarter\n",cities[i].warrior[red]->name, cities[i].warrior[red]->number,cities[i].life);
							cities[i].life=0;
						}
						if(!cities[i].warrior[red]&&cities[i].warrior[blue])
						{   //蓝方独揽
							bluecenter.life+=cities[i].life;
							cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
							printf(" blue %s %d earned %d elements for his headquarter\n",cities[i].warrior[blue]->name, cities[i].warrior[blue]->number,cities[i].life);
							cities[i].life=0;
						}
					}
				break;
				case 4://怪物厮杀
					tempblue=0;
					for(i=1;i<=numberofcity;i++)
					{
						if(cities[i].warrior[red]&&cities[i].warrior[blue])//假如一个城市里有两个人
						{
						   if(cities[i].flag==red||(cities[i].flag!=blue&&i%2==1))//红方先出招
						   {
								cities[i].warrior[red]->fight(cities[i].warrior[blue]);
								if(cities[i].warrior[red]->health>0&&cities[i].warrior[blue]->health<=0)//红方胜利
							{
								cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
								printf(" red %s %d earned %d elements for his headquarter\n",cities[i].warrior[red]->name, cities[i].warrior[red]->number, cities[i].life);
									if(cities[i].whowinbefore==red)//两连胜，升旗
								{
										if(cities[i].flag==none)
									{
										cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
										printf(" red flag raised in city %d\n", i);
									}
										cities[i].flag=red;
								}
								else//这局红赢了
									cities[i].whowinbefore=red;
								}
							else if(cities[i].warrior[red]->health<=0&&cities[i].warrior[blue]->health>0)//蓝方反击把红方K死了
							{
								if(bluecenter.life>=8)//奖励1蓝方英雄生命源
								{
									cities[i].warrior[blue]->health+=8;
									bluecenter.life-=8;
								}
								cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
								printf(" blue %s %d earned %d elements for his headquarter\n",cities[i].warrior[blue]->name, cities[i].warrior[blue]->number, cities[i].life);
								tempblue+=cities[i].life;//锁存战斗胜利获得的生命源
								cities[i].life=0;
								if(cities[i].whowinbefore==blue)//是否两连胜
								{
									if(cities[i].flag==none)//升旗
									{
										cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
										printf(" blue flag raised in city %d\n", i);
									}
									cities[i].flag=blue;
								}
								else
									cities[i].whowinbefore=blue;
							}
							else cities[i].whowinbefore=none;
						   }
						else if(cities[i].flag==blue||(cities[i].flag!=red&&i%2==0))
						{//蓝方率先暴动
							cities[i].warrior[blue]->fight(cities[i].warrior[red]);
							if(cities[i].warrior[red]->health>0&&cities[i].warrior[blue]->health<=0)
							{//红方果断反击，蓝方当场毙命
								cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
								printf(" red %s %d earned %d elements for his headquarter\n",cities[i].warrior[red]->name, cities[i].warrior[red]->number, cities[i].life);
								if(cities[i].whowinbefore==red)//是否连胜
								{
									if(cities[i].flag==none)//升旗
									{
										cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
										printf(" red flag raised in city %d\n",i);
									}
										cities[i].flag=red;
								}
								else
									cities[i].whowinbefore=red;
							}
							else if(cities[i].warrior[red]->health<=0&&cities[i].warrior[blue]->health>0)
							{//蓝方竟然被红方反击致死了
								if(bluecenter.life>=8)
								{//奖励
									cities[i].warrior[blue]->health+=8;
									bluecenter.life-=8;
								}
								cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
								printf(" blue %s %d earned %d elements for his headquarter\n",cities[i].warrior[blue]->name, cities[i].warrior[blue]->number, cities[i].life);
								tempblue+=cities[i].life;//锁存战斗获得的生命源
								cities[i].life=0;
								if(cities[i].whowinbefore==blue)//是否连胜
								{
									if(cities[i].flag==none)//升旗
									{
										cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
										printf(" blue flag raised in city %d\n", i);
									}
									cities[i].flag=blue;
								}
								else
									cities[i].whowinbefore=blue;
							}
							else cities[i].whowinbefore=none;
						   }
						}
					}
					tempred=0;
					for(i=numberofcity;i>0;i--)//奖励红方
					{
						if(cities[i].warrior[red]&&cities[i].warrior[blue])
						{
						if(cities[i].warrior[red]->health>0&&cities[i].warrior[blue]->health<=0)//红方在本次战斗中胜利
						{
							if(redcenter.life>=8)
							{
								redcenter.life-=8;
								cities[i].warrior[red]->health+=8;
							}
							tempred+=cities[i].life;
							cities[i].life=0;
							delete cities[i].warrior[blue];//移走蓝方尸体
							cities[i].warrior[blue]=NULL;
						}
						else if(cities[i].warrior[red]->health<=0&&cities[i].warrior[blue]->health>0)//蓝方在本次战斗中胜利
						{
							delete cities[i].warrior[red];//移走红方尸体
							cities[i].warrior[red]=NULL;
						}

						}
					}
					redcenter.life+=tempred;//生命源送回总部
					bluecenter.life+=tempblue;
				break;
				case 5://总部“时终”总结，报告剩余生命源
					cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
					printf(" %d elements in red headquarter\n", redcenter.life);
					cout <<setfill('0')<<setw(3)<<hour<<':'<<setfill('0')<<setw(2)<<minute;
					printf(" %d elements in blue headquarter\n", bluecenter.life);
				break;
			}
		}
	}
	return 0;
}
