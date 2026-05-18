
int FUN_ram_42029a52(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4202d4e0();
  if (iVar1 == 0) {
    iVar2 = 6;
  }
  else {
    iVar2 = FUN_ram_42029a16(0xffff,param_1,0,iVar1,0);
    if (iVar2 == 0) {
      *param_2 = iVar1;
      return 0;
    }
  }
  (*(code *)&SUB_ram_40011a08)(iVar1);
  return iVar2;
}

