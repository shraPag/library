void login_pass(string p)
{
	int len,ctr1=0,ctr2=0; 
	len=p.length();
	if((len>=6)&&(len<=14))
	{
		if((p[0]>=65)&&(p[0]<=90))
		{
			for(int i=1;i<len;i++)
			{
				if((p[i]=='!')||(p[i]=='~')||(p[i]=='`')||(p[i]=='@')||(p[i]=='$')||(p[i]=='%')||(p[i]=='^')||(p[i]=='&')||(p[i]=='*')||(p[i]=='(')||(p[i]==')')||(p[i]=='-')||(p[i]=='_')||(p[i]=='+')||(p[i]=='=')||(p[i]=='.')||(p[i]==',')||(p[i]=='?')||(p[i]=='>'))
				{
					for(int j=1;j<len;j++)
					{
						if((p[j]>=48)&&(p[j]<=57))
						{
							cout<<"Valid password"<<endl;
							break;
						}

						else
						{
							ctr2++; 
							continue;
						}
					}
					if(ctr2==len-3)
					{
						cout<<"Invalid password"<<endl;
						break;
					}
					
				}

				else
				{
					continue;
					ctr1++; //ifctr==len-2 the invalid
				}	
			}
			if(ctr1==len-2)
			{
				cout<<"Invalid password"<<endl;
				
			}
		}

		else
		{
			cout<<"Invalid password"<<endl;
		}
	}

	else
	{
		cout<<"Inavlid password"<<endl;
	}	
}
