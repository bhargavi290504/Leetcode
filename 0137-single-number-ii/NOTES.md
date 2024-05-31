for o(1) spae we use xor to find the unique element
so
int res=0;
for(int num:nums)  {
res^=num;
}
return res;